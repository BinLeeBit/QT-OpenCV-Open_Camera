#include "tems.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TEMS w;
	w.setAttribute(Qt::WA_DeleteOnClose);
	w.show();
	return a.exec();
}
