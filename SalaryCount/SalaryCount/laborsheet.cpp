#include "laborsheet.h"

LaborSheet::LaborSheet()
    : DbRecord(0)
{

}
LaborSheet::LaborSheet(int employeeId)
    : DbRecord(0)
{
    this->employeeId = employeeId;
}
bool LaborSheet::fillWithDefaults()
{
	// Вычислить относительное смещение наложения графика на месяц
    QDate buffer_date = this->_dutyChart->anchorDate();
    int count_diff_days = 0;
    count_diff_days = abs(buffer_date.daysTo(this->_beginDate));
    int length = _dutyChart->length();
    int bias = count_diff_days % length;
    int dutychart_index = bias;
	
	this->_grid.clear();
	// Заполнить табель отметками по умолчанию
    int month_length = this->_beginDate.daysInMonth();
    for(int i = 0; i < month_length; ++i,dutychart_index++){
        if(dutychart_index >= length)
            dutychart_index = 0;
        Mark m(_dutyChart->grid()[dutychart_index]);
        this->_grid.push_back(m);
    }
	
	// Обновить табель в БД
    return this->update();
}
LaborSheet::~LaborSheet()
{

}


int LaborSheet::countDefaultTimeUnits() const
{
	int total;
	return 0;
}
int LaborSheet::countActualTimeUnits () const
{
	return 0;
}

