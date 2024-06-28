/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *AddTaskButton;
    QPushButton *UpdateTaskButton;
    QPushButton *DeleteTaskButton;
    QPushButton *DisplayAllTaskButton;
    QPushButton *GetTaskButton;
    QPushButton *GenerateReportButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 500);
        MainWindow->setMaximumSize(QSize(800, 500));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        AddTaskButton = new QPushButton(centralwidget);
        AddTaskButton->setObjectName("AddTaskButton");
        AddTaskButton->setGeometry(QRect(30, 30, 91, 29));
        AddTaskButton->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 221, 221);\n"
"font: 900 italic 9pt \"Segoe UI\";"));
        AddTaskButton->setAutoDefault(false);
        AddTaskButton->setFlat(false);
        UpdateTaskButton = new QPushButton(centralwidget);
        UpdateTaskButton->setObjectName("UpdateTaskButton");
        UpdateTaskButton->setGeometry(QRect(160, 30, 91, 29));
        UpdateTaskButton->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 221, 221);\n"
"font: 900 italic 9pt \"Segoe UI\";"));
        DeleteTaskButton = new QPushButton(centralwidget);
        DeleteTaskButton->setObjectName("DeleteTaskButton");
        DeleteTaskButton->setGeometry(QRect(290, 30, 91, 29));
        DeleteTaskButton->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 221, 221);\n"
"font: 900 italic 9pt \"Segoe UI\";"));
        DisplayAllTaskButton = new QPushButton(centralwidget);
        DisplayAllTaskButton->setObjectName("DisplayAllTaskButton");
        DisplayAllTaskButton->setGeometry(QRect(420, 30, 121, 29));
        DisplayAllTaskButton->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 221, 221);\n"
"font: 900 italic 9pt \"Segoe UI\";"));
        GetTaskButton = new QPushButton(centralwidget);
        GetTaskButton->setObjectName("GetTaskButton");
        GetTaskButton->setGeometry(QRect(580, 30, 91, 29));
        GetTaskButton->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 221, 221);\n"
"font: 900 italic 9pt \"Segoe UI\";"));
        GenerateReportButton = new QPushButton(centralwidget);
        GenerateReportButton->setObjectName("GenerateReportButton");
        GenerateReportButton->setGeometry(QRect(280, 100, 121, 29));
        GenerateReportButton->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 221, 221);\n"
"font: 900 italic 9pt \"Segoe UI\";"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(-30, 180, 751, 391));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        AddTaskButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Task Manager 1.0", nullptr));
        AddTaskButton->setText(QCoreApplication::translate("MainWindow", "Add Task", nullptr));
        UpdateTaskButton->setText(QCoreApplication::translate("MainWindow", "Update Task", nullptr));
        DeleteTaskButton->setText(QCoreApplication::translate("MainWindow", "Delete Task", nullptr));
        DisplayAllTaskButton->setText(QCoreApplication::translate("MainWindow", "Display All Task", nullptr));
        GetTaskButton->setText(QCoreApplication::translate("MainWindow", "Get Task", nullptr));
        GenerateReportButton->setText(QCoreApplication::translate("MainWindow", "Generate Report", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
