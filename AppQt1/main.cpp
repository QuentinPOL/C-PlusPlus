#include "AppQt1.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AppQt1 w;
    w.show();
    return a.exec();
}
