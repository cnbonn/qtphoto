/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen_2;
    QAction *actionClose;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionQuit_3;
    QAction *actionAdd_photo;
    QAction *actionDelete_photo;
    QAction *actionEdit_description;
    QAction *actionPage_forward;
    QAction *actionPage_backward;
    QAction *actionMove_forward;
    QAction *actionMove_backward;
    QAction *actionCrop;
    QAction *actionResize;
    QAction *actionUsage;
    QAction *actionAbout;
    QAction *actionContrast;
    QAction *actionBrightness;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuImage;
    QMenu *menuBalance;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon;
        icon.addFile(QStringLiteral("Icons/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen_2 = new QAction(MainWindow);
        actionOpen_2->setObjectName(QStringLiteral("actionOpen_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("Icons/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_2->setIcon(icon1);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("Icons/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        actionQuit_3 = new QAction(MainWindow);
        actionQuit_3->setObjectName(QStringLiteral("actionQuit_3"));
        actionAdd_photo = new QAction(MainWindow);
        actionAdd_photo->setObjectName(QStringLiteral("actionAdd_photo"));
        actionDelete_photo = new QAction(MainWindow);
        actionDelete_photo->setObjectName(QStringLiteral("actionDelete_photo"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("Icons/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete_photo->setIcon(icon3);
        actionEdit_description = new QAction(MainWindow);
        actionEdit_description->setObjectName(QStringLiteral("actionEdit_description"));
        actionPage_forward = new QAction(MainWindow);
        actionPage_forward->setObjectName(QStringLiteral("actionPage_forward"));
        actionPage_backward = new QAction(MainWindow);
        actionPage_backward->setObjectName(QStringLiteral("actionPage_backward"));
        actionMove_forward = new QAction(MainWindow);
        actionMove_forward->setObjectName(QStringLiteral("actionMove_forward"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("Icons/arrow-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMove_forward->setIcon(icon4);
        actionMove_backward = new QAction(MainWindow);
        actionMove_backward->setObjectName(QStringLiteral("actionMove_backward"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("Icons/arrow-left.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMove_backward->setIcon(icon5);
        actionCrop = new QAction(MainWindow);
        actionCrop->setObjectName(QStringLiteral("actionCrop"));
        actionResize = new QAction(MainWindow);
        actionResize->setObjectName(QStringLiteral("actionResize"));
        actionUsage = new QAction(MainWindow);
        actionUsage->setObjectName(QStringLiteral("actionUsage"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon6;
        icon6.addFile(QStringLiteral("Icons/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon6);
        actionContrast = new QAction(MainWindow);
        actionContrast->setObjectName(QStringLiteral("actionContrast"));
        actionBrightness = new QAction(MainWindow);
        actionBrightness->setObjectName(QStringLiteral("actionBrightness"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuImage = new QMenu(menuBar);
        menuImage->setObjectName(QStringLiteral("menuImage"));
        menuBalance = new QMenu(menuImage);
        menuBalance->setObjectName(QStringLiteral("menuBalance"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        MainWindow->insertToolBarBreak(mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuImage->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen_2);
        menuFile->addAction(actionClose);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit_3);
        menuEdit->addAction(actionAdd_photo);
        menuEdit->addAction(actionDelete_photo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionEdit_description);
        menuEdit->addSeparator();
        menuEdit->addAction(actionPage_forward);
        menuEdit->addAction(actionPage_backward);
        menuEdit->addSeparator();
        menuEdit->addAction(actionMove_forward);
        menuEdit->addAction(actionMove_backward);
        menuImage->addAction(actionCrop);
        menuImage->addAction(actionResize);
        menuImage->addAction(menuBalance->menuAction());
        menuBalance->addAction(actionContrast);
        menuBalance->addAction(actionBrightness);
        menuHelp->addAction(actionUsage);
        menuHelp->addAction(actionAbout);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionOpen_2);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionDelete_photo);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionEdit_description);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionMove_forward);
        mainToolBar->addAction(actionMove_backward);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionNew->setText(QApplication::translate("MainWindow", "New", 0));
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        actionOpen_2->setText(QApplication::translate("MainWindow", "Open", 0));
        actionOpen_2->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionClose->setText(QApplication::translate("MainWindow", "Close", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As", 0));
        actionQuit_3->setText(QApplication::translate("MainWindow", "Quit", 0));
        actionAdd_photo->setText(QApplication::translate("MainWindow", "Add photo", 0));
        actionDelete_photo->setText(QApplication::translate("MainWindow", "Delete photo", 0));
        actionEdit_description->setText(QApplication::translate("MainWindow", "Edit description", 0));
        actionPage_forward->setText(QApplication::translate("MainWindow", "Page forward", 0));
        actionPage_backward->setText(QApplication::translate("MainWindow", "Page backward", 0));
        actionMove_forward->setText(QApplication::translate("MainWindow", "Move forward", 0));
        actionMove_backward->setText(QApplication::translate("MainWindow", "Move backward", 0));
        actionCrop->setText(QApplication::translate("MainWindow", "Crop", 0));
        actionResize->setText(QApplication::translate("MainWindow", "Resize", 0));
        actionUsage->setText(QApplication::translate("MainWindow", "Usage", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        actionContrast->setText(QApplication::translate("MainWindow", "contrast", 0));
        actionBrightness->setText(QApplication::translate("MainWindow", "brightness", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0));
        menuImage->setTitle(QApplication::translate("MainWindow", "Image", 0));
        menuBalance->setTitle(QApplication::translate("MainWindow", "Balance", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
