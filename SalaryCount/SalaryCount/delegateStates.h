#ifndef DELEGATESTATES_H
#define DELEGATESTATES_H

#include <QtTest/QtTest>
#include "dbmanager.h"
#include"qsqldatabase.h"

#include "unittest/DirectiveGeneratorTest.h"
#include "ui_salarycount.h"

class delegateStates : public QObject
{
	Q_OBJECT

public:
	delegateStates();
	~delegateStates();

protected:
	enum app_states { USUAL, ADD, EDIT};
	app_states currentState;

protected:
	template <class T>
	T* shapeDataObject() = 0;
	virtual void validateData() const = 0;
	virtual void loadListItems() const = 0;
	virtual void updateListItems() const = 0;

signals:
	void changeState(bool isChanging);
};

#endif // DELEGATESTATES_H