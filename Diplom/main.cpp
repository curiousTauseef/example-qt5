#include "Diplom.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QStringList paths = QCoreApplication::libraryPaths();
	paths.append(".");
	paths.append("imageformats");
	paths.append("platforms");
	paths.append("sqldrivers");
	QCoreApplication::setLibraryPaths(paths);

	QApplication a(argc, argv);
	Diplom w;
	w.show();

	return a.exec();
}