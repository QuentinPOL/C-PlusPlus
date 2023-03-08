/********************************************************************************
** Form generated from reading UI file 'AppQt1.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPQT1_H
#define UI_APPQT1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AppQt1Class
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *valueEdit;
    QLabel *label_2;
    QLineEdit *valueEdit_2;
    QLabel *label_3;
    QPushButton *pushMessageButton;
    QLabel *label_status;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AppQt1Class)
    {
        if (AppQt1Class->objectName().isEmpty())
            AppQt1Class->setObjectName(QString::fromUtf8("AppQt1Class"));
        AppQt1Class->resize(604, 400);
        centralWidget = new QWidget(AppQt1Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(280, 220, 121, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 140, 351, 21));
        valueEdit = new QLineEdit(centralWidget);
        valueEdit->setObjectName(QString::fromUtf8("valueEdit"));
        valueEdit->setGeometry(QRect(300, 30, 121, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 30, 61, 20));
        valueEdit_2 = new QLineEdit(centralWidget);
        valueEdit_2->setObjectName(QString::fromUtf8("valueEdit_2"));
        valueEdit_2->setGeometry(QRect(300, 70, 121, 20));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(260, 70, 41, 20));
        pushMessageButton = new QPushButton(centralWidget);
        pushMessageButton->setObjectName(QString::fromUtf8("pushMessageButton"));
        pushMessageButton->setGeometry(QRect(440, 150, 151, 23));
        label_status = new QLabel(centralWidget);
        label_status->setObjectName(QString::fromUtf8("label_status"));
        label_status->setGeometry(QRect(440, 50, 211, 21));
        AppQt1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(AppQt1Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 604, 22));
        AppQt1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AppQt1Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        AppQt1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(AppQt1Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        AppQt1Class->setStatusBar(statusBar);

        retranslateUi(AppQt1Class);
        QObject::connect(pushButton, SIGNAL(clicked()), AppQt1Class, SLOT(onDisplayMessageButtonClicked()));
        QObject::connect(pushMessageButton, SIGNAL(clicked()), AppQt1Class, SLOT(OnSendMessageButtonClicked()));

        QMetaObject::connectSlotsByName(AppQt1Class);
    } // setupUi

    void retranslateUi(QMainWindow *AppQt1Class)
    {
        AppQt1Class->setWindowTitle(QCoreApplication::translate("AppQt1Class", "AppQt1", nullptr));
        pushButton->setText(QCoreApplication::translate("AppQt1Class", "Connexion", nullptr));
        label->setText(QString());
        valueEdit->setText(QString());
        valueEdit->setPlaceholderText(QCoreApplication::translate("AppQt1Class", "Saisir l'IP", nullptr));
        label_2->setText(QCoreApplication::translate("AppQt1Class", "Adresse IP :", nullptr));
        valueEdit_2->setPlaceholderText(QCoreApplication::translate("AppQt1Class", "Saisir le Port", nullptr));
        label_3->setText(QCoreApplication::translate("AppQt1Class", "Port :", nullptr));
        pushMessageButton->setText(QCoreApplication::translate("AppQt1Class", "Afficher le message", nullptr));
        label_status->setText(QCoreApplication::translate("AppQt1Class", "Status connexion : D\303\251connect\303\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AppQt1Class: public Ui_AppQt1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPQT1_H
