#include "dbmanager.h"

struct DbConf loadDbConfig();
struct DbConf companyDbConfig();
#include <QDateTime>
#include <QFile>
#include <QSettings>
#include <QTimer>

DbManager::DbManager()
    : QObject(0)
{

}
/*static*/bool DbManager::singletonExists = false;
/*static*/bool DbManager::singletonCompanyExists = false;
/*static*/DbManager* DbManager::globalManager = 0;
/*static*/DbManager* DbManager::_companyManager = 0;
/*static*/bool DbManager::skipKeepAliveCheck = false;

DbManager::DbManager(const QString& hostName, const QString& dbName, int port,const QString& userName, const QString& pass)
{
	// ������� ������ ��
    this->db = QSqlDatabase::addDatabase("QMYSQL");
    //this->companyDb = QSqlDatabase::addDatabase("QMYSQL");
    this->db.setUserName(userName);
    //this->db.setDatabaseName(dbName);
    this->db.setHostName(hostName);
    this->db.setPort(port);
    this->db.setPassword(pass);

    if(this->db.open())
    {
		QSqlQuery q(this->db);
		if( q.exec(tr("CREATE DATABASE IF NOT EXISTS %1 CHARACTER SET utf8 COLLATE utf8_bin;").arg(dbName) ) )
		{
			QString str = "Ok";
			this->db.close();
		}
		else
		{
			QString str = db.lastError().text();
			str+= "as";
		}
    }
    else
    {
        QString str = db.lastError().text();
        str+= "as";
    }
	// ������ ��������� ���� ��
    //this->db = QSqlDatabase::addDatabase("QMYSQL");
    //this->db.setUserName(userName);
    this->db.setDatabaseName(dbName);
    //this->db.setHostName(hostName);
    //this->db.setPort(port);
    //this->db.setPassword(pass);
    if(this->db.open())
    {
		QString str = "Ok";
    }
    else
    {
        QString str = db.lastError().text();
        str+= "as";
    }
}
QSqlQuery* DbManager::makeQuery()
{
    return new QSqlQuery(this->db);
}
bool DbManager::checkConnection()
{
    if(db.isOpen())
    {
		if(skipKeepAliveCheck)
		{
			return true;
		}

		// set timer
		skipKeepAliveCheck = true;
		QTimer::singleShot(8000 /*ms*/, this, SLOT(ResumeKeepAliveCheck()));

		// �������� ���������� ����������
		// ��������: http://www.prog.org.ru/topic_6693_0.html Russian Qt Forum >> ���� ������ > Lost connection to MySQL server during query QMYSQL: Unable to execute query
		QSqlQuery qq = db.exec("SET NAMES 'utf8'");
		if (qq.lastError().type()!=QSqlError::NoError)
		{
			db.close();
			db.open();
		}

        return db.isOpen();
    }
    else
    {
		db.open();
		//return this->checkConnection(); // recurse
        return db.isOpen();
       //QString s= db.lastError().text();
        //return false;
    }
}
/*static*/ DbManager& DbManager::companyManager()
{
    if(!singletonCompanyExists)
    {
        struct DbConf conf = companyDbConfig();
        DbManager::_companyManager = new DbManager(conf.hostName,conf.dbName,conf.port,conf.userName,conf.pass);
        DbManager::singletonCompanyExists = 1;
    }
    return *(DbManager::_companyManager);
}
/*static*/ DbManager& DbManager::manager(QString dbName){
    if(!singletonExists)
    {
		struct DbConf conf = loadDbConfig();
        //if(dbName != 0)
        if( ! dbName.isEmpty() )
            conf.dbName = dbName;
		DbManager::globalManager = new DbManager(conf.hostName,conf.dbName,conf.port,conf.userName,conf.pass);
        DbManager::singletonExists = 1;
    }
    return *(DbManager::globalManager);
}
DbManager::~DbManager()
{

}
struct DbConf companyDbConfig(){
    struct DbConf  dbConf;
	QString fname = "companydbconfig.ini";
	QSettings s(fname, QSettings::IniFormat);
	
	if(!QFile::exists(fname))
	{
		dbConf.hostName = "localhost";
		dbConf.port = 3306;
		dbConf.dbName = "company";
		dbConf.userName = "root";
		dbConf.pass = "root"; // "our366Team";

		// <Debug only>!
		// write 
		s.beginGroup("db-local");
		s.setValue("hostName", dbConf.hostName);
		s.setValue("port", dbConf.port);
		s.setValue("dbName", dbConf.dbName);
		s.setValue("userName", dbConf.userName);
		s.setValue("pass", dbConf.pass);
		s.endGroup();
		// </Debug only>

		// write "commented" section
		s.beginGroup("db");
		s.setValue("hostName", "109.206.169.214");
		s.setValue("port", 443);
		s.setValue("dbName", "company");
		s.setValue("userName", "remote");
		s.setValue("pass", "!E3f5c712");
		s.endGroup();

		// write 
		s.beginGroup("meta");
		s.setValue("write_at", QDateTime::currentDateTime().toString("dd.MM.yyyy  hh:mm:ss"));
		s.endGroup();
	}
	else
	{
		s.beginGroup("db");
		dbConf.hostName = s.value("hostName", "localhost").toString();
		dbConf.port = s.value("port", 3306).toInt();
		dbConf.dbName = s.value("dbName", "salarycount").toString();
		dbConf.userName = s.value("userName", "root").toString();
		dbConf.pass = s.value("pass", "root").toString();
		s.endGroup();

		// read 
		s.beginGroup("meta");
		s.setValue("read_at", QDateTime::currentDateTime().toString("dd.MM.yyyy  hh:mm:ss"));
		s.endGroup();
	}

	return dbConf;
}
struct DbConf loadDbConfig()
{
	struct DbConf  dbConf;
	QString fname = "dbconfig.ini";
	QSettings s(fname, QSettings::IniFormat);
	
	if(!QFile::exists(fname))
	{
		dbConf.hostName = "localhost";
		dbConf.port = 3306;
		dbConf.dbName = "salarycount";
		dbConf.userName = "root";
		dbConf.pass = "root"; // "our366Team";

		// <Debug only>!
		// write 
		s.beginGroup("db-local");
		s.setValue("hostName", dbConf.hostName);
		s.setValue("port", dbConf.port);
		s.setValue("dbName", dbConf.dbName);
		s.setValue("userName", dbConf.userName);
		s.setValue("pass", dbConf.pass);
		s.endGroup();
		// </Debug only>

		// write "commented" section
		s.beginGroup("db");
		s.setValue("hostName", "109.206.169.214");
		s.setValue("port", 443);
		s.setValue("dbName", "salary_count");
		s.setValue("userName", "remote");
		s.setValue("pass", "!E3f5c712");
		s.endGroup();

		// write 
		s.beginGroup("meta");
		s.setValue("write_at", QDateTime::currentDateTime().toString("dd.MM.yyyy  hh:mm:ss"));
		s.endGroup();
	}
	else
	{
		s.beginGroup("db");
		dbConf.hostName = s.value("hostName", "localhost").toString();
		dbConf.port = s.value("port", 3306).toInt();
		dbConf.dbName = s.value("dbName", "salarycount").toString();
		dbConf.userName = s.value("userName", "root").toString();
		dbConf.pass = s.value("pass", "root").toString();
		s.endGroup();

		// read 
		s.beginGroup("meta");
		s.setValue("read_at", QDateTime::currentDateTime().toString("dd.MM.yyyy  hh:mm:ss"));
		s.endGroup();
	}

	return dbConf;
}