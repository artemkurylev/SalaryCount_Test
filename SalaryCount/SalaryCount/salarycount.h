#ifndef SALARYCOUNT_H
#define SALARYCOUNT_H

#include <QtWidgets/QMainWindow>
#include <qmessagebox.h>
#include "employee.h"
#include"laborsheet.h"
#include "ui_salarycount.h"

#include "salarycountDutyChart.h"


class SalaryCount : public QMainWindow
{
    Q_OBJECT

private:
	QAction* currentAction;

public:
    SalaryCount(QWidget *parent = 0);
    ~SalaryCount();

private:
    Ui_SalaryCount ui;

	salarycountDutyChart* dutyChart;
	bool editState;

private:
	bool isEditable();
	void showStackedItem(QString namePage);

	//������������
	void initialDBManager();

signals:
	void cancelChanges();
	void saveChanges();

private slots:

	void rememberState(bool state);

	//�������� �� ��������� ����������
	void showPage(QAction* actionEmited);
};
#endif // SALARYCOUNT_H
