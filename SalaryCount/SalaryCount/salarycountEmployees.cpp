#include "salarycountEmployees.h"

salarycountEmployees::salarycountEmployees(Ui_SalaryCount *ui, QString name)
	:delegateStates()
{
	this->setObjectName(name);
	this->ui = ui;//�� ����� �������� ������

	journal = new log_errors();//������ ������

	ui->eOrderNum->setEnabled(false);

	connect(ui->addEmployeeBtn,SIGNAL(pressed()), SLOT(addEmployee()));
	connect(ui->editEmployeeBtn,SIGNAL(pressed()), SLOT(editDutyChart()));
	connect(ui->cancelEmployeeBtn,SIGNAL(pressed()), SLOT(cancelNewDutyChart()));
	/*connect(ui->saveDutyChartBtn,SIGNAL(pressed()),this,SLOT(saveNewDutyChart()));
	connect(ui->deleteDutyChart,SIGNAL(pressed()), SLOT(deleteDutyChart()));

	connect(ui->payFormChoice,SIGNAL(currentIndexChanged(int)), SLOT(changePayForm(int)));
	connect(ui->dutyChartList,SIGNAL(currentRowChanged(int)), SLOT(showSelectedItem(int)));*/
}

salarycountEmployees::~salarycountEmployees()
{

}

Employee* salarycountEmployees::shapeDataObject()
{
	int id =0;
	if(this->currentState == app_states::EDIT)
	{
		id = ui->employeeList->currentItem()->type();//��������� ���-������ ��� ����
	}

	QString FIO = ui->eFIO->text();
	QString phone = ui->eNumberPhone->text();
	int INN = ui->INN->text().toInt();
	int dutyChart = ui->eDutyChart->currentData().toInt();
	int hire_dir = ui->eOrderNum->text().toInt();

	Employee *obj = new Employee();
	return NULL;
}

void salarycountEmployees::parseDataObject(const Employee* obj)
{

}

void salarycountEmployees::clearFields()
{
	ui->eFIO->clear();
	ui->INN->clear();
	ui->eNumberPhone->clear();

	try
	{
		//���������� ����������� �������� ���� ������ �� ������
		QDate minDate = getMinimumRecipientDate();
		if(!minDate.isValid()) throw this->journal->invalidData();
		ui->eReceiptDate->setMinimumDate(getMinimumRecipientDate());

		//���������� ����� ������� � ������ �� ������
		int hdID = getNewHireDirectiveNumber();
		if(hdID==-1) throw this->journal->invalidData();
		ui->eOrderNum->setText(QString::number(hdID+1));

		//�������� �� ������������ �������� �����
		ui->eSalary->setValue(ui->eSalary->minimum());

		//�������� ���� ����� ������ �����
		ui->ePayFormChoice->setCurrentIndex(0);

		//��������� ����� ���� ���������
		if(!fillDutyChartComboBox()) throw this->journal->parseError();
	}
	catch(log_errors::exception_states e)
	{
		if(this->currentState != app_states::USUAL)
		{
			switchMode(app_states::USUAL);//����� � ��������� ���������
		}
	}
}

int salarycountEmployees::getNewHireDirectiveNumber()
{
	int hdID;

	try{

		if((hdID = HireDirective::lastDirectiveId())==-1) 
			throw this->journal->invalidData("���������� �������� ����� ���������� �������");

		return hdID+1;
	}
	catch(log_errors::exception_states e)
	{
		show_last_error();
		this->journal->lastConflictNonResolved();
		return hdID;
	}
}

bool salarycountEmployees::fillDutyChartComboBox()
{
	try
	{
		if(ui->ePayFormChoice->count()!=2 || ui->ePayFormChoice->currentIndex()==-1) 
			throw this->journal->invalidData("����� � ��������");

		long countDutyChart = DutyChart::countEntries();
		if(!countDutyChart) throw this->journal->notFound("�� ������� �������� ������� ������, �������� ��� �� �������");

		if(countDutyChart != ui->eDutyChart->count())
		{
			QMap<int,QString> &charts = DutyChart::getAllByPayForm(ui->ePayFormChoice->currentIndex() ? PayForm::PER_HOUR : PayForm::PER_MONTH);

			if(!charts.count()) throw this->journal->invalidData("�� ������� �������� ������� ������, �������� ��� �� �������");

			ui->eDutyChart->clear();

			QList<int> &keys = charts.keys();
			foreach(const int iter, keys)
			{
				ui->eDutyChart->addItem( charts.value(iter),QVariant(iter));
			}
		}

		return (bool)countDutyChart;
	}
	catch(log_errors::exception_states e)
	{
		show_last_error();
		this->journal->lastConflictNonResolved();

		return false;
	}
}

QDate salarycountEmployees::getMinimumRecipientDate()
{
	try
	{
		BillingPeriod *curPer = BillingPeriod::getCurrentPeriod();
		if(!curPer) throw this->journal->nullPtr("������ �������� ������� �� ������������������");

		QDate startDate = curPer->startDate();
		startDate.setDate(startDate.year(),(startDate.month()!=12 ? startDate.month()+1 : 1),1);
	
		delete curPer;

		return startDate;
	}
	catch(log_errors::exception_states e)
	{
		show_last_error();
		this->journal->lastConflictNonResolved();

		return QDate();
	}
}

void salarycountEmployees::switchMode(app_states state)
{
	this->currentState = state;//�������� ��������� ����������
	bool isAddState = state==app_states::ADD;

	//�������� ��������� � ������ ���� ��� ������� �������� ����
	bool triggerState = false;
	if(state!=app_states::USUAL)
	{
		triggerState = true;
	}

	//��������� ��������� ����
	ui->eReceiptDate->setEnabled(isAddState);
	ui->workingDataBox->setEnabled(isAddState);//triggerState
	ui->personalDataBox->setEnabled(triggerState);
	ui->saveEmployeeBtn->setEnabled(triggerState);
	ui->cancelEmployeeBtn->setEnabled(triggerState);

	ui->employeeBox->setEnabled(!triggerState);

	emit changeState(triggerState);//������� ��������� � ������������ ����
}

void salarycountEmployees::saveNewEntries(Employee* obj)
{

}

void salarycountEmployees::saveEditableEntries(Employee* obj)
{

}

void salarycountEmployees::updateInfo(QString name)
{

}

void salarycountEmployees::addEmployee()
{
	switchMode(app_states::ADD);
	clearFields();//clear fields

	ui->employeeList->setCurrentRow(-1);
}

void salarycountEmployees::editEmployee()
{
	switchMode(app_states::EDIT);
}

void salarycountEmployees::cancelNewEmployee()
{
	switchMode(app_states::USUAL);

	int row = ui->employeeList->currentRow();
	if(row!=-1)
	{ 
		showSelectedItem(row);
	}
	else
	{
		clearFields();//clear fields
	}
}

void salarycountEmployees::saveNewEmployee()
{

}

void salarycountEmployees::deleteEmployee()
{

}

void salarycountEmployees::changePayForm(int index)
{
	/*if(index)
	{
		ui->workTimeEdit->setMinimumTime(QTime(1,0));
		ui->workTimeEdit->setEnabled(true);

	}
	else
	{
		ui->workTimeEdit->setMinimumTime(QTime(0,0));
		ui->workTimeEdit->setEnabled(false);
		ui->workTimeEdit->setTime(QTime(0,0));
	}*/
}

void salarycountEmployees::showSelectedItem(int row)
{

}