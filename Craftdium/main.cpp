#include "craftdium.h"
#include <QApplication>
#include <iostream>
#include <string.h>
#include <qt_windows.h> 

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    craftdium w;
    w.show();
    return a.exec();
}
