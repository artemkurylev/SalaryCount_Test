#include "mark.h"

Mark::Mark()
    : DbRecord(0)
{
	_base = INVALID;
	_altered = INVALID;
} 

Mark::Mark(int baseMark)
    : DbRecord(NULL)
{
	_base = baseMark;
	_altered = INVALID;
} 

bool Mark::fetch()
{
    return false;
}
bool Mark::set()
{
    return false;
}
bool Mark::validate() const
{
    return false;
}
bool Mark::update() const
{
    if(DbManager::manager().checkConnection())
    {
        QSqlQuery* query = DbManager::manager().makeQuery();
        query->prepare("UPDATE `mark` SET base = :base , altered = :altered");
        query->bindValue(":base",this->_base);
        query->bindValue(":altered",this->_altered);
        if(query->exec())
        {
            delete query;
            return true;
        }
        else
        {
            delete query;
            return false;
        }
    }
    return false;
}
int Mark::insert() const
{
    if(DbManager::manager().checkConnection())
    {
        QSqlQuery* query = DbManager::manager().makeQuery();
        query->prepare("INSERT INTO `mark` (base,altered,dutychart_id,laborsheet_id) VALUES(:base,:altered,:dutychart_id,:laborsheet_id");
        query->bindValue(":base",this->_base);
        query->bindValue(":altered",this->_altered);
        query->bindValue(":dutychart_id",this->_dutychartId);
        query->bindValue(":laborsheet_id",this->_laborsheetId);
        if(query->exec())
        {
            if(query->exec("SELECT LAST_INSERT_ID()") && query->next())
                return query->value(0).toInt();
        }
        else
        {
            QString s = query->lastError().text();
            s+="as";
            return -1;
        }
        delete query;
    }
    else
    {
        return -1;
    }
}
bool Mark::createDbTable()
{
    if(DbManager::manager().checkConnection())
    {
        QSqlQuery* query = DbManager::manager().makeQuery();
        if(query->exec("CREATE TABLE IF NOT EXISTS `mark` (`id` INT(11) NOT NULL AUTO_INCREMENT, `base` INT(11), `altered` INT(11) ,`dutychart_id` INT(11),`laborsheet_id` INT(11), PRIMARY KEY(`id`))"))
            return true;
        else
        {
            QString s = query->lastError().text();
            s+="as";
            return false;
        }
        delete query;
    }
    else
    {
        return false;
    }
}
Mark::~Mark()
{

}
