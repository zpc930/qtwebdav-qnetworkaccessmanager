/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Aug 3 22:15:49 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QStatusBar>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionDownload;
    QAction *actionUpload;
    QAction *actionRefresh;
    QAction *actionCreateDir;
    QAction *actionDelete;
    QAction *actionGo;
    QAction *actionParent;
    QAction *actionOpen;
    QAction *actionInformations;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTreeWidget *treeWidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(496, 310);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionDownload = new QAction(MainWindow);
        actionDownload->setObjectName(QString::fromUtf8("actionDownload"));
        actionUpload = new QAction(MainWindow);
        actionUpload->setObjectName(QString::fromUtf8("actionUpload"));
        actionRefresh = new QAction(MainWindow);
        actionRefresh->setObjectName(QString::fromUtf8("actionRefresh"));
        actionCreateDir = new QAction(MainWindow);
        actionCreateDir->setObjectName(QString::fromUtf8("actionCreateDir"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionGo = new QAction(MainWindow);
        actionGo->setObjectName(QString::fromUtf8("actionGo"));
        actionParent = new QAction(MainWindow);
        actionParent->setObjectName(QString::fromUtf8("actionParent"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionInformations = new QAction(MainWindow);
        actionInformations->setObjectName(QString::fromUtf8("actionInformations"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        treeWidget = new QTreeWidget(centralwidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setContextMenuPolicy(Qt::ActionsContextMenu);
        treeWidget->setAcceptDrops(true);
        treeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        treeWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        treeWidget->setSortingEnabled(true);

        gridLayout->addWidget(treeWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QWebdav Example", 0, QApplication::UnicodeUTF8));
        actionDownload->setText(QApplication::translate("MainWindow", "Download", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDownload->setToolTip(QApplication::translate("MainWindow", "Download selected files", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionUpload->setText(QApplication::translate("MainWindow", "Upload", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionUpload->setToolTip(QApplication::translate("MainWindow", "Upload selected files", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRefresh->setText(QApplication::translate("MainWindow", "refresh", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRefresh->setToolTip(QApplication::translate("MainWindow", "Refresh this folder", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCreateDir->setText(QApplication::translate("MainWindow", "New Directory", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCreateDir->setToolTip(QApplication::translate("MainWindow", "Create a new directory", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDelete->setText(QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDelete->setToolTip(QApplication::translate("MainWindow", "Delete selected items", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionGo->setText(QApplication::translate("MainWindow", "Go", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionGo->setToolTip(QApplication::translate("MainWindow", "Load this url", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionParent->setText(QApplication::translate("MainWindow", "Parent Directory", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("MainWindow", "Open File", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionInformations->setText(QApplication::translate("MainWindow", "Informations", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionInformations->setToolTip(QApplication::translate("MainWindow", "Informations", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("MainWindow", "Time", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("MainWindow", "Type", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "Size", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Name", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
