#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QObject>
#include <qdatetime.h>
#include <qstring.h>
#include "dutychart.h"
#include "dbrecord.h"

class Employee : public DbRecord
{
    Q_OBJECT

public:
    Employee();
	Employee(int id);
    static bool createDbTable();
    bool fetch();
    ~Employee();

private:
    QDate hireDate;
    QString fio;
    QString phoneNumber;
    int INN;
    int nextDutyChart;
    QDate nextDutyChartSince;
};

#endif // EMPLOYEE_H
