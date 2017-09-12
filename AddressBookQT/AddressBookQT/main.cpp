#include "AddressBook.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	AddressBook addressBook;
	addressBook.show();

	return app.exec();
}
