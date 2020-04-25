/********************************************************************************
** Form generated from reading UI file 'QtGuiDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIDEMO_H
#define UI_QTGUIDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiDemoClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGuiDemoClass)
    {
        if (QtGuiDemoClass->objectName().isEmpty())
            QtGuiDemoClass->setObjectName(QStringLiteral("QtGuiDemoClass"));
        QtGuiDemoClass->resize(600, 400);
        menuBar = new QMenuBar(QtGuiDemoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QtGuiDemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtGuiDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtGuiDemoClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtGuiDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QtGuiDemoClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtGuiDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtGuiDemoClass->setStatusBar(statusBar);

        retranslateUi(QtGuiDemoClass);

        QMetaObject::connectSlotsByName(QtGuiDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiDemoClass)
    {
        QtGuiDemoClass->setWindowTitle(QApplication::translate("QtGuiDemoClass", "QtGuiDemo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtGuiDemoClass: public Ui_QtGuiDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIDEMO_H
