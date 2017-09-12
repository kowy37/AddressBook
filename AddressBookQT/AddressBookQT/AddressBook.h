#pragma once
#include "FindDialog.h"
#include <Qwidget>
#include <QLineEdit>
#include <QTextEdit>
#include <QPushButton>
class AddressBook :
	public QWidget
{
	Q_OBJECT
private:
	enum Mode { NavigationMode, AddingMode, EditingMode };
public:
	AddressBook(QWidget* parent = 0 );
	

private:
	QPushButton *addButton;
	QPushButton *submitButton;
	QPushButton *cancelButton;
	QLineEdit *nameLine;
	QTextEdit *addressText;
	QPushButton *nextButton;
	QPushButton *previousButton;

	QMap<QString, QString> contacts;
	QString oldName;
	QString oldAddress;

	QPushButton *editButton;
	QPushButton *removeButton;

	QPushButton *findButton;
	FindDialog *dialog;

	Mode currentMode;
	void updateInterface(Mode mode);
public slots:
	void addContact();
	void submitContact();
	void cancel();
	void next();
	void previous();
	void editContact();
	void removeContact();
	void findContact();
};

