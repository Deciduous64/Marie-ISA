#ifndef INSWINDOW_H
#define INSWINDOW_H

//Most objects here created automatically by the QT IDE.
//Used to connect the various classes used in the mainwindow source code as well as define object events within the window.

#include <QMainWindow>

namespace Ui {
class inswindow;
}

class inswindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit inswindow(QWidget *parent = 0);
    ~inswindow();


private:
    Ui::inswindow *ui;
};

#endif // INSWINDOW_H
