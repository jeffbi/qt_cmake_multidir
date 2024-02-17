#include "mainwindow.h"
#include "../OurLib/ourlib.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    sayHello(&w);
    return a.exec();
}
