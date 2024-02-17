#include "ourlib.h"

#include <QMessageBox>

void sayHello(QWidget *parent)
{
    QMessageBox::information(parent, "Hello", "Hello from OurLib!");
}
