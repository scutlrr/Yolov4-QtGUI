#include "QtGuiDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtGuiDemo w;
	w.show();
	return a.exec();
}
