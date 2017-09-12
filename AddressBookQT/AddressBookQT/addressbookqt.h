#ifndef ADDRESSBOOKQT_H
#define ADDRESSBOOKQT_H

#include <QtWidgets/QMainWindow>
#include "ui_addressbookqt.h"

class AddressBookQT : public QMainWindow
{
	Q_OBJECT

public:
	AddressBookQT(QWidget *parent = 0);
	~AddressBookQT();

private:
	Ui::AddressBookQTClass ui;
};

#endif // ADDRESSBOOKQT_H
