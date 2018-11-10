/********************************************************************************
** Form generated from reading UI file 'salarycount.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALARYCOUNT_H
#define UI_SALARYCOUNT_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SalaryCount
{
public:
    QAction *CreateCompanyAction;
    QAction *OpenCompanyAction;
    QAction *LogOffAction;
    QAction *EmployeeListAction;
    QAction *LaborSheetAction;
    QAction *DutyCharAction;
    QAction *ExitAction;
    QAction *HireDirectiveAction;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *EmployeesPage;
    QGridLayout *gridLayout_8;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_14;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_11;
    QSpinBox *spinBox_4;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_5;
    QSpinBox *spinBox_3;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_10;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_12;
    QComboBox *comboBox_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_15;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QDateEdit *dateEdit;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QSpinBox *spinBox_5;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_8;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QWidget *LaborSheetsPage;
    QGridLayout *gridLayout_10;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_4;
    QTableWidget *employeeLaborSheetTable;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_14;
    QLineEdit *lineEdit_9;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_15;
    QDateEdit *dateEdit_2;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_9;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_2;
    QComboBox *comboBox_3;
    QListWidget *listWidget_3;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QWidget *DutyChartsPage;
    QGridLayout *gridLayout_7;
    QGroupBox *dutyChartBox;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *editDutyChart;
    QPushButton *deleteDutyChart;
    QListWidget *dutyChartList;
    QPushButton *addDutyChart;
    QGroupBox *dutyChartEdit;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_13;
    QDateEdit *dateEdit_3;
    QTableWidget *DutyChartMarksEdit;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_19;
    QComboBox *payFormChoice;
    QHBoxLayout *horizontalLayout_5;
    QTimeEdit *workTimeEdit;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *saveDutyChartBtn;
    QPushButton *cancelDutyChartBtn;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_17;
    QLineEdit *lineEdit_21;
    QWidget *HireDirectivesPage;
    QGridLayout *gridLayout_11;
    QPushButton *pushButton_15;
    QListWidget *listWidget_4;
    QPushButton *pushButton_16;
    QToolBar *mainToolBar;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *CompanyMenu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SalaryCount)
    {
        if (SalaryCount->objectName().isEmpty())
            SalaryCount->setObjectName(QStringLiteral("SalaryCount"));
        SalaryCount->resize(719, 559);
        QIcon icon;
        icon.addFile(QStringLiteral("topodkazy.png"), QSize(), QIcon::Normal, QIcon::Off);
        SalaryCount->setWindowIcon(icon);
        CreateCompanyAction = new QAction(SalaryCount);
        CreateCompanyAction->setObjectName(QStringLiteral("CreateCompanyAction"));
        OpenCompanyAction = new QAction(SalaryCount);
        OpenCompanyAction->setObjectName(QStringLiteral("OpenCompanyAction"));
        LogOffAction = new QAction(SalaryCount);
        LogOffAction->setObjectName(QStringLiteral("LogOffAction"));
        EmployeeListAction = new QAction(SalaryCount);
        EmployeeListAction->setObjectName(QStringLiteral("EmployeeListAction"));
        LaborSheetAction = new QAction(SalaryCount);
        LaborSheetAction->setObjectName(QStringLiteral("LaborSheetAction"));
        DutyCharAction = new QAction(SalaryCount);
        DutyCharAction->setObjectName(QStringLiteral("DutyCharAction"));
        ExitAction = new QAction(SalaryCount);
        ExitAction->setObjectName(QStringLiteral("ExitAction"));
        HireDirectiveAction = new QAction(SalaryCount);
        HireDirectiveAction->setObjectName(QStringLiteral("HireDirectiveAction"));
        centralWidget = new QWidget(SalaryCount);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        EmployeesPage = new QWidget();
        EmployeesPage->setObjectName(QStringLiteral("EmployeesPage"));
        gridLayout_8 = new QGridLayout(EmployeesPage);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        scrollArea = new QScrollArea(EmployeesPage);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setMinimumSize(QSize(280, 0));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 257, 564));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setEnabled(false);
        verticalLayout_14 = new QVBoxLayout(groupBox_2);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_11->addWidget(label_11);

        spinBox_4 = new QSpinBox(groupBox_2);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));

        verticalLayout_11->addWidget(spinBox_4);


        verticalLayout_14->addLayout(verticalLayout_11);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_8->addWidget(label_5);

        spinBox_3 = new QSpinBox(groupBox_2);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));

        verticalLayout_8->addWidget(spinBox_3);


        verticalLayout_14->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_9->addWidget(label_10);

        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout_9->addWidget(comboBox);


        verticalLayout_14->addLayout(verticalLayout_9);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_12->addWidget(label_12);

        comboBox_2 = new QComboBox(groupBox_2);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        verticalLayout_12->addWidget(comboBox_2);


        verticalLayout_14->addLayout(verticalLayout_12);


        gridLayout_2->addWidget(groupBox_2, 2, 0, 1, 1);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(false);
        verticalLayout_15 = new QVBoxLayout(groupBox);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);


        verticalLayout_15->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_2->addWidget(label_9);

        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        verticalLayout_2->addWidget(dateEdit);


        verticalLayout_15->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        spinBox_5 = new QSpinBox(groupBox);
        spinBox_5->setObjectName(QStringLiteral("spinBox_5"));

        verticalLayout_3->addWidget(spinBox_5);


        verticalLayout_15->addLayout(verticalLayout_3);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_7->addWidget(label_8);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout_7->addWidget(lineEdit_2);


        verticalLayout_15->addLayout(verticalLayout_7);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        pushButton_11 = new QPushButton(scrollAreaWidgetContents);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setEnabled(false);

        horizontalLayout_12->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(scrollAreaWidgetContents);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setEnabled(false);

        horizontalLayout_12->addWidget(pushButton_12);


        gridLayout_2->addLayout(horizontalLayout_12, 3, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_8->addWidget(scrollArea, 0, 1, 1, 1);

        groupBox_5 = new QGroupBox(EmployeesPage);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy1);
        groupBox_5->setMinimumSize(QSize(300, 0));
        gridLayout_3 = new QGridLayout(groupBox_5);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        lineEdit_4 = new QLineEdit(groupBox_5);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout->addWidget(lineEdit_4);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);

        listWidget = new QListWidget(groupBox_5);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout_3->addWidget(listWidget, 1, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        pushButton = new QPushButton(groupBox_5);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_8->addWidget(pushButton);

        pushButton_3 = new QPushButton(groupBox_5);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_8->addWidget(pushButton_3);


        gridLayout_3->addLayout(horizontalLayout_8, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(groupBox_5);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_3->addWidget(pushButton_2, 4, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_5, 0, 0, 1, 1);

        stackedWidget->addWidget(EmployeesPage);
        LaborSheetsPage = new QWidget();
        LaborSheetsPage->setObjectName(QStringLiteral("LaborSheetsPage"));
        gridLayout_10 = new QGridLayout(LaborSheetsPage);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        groupBox_6 = new QGroupBox(LaborSheetsPage);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        sizePolicy1.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy1);
        gridLayout_4 = new QGridLayout(groupBox_6);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        employeeLaborSheetTable = new QTableWidget(groupBox_6);
        employeeLaborSheetTable->setObjectName(QStringLiteral("employeeLaborSheetTable"));

        gridLayout_4->addWidget(employeeLaborSheetTable, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_14 = new QLabel(groupBox_6);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_3->addWidget(label_14);

        lineEdit_9 = new QLineEdit(groupBox_6);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        horizontalLayout_3->addWidget(lineEdit_9);


        gridLayout_4->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        pushButton_7 = new QPushButton(groupBox_6);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setEnabled(false);

        gridLayout_4->addWidget(pushButton_7, 3, 0, 1, 1);

        pushButton_6 = new QPushButton(groupBox_6);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setEnabled(false);

        gridLayout_4->addWidget(pushButton_6, 4, 0, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_15 = new QLabel(groupBox_6);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_14->addWidget(label_15);

        dateEdit_2 = new QDateEdit(groupBox_6);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setCalendarPopup(false);
        dateEdit_2->setCurrentSectionIndex(0);
        dateEdit_2->setDate(QDate(2000, 1, 1));

        horizontalLayout_14->addWidget(dateEdit_2);


        gridLayout_4->addLayout(horizontalLayout_14, 0, 0, 1, 1);


        gridLayout_10->addWidget(groupBox_6, 0, 0, 1, 1);

        groupBox_7 = new QGroupBox(LaborSheetsPage);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy2);
        gridLayout_9 = new QGridLayout(groupBox_7);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_2 = new QLabel(groupBox_7);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);

        horizontalLayout_9->addWidget(label_2);

        comboBox_3 = new QComboBox(groupBox_7);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        horizontalLayout_9->addWidget(comboBox_3);


        gridLayout_9->addLayout(horizontalLayout_9, 0, 0, 1, 1);

        listWidget_3 = new QListWidget(groupBox_7);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));

        gridLayout_9->addWidget(listWidget_3, 1, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        pushButton_13 = new QPushButton(groupBox_7);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setEnabled(false);

        horizontalLayout_13->addWidget(pushButton_13);

        pushButton_14 = new QPushButton(groupBox_7);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setEnabled(false);

        horizontalLayout_13->addWidget(pushButton_14);


        gridLayout_9->addLayout(horizontalLayout_13, 2, 0, 1, 1);


        gridLayout_10->addWidget(groupBox_7, 0, 1, 1, 1);

        stackedWidget->addWidget(LaborSheetsPage);
        DutyChartsPage = new QWidget();
        DutyChartsPage->setObjectName(QStringLiteral("DutyChartsPage"));
        gridLayout_7 = new QGridLayout(DutyChartsPage);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        dutyChartBox = new QGroupBox(DutyChartsPage);
        dutyChartBox->setObjectName(QStringLiteral("dutyChartBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(2);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(dutyChartBox->sizePolicy().hasHeightForWidth());
        dutyChartBox->setSizePolicy(sizePolicy4);
        gridLayout_5 = new QGridLayout(dutyChartBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        editDutyChart = new QPushButton(dutyChartBox);
        editDutyChart->setObjectName(QStringLiteral("editDutyChart"));

        horizontalLayout_4->addWidget(editDutyChart);

        deleteDutyChart = new QPushButton(dutyChartBox);
        deleteDutyChart->setObjectName(QStringLiteral("deleteDutyChart"));

        horizontalLayout_4->addWidget(deleteDutyChart);


        gridLayout_5->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        dutyChartList = new QListWidget(dutyChartBox);
        new QListWidgetItem(dutyChartList);
        new QListWidgetItem(dutyChartList);
        dutyChartList->setObjectName(QStringLiteral("dutyChartList"));

        gridLayout_5->addWidget(dutyChartList, 0, 0, 1, 1);

        addDutyChart = new QPushButton(dutyChartBox);
        addDutyChart->setObjectName(QStringLiteral("addDutyChart"));

        gridLayout_5->addWidget(addDutyChart, 2, 0, 1, 1);


        gridLayout_7->addWidget(dutyChartBox, 0, 0, 2, 1);

        dutyChartEdit = new QGroupBox(DutyChartsPage);
        dutyChartEdit->setObjectName(QStringLiteral("dutyChartEdit"));
        dutyChartEdit->setEnabled(false);
        gridLayout_6 = new QGridLayout(dutyChartEdit);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_13 = new QLabel(dutyChartEdit);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_6->addWidget(label_13);

        dateEdit_3 = new QDateEdit(dutyChartEdit);
        dateEdit_3->setObjectName(QStringLiteral("dateEdit_3"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(dateEdit_3->sizePolicy().hasHeightForWidth());
        dateEdit_3->setSizePolicy(sizePolicy5);

        horizontalLayout_6->addWidget(dateEdit_3);


        gridLayout_6->addLayout(horizontalLayout_6, 1, 0, 1, 1);

        DutyChartMarksEdit = new QTableWidget(dutyChartEdit);
        if (DutyChartMarksEdit->columnCount() < 1)
            DutyChartMarksEdit->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        DutyChartMarksEdit->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (DutyChartMarksEdit->rowCount() < 7)
            DutyChartMarksEdit->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        DutyChartMarksEdit->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        DutyChartMarksEdit->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        DutyChartMarksEdit->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        DutyChartMarksEdit->setVerticalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        DutyChartMarksEdit->setVerticalHeaderItem(4, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        DutyChartMarksEdit->setVerticalHeaderItem(5, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        DutyChartMarksEdit->setVerticalHeaderItem(6, __qtablewidgetitem7);
        DutyChartMarksEdit->setObjectName(QStringLiteral("DutyChartMarksEdit"));
        QSizePolicy sizePolicy6(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(DutyChartMarksEdit->sizePolicy().hasHeightForWidth());
        DutyChartMarksEdit->setSizePolicy(sizePolicy6);

        gridLayout_6->addWidget(DutyChartMarksEdit, 2, 0, 1, 1);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        label_19 = new QLabel(dutyChartEdit);
        label_19->setObjectName(QStringLiteral("label_19"));

        verticalLayout_13->addWidget(label_19);

        payFormChoice = new QComboBox(dutyChartEdit);
        payFormChoice->setObjectName(QStringLiteral("payFormChoice"));

        verticalLayout_13->addWidget(payFormChoice);


        gridLayout_6->addLayout(verticalLayout_13, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        workTimeEdit = new QTimeEdit(dutyChartEdit);
        workTimeEdit->setObjectName(QStringLiteral("workTimeEdit"));
        workTimeEdit->setEnabled(false);
        workTimeEdit->setMaximumTime(QTime(12, 0, 0));

        horizontalLayout_5->addWidget(workTimeEdit);

        label_16 = new QLabel(dutyChartEdit);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_5->addWidget(label_16);


        gridLayout_6->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        saveDutyChartBtn = new QPushButton(dutyChartEdit);
        saveDutyChartBtn->setObjectName(QStringLiteral("saveDutyChartBtn"));
        saveDutyChartBtn->setEnabled(false);

        horizontalLayout_10->addWidget(saveDutyChartBtn);

        cancelDutyChartBtn = new QPushButton(dutyChartEdit);
        cancelDutyChartBtn->setObjectName(QStringLiteral("cancelDutyChartBtn"));
        cancelDutyChartBtn->setEnabled(false);

        horizontalLayout_10->addWidget(cancelDutyChartBtn);


        gridLayout_6->addLayout(horizontalLayout_10, 6, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer, 5, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_17 = new QLabel(dutyChartEdit);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_7->addWidget(label_17);

        lineEdit_21 = new QLineEdit(dutyChartEdit);
        lineEdit_21->setObjectName(QStringLiteral("lineEdit_21"));

        horizontalLayout_7->addWidget(lineEdit_21);


        gridLayout_6->addLayout(horizontalLayout_7, 0, 0, 1, 1);


        gridLayout_7->addWidget(dutyChartEdit, 0, 1, 2, 1);

        stackedWidget->addWidget(DutyChartsPage);
        HireDirectivesPage = new QWidget();
        HireDirectivesPage->setObjectName(QStringLiteral("HireDirectivesPage"));
        gridLayout_11 = new QGridLayout(HireDirectivesPage);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        pushButton_15 = new QPushButton(HireDirectivesPage);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setEnabled(false);

        gridLayout_11->addWidget(pushButton_15, 0, 0, 1, 1);

        listWidget_4 = new QListWidget(HireDirectivesPage);
        listWidget_4->setObjectName(QStringLiteral("listWidget_4"));

        gridLayout_11->addWidget(listWidget_4, 1, 0, 1, 1);

        pushButton_16 = new QPushButton(HireDirectivesPage);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setEnabled(false);

        gridLayout_11->addWidget(pushButton_16, 2, 0, 1, 1);

        stackedWidget->addWidget(HireDirectivesPage);

        gridLayout->addWidget(stackedWidget, 0, 1, 1, 1);

        SalaryCount->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(SalaryCount);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SalaryCount->addToolBar(Qt::TopToolBarArea, mainToolBar);
        menuBar = new QMenuBar(SalaryCount);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 719, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        CompanyMenu = new QMenu(menuBar);
        CompanyMenu->setObjectName(QStringLiteral("CompanyMenu"));
        SalaryCount->setMenuBar(menuBar);
        statusBar = new QStatusBar(SalaryCount);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SalaryCount->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(CompanyMenu->menuAction());
        menu->addAction(OpenCompanyAction);
        menu->addAction(CreateCompanyAction);
        menu->addAction(LogOffAction);
        menu->addSeparator();
        menu->addAction(ExitAction);
        CompanyMenu->addAction(EmployeeListAction);
        CompanyMenu->addAction(LaborSheetAction);
        CompanyMenu->addAction(DutyCharAction);
        CompanyMenu->addAction(HireDirectiveAction);

        retranslateUi(SalaryCount);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SalaryCount);
    } // setupUi

    void retranslateUi(QMainWindow *SalaryCount)
    {
        SalaryCount->setWindowTitle(QApplication::translate("SalaryCount", "SalaryPayApp", 0));
        CreateCompanyAction->setText(QApplication::translate("SalaryCount", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\277\321\200\320\265\320\264\320\277\321\200\320\270\321\217\321\202\320\270\320\265", 0));
        CreateCompanyAction->setShortcut(QApplication::translate("SalaryCount", "Ctrl+C", 0));
        OpenCompanyAction->setText(QApplication::translate("SalaryCount", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\277\321\200\320\265\320\264\320\277\321\200\320\270\321\217\321\202\320\270\320\265", 0));
        OpenCompanyAction->setShortcut(QApplication::translate("SalaryCount", "Ctrl+O", 0));
        LogOffAction->setText(QApplication::translate("SalaryCount", "\320\222\321\213\320\271\321\202\320\270", 0));
        LogOffAction->setShortcut(QApplication::translate("SalaryCount", "Ctrl+E", 0));
        EmployeeListAction->setText(QApplication::translate("SalaryCount", "\320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\270", 0));
#ifndef QT_NO_WHATSTHIS
        EmployeeListAction->setWhatsThis(QApplication::translate("SalaryCount", "EmployeesPage", 0));
#endif // QT_NO_WHATSTHIS
        EmployeeListAction->setShortcut(QApplication::translate("SalaryCount", "Ctrl+E", 0));
        LaborSheetAction->setText(QApplication::translate("SalaryCount", "\320\242\320\260\320\261\320\265\320\273\320\270 \321\203\321\207\320\265\321\202\320\260 \321\202\321\200\321\203\320\264\320\260", 0));
#ifndef QT_NO_WHATSTHIS
        LaborSheetAction->setWhatsThis(QApplication::translate("SalaryCount", "LaborSheetsPage", 0));
#endif // QT_NO_WHATSTHIS
        LaborSheetAction->setShortcut(QApplication::translate("SalaryCount", "Ctrl+L", 0));
        DutyCharAction->setText(QApplication::translate("SalaryCount", "\320\223\321\200\320\260\321\204\320\270\320\272\320\270 \321\200\320\260\320\261\320\276\321\202\321\213", 0));
#ifndef QT_NO_WHATSTHIS
        DutyCharAction->setWhatsThis(QApplication::translate("SalaryCount", "DutyChartsPage", 0));
#endif // QT_NO_WHATSTHIS
        DutyCharAction->setShortcut(QApplication::translate("SalaryCount", "Ctrl+D", 0));
        ExitAction->setText(QApplication::translate("SalaryCount", "\320\222\321\213\321\205\320\276\320\264 \320\270\320\267 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", 0));
        HireDirectiveAction->setText(QApplication::translate("SalaryCount", "\320\237\321\200\320\270\320\272\320\260\320\267\321\213", 0));
#ifndef QT_NO_WHATSTHIS
        HireDirectiveAction->setWhatsThis(QApplication::translate("SalaryCount", "HireDirectivesPage", 0));
#endif // QT_NO_WHATSTHIS
        HireDirectiveAction->setShortcut(QApplication::translate("SalaryCount", "Ctrl+D", 0));
        groupBox_2->setTitle(QApplication::translate("SalaryCount", "\320\240\320\260\320\261\320\276\321\207\320\270\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", 0));
        label_11->setText(QApplication::translate("SalaryCount", "\320\235\320\276\320\274\320\265\321\200 \320\277\321\200\320\270\320\272\320\260\320\267\320\260 \320\276 \320\277\321\200\320\270\320\265\320\274\320\265 \320\275\320\260 \321\200\320\260\320\261\320\276\321\202\321\203", 0));
        label_5->setText(QApplication::translate("SalaryCount", "\320\236\320\272\320\273\320\260\320\264", 0));
        label_10->setText(QApplication::translate("SalaryCount", "\320\244\320\276\321\200\320\274\320\260 \320\276\320\277\320\273\320\260\321\202\321\213 \321\202\321\200\321\203\320\264\320\260", 0));
        label_12->setText(QApplication::translate("SalaryCount", "\320\223\321\200\320\260\321\204\320\270\320\272 \321\200\320\260\320\261\320\276\321\202\321\213", 0));
        groupBox->setTitle(QApplication::translate("SalaryCount", "\320\233\320\270\321\207\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", 0));
        label->setText(QApplication::translate("SalaryCount", "\320\244\320\230\320\236", 0));
        label_9->setText(QApplication::translate("SalaryCount", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", 0));
        label_3->setText(QApplication::translate("SalaryCount", "\320\230\320\235\320\235", 0));
        label_8->setText(QApplication::translate("SalaryCount", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", 0));
        pushButton_11->setText(QApplication::translate("SalaryCount", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        pushButton_12->setText(QApplication::translate("SalaryCount", "\320\241\320\261\321\200\320\276\321\201\320\270\321\202\321\214", 0));
        groupBox_5->setTitle(QApplication::translate("SalaryCount", "\320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\270", 0));
        label_4->setText(QApplication::translate("SalaryCount", "\320\237\320\276\320\270\321\201\320\272 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\276\320\262", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("SalaryCount", "\320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272 1        \320\230\320\235\320\235", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("SalaryCount", "\320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272 2       \320\230\320\235\320\235", 0));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("SalaryCount", "\320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272 3        \320\230\320\235\320\235", 0));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("SalaryCount", "\320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272 4        \320\230\320\235\320\235", 0));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("SalaryCount", "\320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272 5        \320\230\320\235\320\235", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        pushButton->setText(QApplication::translate("SalaryCount", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0));
        pushButton_3->setText(QApplication::translate("SalaryCount", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0));
        pushButton_2->setText(QApplication::translate("SalaryCount", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", 0));
        groupBox_6->setTitle(QApplication::translate("SalaryCount", "\320\242\320\260\320\261\320\265\320\273\321\214 \321\203\321\207\320\265\321\202\320\260 \321\202\321\200\321\203\320\264\320\260", 0));
        label_14->setText(QApplication::translate("SalaryCount", "\320\237\320\276\320\270\321\201\320\272 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\276\320\262", 0));
        pushButton_7->setText(QApplication::translate("SalaryCount", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0));
        pushButton_6->setText(QApplication::translate("SalaryCount", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \320\227/\320\237", 0));
        label_15->setText(QApplication::translate("SalaryCount", "\320\237\320\265\321\200\320\270\320\276\320\264 \321\203\321\207\320\265\321\202\320\260 \321\202\321\200\321\203\320\264\320\260", 0));
        dateEdit_2->setDisplayFormat(QApplication::translate("SalaryCount", "MM.yyyy", 0));
        groupBox_7->setTitle(QApplication::translate("SalaryCount", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\276\321\202\320\274\320\265\321\202\320\276\320\272", 0));
        label_2->setText(QApplication::translate("SalaryCount", "\320\236\321\202\320\274\320\265\321\202\320\272\320\260:", 0));
        pushButton_13->setText(QApplication::translate("SalaryCount", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        pushButton_14->setText(QApplication::translate("SalaryCount", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", 0));
        dutyChartBox->setTitle(QApplication::translate("SalaryCount", "\320\223\321\200\320\260\321\204\320\270\320\272\320\270 \321\200\320\260\320\261\320\276\321\202\321\213", 0));
        editDutyChart->setText(QApplication::translate("SalaryCount", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272", 0));
        deleteDutyChart->setText(QApplication::translate("SalaryCount", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272", 0));

        const bool __sortingEnabled1 = dutyChartList->isSortingEnabled();
        dutyChartList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem5 = dutyChartList->item(0);
        ___qlistwidgetitem5->setText(QApplication::translate("SalaryCount", "5/2", 0));
        QListWidgetItem *___qlistwidgetitem6 = dutyChartList->item(1);
        ___qlistwidgetitem6->setText(QApplication::translate("SalaryCount", "3/2", 0));
        dutyChartList->setSortingEnabled(__sortingEnabled1);

        addDutyChart->setText(QApplication::translate("SalaryCount", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\321\213\320\271 \320\263\321\200\320\260\321\204\320\270\320\272", 0));
        dutyChartEdit->setTitle(QApplication::translate("SalaryCount", "\320\237\320\260\320\275\320\265\320\273\321\214 \321\200\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217 \320\263\321\200\320\260\321\204\320\270\320\272\320\276\320\262", 0));
        label_13->setText(QApplication::translate("SalaryCount", "TextLabel", 0));
        dateEdit_3->setDisplayFormat(QApplication::translate("SalaryCount", "dd.MM", 0));
        QTableWidgetItem *___qtablewidgetitem = DutyChartMarksEdit->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SalaryCount", "\320\236\321\202\320\274\320\265\321\202\320\272\320\260", 0));
        QTableWidgetItem *___qtablewidgetitem1 = DutyChartMarksEdit->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("SalaryCount", "\320\237\320\235", 0));
        QTableWidgetItem *___qtablewidgetitem2 = DutyChartMarksEdit->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("SalaryCount", "\320\222\320\242", 0));
        QTableWidgetItem *___qtablewidgetitem3 = DutyChartMarksEdit->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QApplication::translate("SalaryCount", "\320\241\320\240", 0));
        QTableWidgetItem *___qtablewidgetitem4 = DutyChartMarksEdit->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QApplication::translate("SalaryCount", "\320\247\320\242", 0));
        QTableWidgetItem *___qtablewidgetitem5 = DutyChartMarksEdit->verticalHeaderItem(4);
        ___qtablewidgetitem5->setText(QApplication::translate("SalaryCount", "\320\237\320\242", 0));
        QTableWidgetItem *___qtablewidgetitem6 = DutyChartMarksEdit->verticalHeaderItem(5);
        ___qtablewidgetitem6->setText(QApplication::translate("SalaryCount", "\320\241\320\221", 0));
        QTableWidgetItem *___qtablewidgetitem7 = DutyChartMarksEdit->verticalHeaderItem(6);
        ___qtablewidgetitem7->setText(QApplication::translate("SalaryCount", "\320\222\320\241", 0));
        label_19->setText(QApplication::translate("SalaryCount", "\320\244\320\276\321\200\320\274\320\260 \320\276\320\277\320\273\320\260\321\202\321\213 \321\202\321\200\321\203\320\264\320\260", 0));
        payFormChoice->clear();
        payFormChoice->insertItems(0, QStringList()
         << QApplication::translate("SalaryCount", "\320\237\320\276\320\274\320\265\321\201\321\217\321\207\320\275\320\260\321\217", 0)
         << QApplication::translate("SalaryCount", "\320\237\320\276\321\207\320\260\321\201\320\276\320\262\320\260\321\217", 0)
        );
        label_16->setText(QApplication::translate("SalaryCount", "\320\240\320\260\320\261\320\276\321\207\320\265\320\265 \320\262\321\200\320\265\320\274\321\217 \320\262 \320\264\320\265\320\275\321\214", 0));
        saveDutyChartBtn->setText(QApplication::translate("SalaryCount", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        cancelDutyChartBtn->setText(QApplication::translate("SalaryCount", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", 0));
        label_17->setText(QApplication::translate("SalaryCount", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", 0));
        pushButton_15->setText(QApplication::translate("SalaryCount", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\277\321\200\320\270\320\272\320\260\320\267", 0));
        pushButton_16->setText(QApplication::translate("SalaryCount", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202 \320\277\321\200\320\270\320\272\320\260\320\267", 0));
        menu->setTitle(QApplication::translate("SalaryCount", "\320\244\320\260\320\271\320\273", 0));
        CompanyMenu->setTitle(QApplication::translate("SalaryCount", "\320\237\321\200\320\265\320\264\320\277\321\200\320\270\321\217\321\202\320\270\320\265", 0));
    } // retranslateUi

};

namespace Ui {
    class SalaryCount: public Ui_SalaryCount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALARYCOUNT_H
