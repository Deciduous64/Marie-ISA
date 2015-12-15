/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionInstructions;
    QAction *actionExit;
    QAction *actionOpenI;
    QAction *actionOpenA;
    QAction *actionSaveI;
    QAction *actionSave_2;
    QWidget *centralWidget;
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit;
    QLabel *label;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *labelAC;
    QLabel *labelACO;
    QLabel *labelMAR;
    QLabel *labelMARO;
    QLabel *labelMBR;
    QLabel *labelMBRO;
    QLabel *labelPC;
    QLabel *labelPCO;
    QLabel *labelIR;
    QLabel *labelIRO;
    QLabel *labelINREG;
    QLabel *labelINREGO;
    QLabel *labelOUTREG;
    QLabel *labelOUTREGO;
    QPushButton *pushButton;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *labelINS;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuInstruction_code;
    QMenu *menuAddress_List;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(533, 306);
        actionInstructions = new QAction(MainWindow);
        actionInstructions->setObjectName(QStringLiteral("actionInstructions"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionExit->setCheckable(false);
        actionOpenI = new QAction(MainWindow);
        actionOpenI->setObjectName(QStringLiteral("actionOpenI"));
        actionOpenA = new QAction(MainWindow);
        actionOpenA->setObjectName(QStringLiteral("actionOpenA"));
        actionSaveI = new QAction(MainWindow);
        actionSaveI->setObjectName(QStringLiteral("actionSaveI"));
        actionSave_2 = new QAction(MainWindow);
        actionSave_2->setObjectName(QStringLiteral("actionSave_2"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 90, 191, 141));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(true);
        lineEdit->setGeometry(QRect(10, 30, 191, 20));
        lineEdit->setMaxLength(16);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 361, 21));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(370, 20, 141, 148));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        labelAC = new QLabel(layoutWidget);
        labelAC->setObjectName(QStringLiteral("labelAC"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelAC);

        labelACO = new QLabel(layoutWidget);
        labelACO->setObjectName(QStringLiteral("labelACO"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelACO);

        labelMAR = new QLabel(layoutWidget);
        labelMAR->setObjectName(QStringLiteral("labelMAR"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelMAR);

        labelMARO = new QLabel(layoutWidget);
        labelMARO->setObjectName(QStringLiteral("labelMARO"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelMARO);

        labelMBR = new QLabel(layoutWidget);
        labelMBR->setObjectName(QStringLiteral("labelMBR"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelMBR);

        labelMBRO = new QLabel(layoutWidget);
        labelMBRO->setObjectName(QStringLiteral("labelMBRO"));

        formLayout->setWidget(2, QFormLayout::FieldRole, labelMBRO);

        labelPC = new QLabel(layoutWidget);
        labelPC->setObjectName(QStringLiteral("labelPC"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelPC);

        labelPCO = new QLabel(layoutWidget);
        labelPCO->setObjectName(QStringLiteral("labelPCO"));

        formLayout->setWidget(3, QFormLayout::FieldRole, labelPCO);

        labelIR = new QLabel(layoutWidget);
        labelIR->setObjectName(QStringLiteral("labelIR"));

        formLayout->setWidget(4, QFormLayout::LabelRole, labelIR);

        labelIRO = new QLabel(layoutWidget);
        labelIRO->setObjectName(QStringLiteral("labelIRO"));

        formLayout->setWidget(4, QFormLayout::FieldRole, labelIRO);

        labelINREG = new QLabel(layoutWidget);
        labelINREG->setObjectName(QStringLiteral("labelINREG"));

        formLayout->setWidget(5, QFormLayout::LabelRole, labelINREG);

        labelINREGO = new QLabel(layoutWidget);
        labelINREGO->setObjectName(QStringLiteral("labelINREGO"));

        formLayout->setWidget(5, QFormLayout::FieldRole, labelINREGO);

        labelOUTREG = new QLabel(layoutWidget);
        labelOUTREG->setObjectName(QStringLiteral("labelOUTREG"));

        formLayout->setWidget(6, QFormLayout::LabelRole, labelOUTREG);

        labelOUTREGO = new QLabel(layoutWidget);
        labelOUTREGO->setObjectName(QStringLiteral("labelOUTREGO"));

        formLayout->setWidget(6, QFormLayout::FieldRole, labelOUTREGO);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(370, 170, 141, 23));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 60, 101, 16));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 30, 101, 23));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(110, 60, 75, 23));
        labelINS = new QLabel(centralWidget);
        labelINS->setObjectName(QStringLiteral("labelINS"));
        labelINS->setGeometry(QRect(300, 210, 221, 31));
        labelINS->setWordWrap(true);
        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        textBrowser->raise();
        lineEdit->raise();
        label->raise();
        pushButton->raise();
        label_2->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        labelINS->raise();
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 533, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuInstruction_code = new QMenu(menuBar);
        menuInstruction_code->setObjectName(QStringLiteral("menuInstruction_code"));
        menuAddress_List = new QMenu(menuBar);
        menuAddress_List->setObjectName(QStringLiteral("menuAddress_List"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuInstruction_code->menuAction());
        menuBar->addAction(menuAddress_List->menuAction());
        menuFile->addAction(actionExit);
        menuInstruction_code->addAction(actionOpenI);
        menuInstruction_code->addAction(actionSaveI);
        menuAddress_List->addAction(actionOpenA);
        menuAddress_List->addAction(actionSave_2);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MARIE Instruction Set Architecture", 0));
        actionInstructions->setText(QApplication::translate("MainWindow", "Instructions", 0));
        actionExit->setText(QApplication::translate("MainWindow", "&Exit", 0));
        actionOpenI->setText(QApplication::translate("MainWindow", "Open", 0));
        actionOpenA->setText(QApplication::translate("MainWindow", "Open", 0));
        actionSaveI->setText(QApplication::translate("MainWindow", "Save", 0));
        actionSave_2->setText(QApplication::translate("MainWindow", "Save", 0));
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        label->setText(QApplication::translate("MainWindow", "Please input 16 bit instruction code, 4 bits for op code, 12 bits for address:", 0));
        labelAC->setText(QApplication::translate("MainWindow", "AC:", 0));
        labelACO->setText(QApplication::translate("MainWindow", "0", 0));
        labelMAR->setText(QApplication::translate("MainWindow", "MAR:", 0));
        labelMARO->setText(QApplication::translate("MainWindow", "0", 0));
        labelMBR->setText(QApplication::translate("MainWindow", "MBR:", 0));
        labelMBRO->setText(QApplication::translate("MainWindow", "0", 0));
        labelPC->setText(QApplication::translate("MainWindow", "PC:", 0));
        labelPCO->setText(QApplication::translate("MainWindow", "0", 0));
        labelIR->setText(QApplication::translate("MainWindow", "IR:", 0));
        labelIRO->setText(QApplication::translate("MainWindow", "0", 0));
        labelINREG->setText(QApplication::translate("MainWindow", "INREG:", 0));
        labelINREGO->setText(QApplication::translate("MainWindow", "0", 0));
        labelOUTREG->setText(QApplication::translate("MainWindow", "OUTREG:", 0));
        labelOUTREGO->setText(QApplication::translate("MainWindow", "0", 0));
        pushButton->setText(QApplication::translate("MainWindow", "RESET", 0));
        label_2->setText(QApplication::translate("MainWindow", "Instruction List", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Run Instructions", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Clear List", 0));
        labelINS->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuInstruction_code->setTitle(QApplication::translate("MainWindow", "Instruction Code", 0));
        menuAddress_List->setTitle(QApplication::translate("MainWindow", "Address List", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
