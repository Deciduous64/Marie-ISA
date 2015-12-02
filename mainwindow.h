#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


//Most objects here created automatically by the QT IDE.
//Used to connect the various classes used in the mainwindow source code as well as define object events within the window.
//Also used to define functions used to create the instruction window via the main window.

class QAction;
class QActionGroup;
class QLabel;
class QMenu;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:


private slots:
    void on_lineEdit_returnPressed();

    void on_actionOpenI_triggered();

    void on_actionSaveI_triggered();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
