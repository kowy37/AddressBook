/********************************************************************************
** Form generated from reading UI file 'addressbookqt.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSBOOKQT_H
#define UI_ADDRESSBOOKQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddressBookQTClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AddressBookQTClass)
    {
        if (AddressBookQTClass->objectName().isEmpty())
            AddressBookQTClass->setObjectName(QStringLiteral("AddressBookQTClass"));
        AddressBookQTClass->resize(600, 400);
        menuBar = new QMenuBar(AddressBookQTClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        AddressBookQTClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AddressBookQTClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        AddressBookQTClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(AddressBookQTClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        AddressBookQTClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(AddressBookQTClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        AddressBookQTClass->setStatusBar(statusBar);

        retranslateUi(AddressBookQTClass);

        QMetaObject::connectSlotsByName(AddressBookQTClass);
    } // setupUi

    void retranslateUi(QMainWindow *AddressBookQTClass)
    {
        AddressBookQTClass->setWindowTitle(QApplication::translate("AddressBookQTClass", "AddressBookQT", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddressBookQTClass: public Ui_AddressBookQTClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSBOOKQT_H
