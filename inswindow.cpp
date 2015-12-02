#include "inswindow.h"
#include "ui_inswindow.h"

//The UI is automatically built by the QT IDE, design of the UI is by Daniel and Morgan,
//  functions of objects codded by Daniel and Morgan.

inswindow::inswindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::inswindow)
{
    ui->setupUi(this);
}

inswindow::~inswindow()
{
    delete ui;
}

