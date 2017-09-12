#pragma once
#include <Qwidget>
#include <QLineEdit>
#include <QTextEdit>
#include <QPushButton>
class AddressBook :
	public QWidget
{
	Q_OBJECT

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

public slots:
	void addContact();
	void submitContact();
	void cancel();
	void next();
	void previous();

};

