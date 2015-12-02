#include "mainwindow.h"
#include <QApplication>


//Exists solely to create the main window upon program launching, rest of the code handled from mainwindow.cpp
//Created automatically by QT

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
