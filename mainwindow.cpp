#include "microprocessor.cpp"
#include "microprocessor.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTextStream>
#include <QFile>
#include <QString>
#include <QMessageBox>
#include <QRadioButton>
#include <QMenu>
#include <QAction>
#include <QFileDialog>
#include <QTextEdit>
#include <QRegularExpression>
#include <QVector>
#include <QTime>


//The UI is automatically built by the QT IDE, design of the UI is by Morgan
//All functions in mainwindow.cpp coded by Morgan unless overwise stated

//Creates object m with class Microprocessor
MARIE::Microprocessor m;

//Creates the vector inslist, holds the instruction codes to be run
QVector<QString> inslist;

//Sets up the main ui
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

//Destroys the ui
MainWindow::~MainWindow()
{
    delete ui;
}

//Adds the instruction inputed in the lineedit to the instruction list (textbrowser and inslist)
//Verifies the inputted instruction meets the criteria
void MainWindow::on_lineEdit_returnPressed()
{
    QString input = ui->lineEdit->text();

    //Sets the criteria to only accept binary digits
    QRegularExpression rx("^[0-1]*$");
    QRegularExpressionMatch match = rx.match(input);
    bool hasMatch = match.hasMatch();

    if(input.size() != 16)
    {
        QMessageBox::information(this,"Error!","Invalid instruction entered, code must be 16 digits long!");
    }
    else if(hasMatch == false)
    {
        QMessageBox::information(this,"Error!","Invalid instruction entered, instruction must be binary!");
    }
    else
    {
        inslist.append(input);
        ui->textBrowser->append(input);
    }
}

//Loads an instruction list to be processed, via the menu button open under Instructions
void MainWindow::on_actionOpenI_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this,tr("Open Instruction List"),
                                                    "C://","Text File (*.txt);;All files(*.*)");
    QFile file(filename);
    if (file.open(QIODevice::ReadOnly))
    {
        QTextStream in(&file);
        while (!in.atEnd())
        {
            QString line = in.readLine();
            QRegularExpression rx("^[0-1]*$");
            QRegularExpressionMatch match = rx.match(line);
            bool hasMatch = match.hasMatch();

            if(line.size() != 16)
            {
                QMessageBox::information(this,"Error!","Invalid instruction entered, code must be 16 digits long!");
                break;
            }
            else if(hasMatch == false)
            {
                QMessageBox::information(this,"Error!","Invalid instruction entered, instruction must be binary!");
                break;
            }
            else
            {
                inslist.append(line);
                ui->textBrowser->append(line);
            }
        }
        file.close();
    }

}

//Saves the instruction list to a text file, currently does not work properly
void MainWindow::on_actionSaveI_triggered()
{
    QString filename = QFileDialog::getSaveFileName(
                this,
                tr("Save Instruction list"),
                "C://",
                tr("Text File (*.txt)") );
    if( filename.isNull() )
    {
        QMessageBox::information(this,"Error!","Invalid name!");
    }
    QFile file(filename);
    file.open(QIODevice::WriteOnly);
    QTextStream out(&file);
    out << (ui->textBrowser);
    file.close();
}

//Resets all values held by the processor and updates the labels displaying their values
void MainWindow::on_pushButton_clicked()
{
    m.reset();
    ui->labelACO->setText(QString::number(m.AC));
    ui->labelMARO->setText(QString::number(m.MAR));
    ui->labelMBRO->setText(QString::number(m.MBR));
    ui->labelPCO->setText(QString::number(m.PC));
    ui->labelIRO->setText(QString::number(m.IR));
    ui->labelINREGO->setText(QString::number(m.InREG));
    ui->labelOUTREGO->setText(QString::number(m.OutREG));

}


//Runs all the instructions in the instruction list
void MainWindow::on_pushButton_2_clicked()
{
    //Run button pressed
    MainWindow::on_pushButton_clicked();

    //Runs through every instruction in the instruction list (inslist)
    //Associates every instruction a respective number in the PC
    while(m.PC < inslist.size())
    {
        QString labelINS = "The current instruction being executed is: " + inslist[m.PC];

        m.runInstruction(inslist[m.PC]);
        if(m.stopped == true)
        {
            break;
        }

        ui->labelINS->setText(labelINS);
        ui->labelACO->setText(QString::number(m.AC));
        ui->labelMARO->setText(QString::number(m.MAR));
        ui->labelMBRO->setText(QString::number(m.MBR));
        ui->labelPCO->setText(QString::number(m.PC));
        ui->labelIRO->setText(QString::number(m.IR));
        ui->labelINREGO->setText(QString::number(m.InREG));
        ui->labelOUTREGO->setText(QString::number(m.OutREG));

        //The following code for the delay created by Peter Mortensen from stackoverflow forums
        //Purpose of the delay is so that we may see each step done by the processor to verify they are correct
        QTime dieTime = QTime::currentTime().addSecs(2);
        while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    }

}

//Clears the text in the textbrowser and all objects in the vector inslist
void MainWindow::on_pushButton_3_clicked()
{
    while(inslist.size() !=0)
    {
        inslist.remove(0);
    }
    ui->textBrowser->setText("");
}
