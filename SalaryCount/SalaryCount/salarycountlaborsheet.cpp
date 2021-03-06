#include "salarycountlaborsheet.h"
#include<qtablewidget.h>
#include "salarycount.h"

QTableWidgetItem* makeDateLabel(int day);


salarycountLaborSheet::salarycountLaborSheet(Ui_SalaryCount *ui, QString name)
{
	this->setObjectName(name);
	this->ui = ui;//�� ����� �������� ������

	this->_viewedPeriod = NULL;
	
	goToCurrentPeriod();

    //Connections
	connect(ui->BillingPeriod_dateEdit,SIGNAL(dateChanged(const QDate&)), this,SLOT(periodDateChanged(const QDate&))); // �������� ���� �������� �������
	connect(ui->ClosePeriod_button,SIGNAL(clicked()), this,SLOT(closePeriod())); // ������� ������� ������
	connect(ui->GoToCurrentPeriod_button,SIGNAL(clicked()), this,SLOT(goToCurrentPeriod())); // ������� �� ������� ������
    connect(ui->employeeLaborSheetTable,SIGNAL(currentCellChanged(int,int,int,int)),this, SLOT(showSelectedItem(int)));

    connect(ui->updateLaborBtn,SIGNAL(pressed()),SLOT(editLaborSheet()));
    connect(ui->saveEditedLaborBtn,SIGNAL(pressed()),SLOT(saveEditedLabor()));
    connect(ui->CancelLaborBtn,SIGNAL(pressed()),SLOT(cancelEditLabor()));

	ui->LabourGroupEdit->setEnabled(false);
    ui->employeeLaborSheetTable->setColumnWidth(0,0);
    /*ui->laborSheet->setMaximumWidth(500);
    ui->LabourGroupEdit->setMaximumWidth(550);*/
    for(int i = 0; i < 7;++i)
    {
        ui->laborSheet->setColumnWidth(i,70);
        
    }
}
salarycountLaborSheet::~salarycountLaborSheet()
{
	delete _viewedPeriod;
}

void salarycountLaborSheet::regenMarksCalendar()
{
    int start_day_of_week = _viewedPeriod->startDate().dayOfWeek() - 1;
    int month_length = _viewedPeriod->startDate().daysInMonth();
    int prev_month_length = _viewedPeriod->startDate().addMonths(-1).daysInMonth();
	
	// ������� ������� � ��������� ��������
	ui->laborSheet->clearContents();
	_comboboxes.clear();

	// �������� ������� ������...

	for(int i=0 ; i<start_day_of_week ; ++i)
	{
		// ����� �������� ������ � ������� �� ������ ������
		int day = prev_month_length + 1 - (start_day_of_week - i);
		ui->laborSheet->setItem(i/7,i % 7, makeDateLabel(day) );
	}

	QTextCodec* codec = QTextCodec::codecForLocale();
	for(int i=start_day_of_week ; i<start_day_of_week+month_length ; ++i)
	{
		int day = i - start_day_of_week + 1;
		// ����� �������� ����������
        QComboBox* combo = new QComboBox();
		combo->insertItem(0, codec->toUnicode("-���-"));
		combo->setCurrentIndex(0);
		combo->setToolTip(codec->toUnicode("<html><head/><body><b>%1</b> �����</body></html>").arg(day));
		combo->setEnabled(this->_viewedPeriod->status() == BillingPeriod::OPEN);
		_comboboxes.push_back(combo);
		ui->laborSheet->setCellWidget(i/7,i % 7, combo );
	}

	// 42 = 7 ���� * 6 ������
	for(int i=start_day_of_week+month_length ; i<42 ; ++i)
	{
		// ����� �������� ������ � ������� ����� ����� ������
		int day = i - (start_day_of_week+month_length) + 1;
		ui->laborSheet->setItem(i/7,i % 7, makeDateLabel(day) );
	}
    ui->LabourGroupEdit->setEnabled(this->_viewedPeriod->status() == BillingPeriod::CLOSED);
    ui->employeeLaborSheetTable->setColumnWidth(0,0);
}

/*! 
\param day � ��������� [1..31]
\returns ��������� �� QTableWidgetItem, ������� ����� ����� ����� �������
*/
QTableWidgetItem* makeDateLabel(int day)
{
        QTableWidgetItem *twitem = new QTableWidgetItem( QString::number(day) );
        twitem->setTextAlignment(Qt::AlignCenter);
        twitem->setFlags(Qt::ItemIsEnabled);
        //laborSheet->setItem(0, 0, twitem);
		return twitem;
}

void salarycountLaborSheet::switchMode(app_states state)
{
	this->currentState = state;

	bool triggerState = false;
	if(state==EDIT)
	{
		triggerState = true;
	}

    ui->LabourGroupEdit->setEnabled(triggerState);
	ui->saveEditedLaborBtn->setEnabled(triggerState);
	ui->CancelLaborBtn->setEnabled(triggerState);

	emit changeState(triggerState); // ����� ����, ����� ������� �������� - ����� ������������ ����������� �� ����� ������� ???
}
void salarycountLaborSheet::updateInfo(QString name)
{
    if(this->objectName().compare(name) != 0)
		return;

	bool company_initialized = BillingPeriod::countEntries() > 1;
	if( !company_initialized )
	{
		SalaryCount::globalApp->showPage(ui->ShowProfileAction);
		return;
	}

		QList<LaborSheet> labor_data = LaborSheet::getByPeriodId(_viewedPeriod->id());
		
		disconnect(ui->employeeLaborSheetTable,SIGNAL(currentCellChanged(int,int,int,int)),this, SLOT(showSelectedItem(int)));

		ui->employeeLaborSheetTable->clearContents();
        while(ui->employeeLaborSheetTable->rowCount() > 0)
            ui->employeeLaborSheetTable->removeRow(0);
        int row = 0;
        for(int i = 0; i < labor_data.size(); ++i)
        {
            ui->employeeLaborSheetTable->insertRow(row);
            Employee employee(*(labor_data[i].employee()));
            employee.fetch();
			// ������� �������� �����
			for(int wi=0 ; wi<5 ; ++wi)
				ui->employeeLaborSheetTable->setItem(row,wi,new QTableWidgetItem(" --- "));

            ui->employeeLaborSheetTable->item(row,0)->setText(QString::number(labor_data[i].id()));
            ui->employeeLaborSheetTable->item(row,0)->setData(Qt::UserRole,labor_data[i].id());
            ui->employeeLaborSheetTable->item(row,1)->setText(employee.fio());
            ui->employeeLaborSheetTable->item(row,2)->setText(QString::number(labor_data[i].award()));
            ++row;
        }

		// ������ "��������"
		ui->updateLaborBtn->setEnabled(row > 0 && this->_viewedPeriod->status() == BillingPeriod::OPEN);

	    connect(ui->employeeLaborSheetTable,SIGNAL(currentCellChanged(int,int,int,int)),this, SLOT(showSelectedItem(int)));

        if(ui->employeeLaborSheetTable->rowCount() > 0)
		{
			ui->employeeLaborSheetTable->setCurrentCell(0,1);
		}

		wchar_t* calendar_ru[12] = {L"������",L"�������",L"����",L"������",L"���",L"����",L"����",L"������",L"��������",L"�������",L"������",L"�������"};
		ui->Month_label->setText(QString::fromWCharArray(L"�����: %1 %2")
			.arg(QString::fromWCharArray( calendar_ru[_viewedPeriod->startDate().month() - 1] ))
			.arg(this->_viewedPeriod->startDate().year()));
}

void salarycountLaborSheet::setDescription(LaborSheet& laborSheet)
{
	int cur_row = ui->employeeLaborSheetTable->currentRow();
	QString text("");
	text += QString::fromWCharArray(L"���������: %1")
		.arg(ui->employeeLaborSheetTable->item(cur_row,1)->text());
	ui->Description_label->setText(text);

	ui->Description_table->clearContents();
	while(ui->Description_table->rowCount() > 0)
		ui->Description_table->removeRow(0);
	foreach(LaborSheetDescriptionLine dl, laborSheet.description())
	{
		int rows = ui->Description_table->rowCount();
		ui->Description_table->insertRow( rows );
		ui->Description_table->setVerticalHeaderItem(rows, new QTableWidgetItem(dl.name) );
		ui->Description_table->setItem(rows, 0, new QTableWidgetItem(dl.default_value) );
		//ui->Description_table->setItem(rows, 1, new QTableWidgetItem(dl.base_value) );
		ui->Description_table->setItem(rows, 1, new QTableWidgetItem(dl.altered_value) );

		// �������� �������� � �������� �������
		for(int col=3 ; col<=4 ; ++col)
		{
			if(dl.name == ui->employeeLaborSheetTable->horizontalHeaderItem(col)->text())
			{
				ui->employeeLaborSheetTable->item(cur_row,col)->setText(dl.altered_value);
			}
		}
	}
}

void salarycountLaborSheet::showSelectedItem(int row)
{
    if(row >= 0)
    {
        int id = ui->employeeLaborSheetTable->item(row,0)->data(Qt::UserRole).toInt();
        LaborSheet labor_sheet(id,0,0,QList<Mark>());
        labor_sheet.fetch();
		this->setDescription(labor_sheet);
        QList<Mark>marks = labor_sheet.grid();
        int start = _viewedPeriod->startDate().dayOfWeek() - 1;
        if(labor_sheet.payForm() == PER_MONTH)
        {
            //int row = 0;
        
            for(int i = start;i < marks.size() + start;++i){
                QComboBox* combo = (QComboBox*)ui->laborSheet->cellWidget(i/7,i%7);
                combo->clear();
                combo->insertItem(0,QString::fromWCharArray(L"��������"));
                combo->insertItem(1,QString::fromWCharArray(L"�������"));
                combo->insertItem(2,QString::fromWCharArray(L"�� ���"));
                if(!marks[i - start].isAltered())
                {
                    switch(marks[i - start].base())
                    {
                        case Mark::HOLIDAY:
                        {
                            combo->setCurrentIndex(0);
                            break;
                        }
                        case Mark::ATTENDS:
                        {
                            combo->setCurrentIndex(1);
                            break;
                        }
                        case Mark::MISS:
                        {
                            combo->setCurrentIndex(2);
                            break;
                        }
                    }
                }
                else
                {
                    switch(marks[i - start].altered())
                    {
                        case Mark::HOLIDAY:
                        {
                            combo->setCurrentIndex(0);
                            break;
                        }
                        case Mark::ATTENDS:
                        {
                            combo->setCurrentIndex(1);
                            break;
                        }
                        case Mark::MISS:
                        {
                            combo->setCurrentIndex(2);
                            break;
                        }
                    }
                }
            }
        }
        else
        {
            //int row = 0;
            for(int i = start;i <marks.size() + start;++i)
            {
                QComboBox* combo = (QComboBox*)ui->laborSheet->cellWidget(i/7,i%7);
                combo->clear();
                for(int j = 0; j <= 12; ++j)
                {
                    combo->insertItem(j,QString::number(j));
                }
                if(!marks[i - start].isAlteredCountHours()) 
                    combo->setCurrentIndex(marks[i - start].countHours());
                else
                    combo->setCurrentIndex(marks[i - start].alteredCountHours());
            }
        }
    }
}
void salarycountLaborSheet::periodDateChanged(const QDate& newdate)
{
	QDate date(newdate);
	if(date.day() != 1)
	{
		date.setDate(date.year(), date.month(), 1);
		ui->BillingPeriod_dateEdit->setDate(date);
	}
	if(this->_viewedPeriod->startDate() == date)
	{
		// ������� ���������� ������
		return;
	}

	BillingPeriod* bp = BillingPeriod::getByDate(date);
	if(bp)
	{
		delete this->_viewedPeriod;
		this->_viewedPeriod = bp;
		ui->ClosePeriod_button->setEnabled(this->_viewedPeriod->status() == BillingPeriod::OPEN);
		ui->GoToCurrentPeriod_button->setEnabled(this->_viewedPeriod->status() != BillingPeriod::OPEN);
		regenMarksCalendar();
        updateInfo(this->objectName());
	}
	else
	{
		error_msg("������","������� �� ����������");
	}
}
void salarycountLaborSheet::goToCurrentPeriod()
{
	BillingPeriod* bp = BillingPeriod::getCurrentPeriod();
	if(bp)
	{
        if(!this->_viewedPeriod)
		{
			// ���������� ������� ��� DateEdit [� ������ ���]
			QPair<QDate,QDate> date_span = BillingPeriod::getDateSpan();
			ui->BillingPeriod_dateEdit->setDateRange(date_span.first, date_span.second);

			this->_viewedPeriod = bp;
		    regenMarksCalendar();
        }
        ui->BillingPeriod_dateEdit->setDate(bp->startDate()); // ����� ������ ���������� ������� �� ��������� �����
        ui->CurrentPeriod_dateEdit->setDate(bp->startDate());
		ui->ClosePeriod_button->setEnabled(true);
		ui->GoToCurrentPeriod_button->setEnabled(false);
		//regenMarksCalendar();	// �������� ������ ��� �������(�� ����, �.�. ����������� ��� ����� ����)
	}
	else
	{
		// ERROR!
		ui->GoToCurrentPeriod_button->setText("�������� ���?!");
	}
}
void salarycountLaborSheet::closePeriod()
{
	bool ok = BookKeeper::closeBillingPeriod(*this->_viewedPeriod);
	if(!ok)
	{
		// ERROR !!!
		ui->ClosePeriod_button->setText("�������� ���?!");
	}
	ui->ClosePeriod_button->setEnabled(this->_viewedPeriod->status() == BillingPeriod::OPEN);
	ui->GoToCurrentPeriod_button->setEnabled(this->_viewedPeriod->status() != BillingPeriod::OPEN);

	// ���������� ������� ��� DateEdit
	QPair<QDate,QDate> date_span = BillingPeriod::getDateSpan();
	ui->BillingPeriod_dateEdit->setDateRange(date_span.first, date_span.second);
    ui->CurrentPeriod_dateEdit->setDate(date_span.second);

	updateInfo(this->objectName());
        
}
void salarycountLaborSheet::editLaborSheet()
{
    switchMode(EDIT);
}
void salarycountLaborSheet::saveEditableEntries(LaborSheet* obj)
{
	if(obj->update())
	{
		switchMode(USUAL);
	}
	else
	{
		error_msg("��������� ������ ���������","���������� ��������� ������...");
	}
}
void salarycountLaborSheet::saveEditedLabor()
{
    //��� ��� ���������
    LaborSheet* labor_sheet = shapeDataObject();
    saveEditableEntries(labor_sheet);
	this->setDescription(*labor_sheet); 
    delete labor_sheet;
}
void salarycountLaborSheet::cancelEditLabor()
{
	switchMode(USUAL);
	showSelectedItem( ui->employeeLaborSheetTable->currentRow() );
}
LaborSheet* salarycountLaborSheet::shapeDataObject()
{
    int id = 0;
    LaborSheet* obj = NULL;
	const QList<Mark> *grid = NULL;
	if(this->currentState == EDIT)
	{
        int row = ui->employeeLaborSheetTable->currentRow();
        id = ui->employeeLaborSheetTable->item(row,0)->data(Qt::UserRole).toInt();
		QList<Mark> m;
        obj = new LaborSheet(id,0,0,m);
		obj->fetch();
        grid = &obj->grid();
	}
    int start = _viewedPeriod->startDate().dayOfWeek() - 1; 
    QList<Mark> *ms = new QList<Mark>();
    PayForm pf = obj->payForm();
    for(int i = start; i - start < grid->size(); ++i)
	{
		QComboBox* combo = (QComboBox*)ui->laborSheet->cellWidget(i/7,i%7);

		int val = 0;
        Mark* m;
        m = new Mark(grid->at(i - start));
		switch(pf)
		{
			case PER_MONTH:
            {
                val = combo->currentIndex();
                if(val == 0)
                    val = Mark::HOLIDAY;
                else if(val == 1)
                    val = Mark::ATTENDS;
                else if(val == 2)
                    val = Mark::MISS;
				m->setAlteredMark(val); // ����� ������ ��� ������
                //if(_viewedPeriod->status() == BillingPeriod::OPEN)
                //{
                //    m->setBaseMark(val);
                //}
                //else
                //{
                //    m->setAlteredMark(val);
                //}
                break;
            }

			case PER_HOUR:
            {
                val = combo->currentIndex();
                m->setAlteredCountHours(val);
                break;
            }

			default:
				throw new nullptr_t;
		}
        ms->append(*m);
        delete m;
	}
    obj->setGrid(*ms);
	return obj;
}