/********************************************************************************
** Form generated from reading UI file 'propertiesdialog.ui'
**
** Created: Tue Aug 3 22:15:49 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTIESDIALOG_H
#define UI_PROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_PropertiesDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *iconLabel;
    QLabel *nameLabel;
    QLabel *typeTLabel;
    QLabel *typeLabel;
    QLabel *createAtTLabel;
    QLabel *createdAtLabel;
    QLabel *lastModifiedTLabel;
    QLabel *lastModifiedLabel;
    QLabel *sizeTLabel;
    QLabel *sizeLabel;
    QLabel *propertiesLabel;
    QTextEdit *textEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PropertiesDialog)
    {
        if (PropertiesDialog->objectName().isEmpty())
            PropertiesDialog->setObjectName(QString::fromUtf8("PropertiesDialog"));
        PropertiesDialog->resize(327, 372);
        gridLayout = new QGridLayout(PropertiesDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        iconLabel = new QLabel(PropertiesDialog);
        iconLabel->setObjectName(QString::fromUtf8("iconLabel"));
        iconLabel->setMinimumSize(QSize(64, 64));
        iconLabel->setMaximumSize(QSize(64, 64));

        gridLayout->addWidget(iconLabel, 0, 0, 1, 1);

        nameLabel = new QLabel(PropertiesDialog);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setStyleSheet(QString::fromUtf8("font: 14pt \"DejaVu Sans\";"));

        gridLayout->addWidget(nameLabel, 0, 1, 1, 1);

        typeTLabel = new QLabel(PropertiesDialog);
        typeTLabel->setObjectName(QString::fromUtf8("typeTLabel"));

        gridLayout->addWidget(typeTLabel, 1, 0, 1, 1);

        typeLabel = new QLabel(PropertiesDialog);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));

        gridLayout->addWidget(typeLabel, 1, 1, 1, 1);

        createAtTLabel = new QLabel(PropertiesDialog);
        createAtTLabel->setObjectName(QString::fromUtf8("createAtTLabel"));

        gridLayout->addWidget(createAtTLabel, 2, 0, 1, 1);

        createdAtLabel = new QLabel(PropertiesDialog);
        createdAtLabel->setObjectName(QString::fromUtf8("createdAtLabel"));

        gridLayout->addWidget(createdAtLabel, 2, 1, 1, 1);

        lastModifiedTLabel = new QLabel(PropertiesDialog);
        lastModifiedTLabel->setObjectName(QString::fromUtf8("lastModifiedTLabel"));

        gridLayout->addWidget(lastModifiedTLabel, 3, 0, 1, 1);

        lastModifiedLabel = new QLabel(PropertiesDialog);
        lastModifiedLabel->setObjectName(QString::fromUtf8("lastModifiedLabel"));

        gridLayout->addWidget(lastModifiedLabel, 3, 1, 1, 1);

        sizeTLabel = new QLabel(PropertiesDialog);
        sizeTLabel->setObjectName(QString::fromUtf8("sizeTLabel"));

        gridLayout->addWidget(sizeTLabel, 4, 0, 1, 1);

        sizeLabel = new QLabel(PropertiesDialog);
        sizeLabel->setObjectName(QString::fromUtf8("sizeLabel"));

        gridLayout->addWidget(sizeLabel, 4, 1, 1, 1);

        propertiesLabel = new QLabel(PropertiesDialog);
        propertiesLabel->setObjectName(QString::fromUtf8("propertiesLabel"));

        gridLayout->addWidget(propertiesLabel, 5, 0, 1, 1);

        textEdit = new QTextEdit(PropertiesDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setReadOnly(true);

        gridLayout->addWidget(textEdit, 6, 0, 1, 3);

        buttonBox = new QDialogButtonBox(PropertiesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 7, 2, 1, 1);


        retranslateUi(PropertiesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PropertiesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PropertiesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *PropertiesDialog)
    {
        PropertiesDialog->setWindowTitle(QApplication::translate("PropertiesDialog", "Properties", 0, QApplication::UnicodeUTF8));
        iconLabel->setText(QString());
        nameLabel->setText(QApplication::translate("PropertiesDialog", "var", 0, QApplication::UnicodeUTF8));
        typeTLabel->setText(QApplication::translate("PropertiesDialog", "Type:", 0, QApplication::UnicodeUTF8));
        typeLabel->setText(QApplication::translate("PropertiesDialog", "var", 0, QApplication::UnicodeUTF8));
        createAtTLabel->setText(QApplication::translate("PropertiesDialog", "Created:", 0, QApplication::UnicodeUTF8));
        createdAtLabel->setText(QApplication::translate("PropertiesDialog", "var", 0, QApplication::UnicodeUTF8));
        lastModifiedTLabel->setText(QApplication::translate("PropertiesDialog", "Modified: ", 0, QApplication::UnicodeUTF8));
        lastModifiedLabel->setText(QApplication::translate("PropertiesDialog", "var", 0, QApplication::UnicodeUTF8));
        sizeTLabel->setText(QApplication::translate("PropertiesDialog", "Size:", 0, QApplication::UnicodeUTF8));
        sizeLabel->setText(QApplication::translate("PropertiesDialog", "var", 0, QApplication::UnicodeUTF8));
        propertiesLabel->setText(QApplication::translate("PropertiesDialog", "Raw Properties:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PropertiesDialog: public Ui_PropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTIESDIALOG_H
