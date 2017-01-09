/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *ui_btnHour;
    QRadioButton *ui_btnDay;
    QRadioButton *ui_btnMonth;
    QRadioButton *ui_btnYear;
    QPushButton *ui_btnContinue;
    QTableWidget *ui_tableStatistic;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(552, 415);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        ui_btnHour = new QRadioButton(groupBox);
        ui_btnHour->setObjectName(QStringLiteral("ui_btnHour"));

        verticalLayout->addWidget(ui_btnHour);

        ui_btnDay = new QRadioButton(groupBox);
        ui_btnDay->setObjectName(QStringLiteral("ui_btnDay"));

        verticalLayout->addWidget(ui_btnDay);

        ui_btnMonth = new QRadioButton(groupBox);
        ui_btnMonth->setObjectName(QStringLiteral("ui_btnMonth"));

        verticalLayout->addWidget(ui_btnMonth);

        ui_btnYear = new QRadioButton(groupBox);
        ui_btnYear->setObjectName(QStringLiteral("ui_btnYear"));

        verticalLayout->addWidget(ui_btnYear);


        verticalLayout_2->addWidget(groupBox);

        ui_btnContinue = new QPushButton(centralWidget);
        ui_btnContinue->setObjectName(QStringLiteral("ui_btnContinue"));

        verticalLayout_2->addWidget(ui_btnContinue);

        ui_tableStatistic = new QTableWidget(centralWidget);
        if (ui_tableStatistic->columnCount() < 2)
            ui_tableStatistic->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        ui_tableStatistic->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        ui_tableStatistic->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (ui_tableStatistic->rowCount() < 1)
            ui_tableStatistic->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        ui_tableStatistic->setVerticalHeaderItem(0, __qtablewidgetitem2);
        ui_tableStatistic->setObjectName(QStringLiteral("ui_tableStatistic"));

        verticalLayout_2->addWidget(ui_tableStatistic);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\242\320\236\320\237-10 \320\267\320\260 \320\277\320\265\321\200\321\226\320\276\320\264", 0));
        ui_btnHour->setText(QApplication::translate("MainWindow", "\320\223\320\276\320\264\320\270\320\275\320\260", 0));
        ui_btnDay->setText(QApplication::translate("MainWindow", "\320\224\320\265\320\275\321\214", 0));
        ui_btnMonth->setText(QApplication::translate("MainWindow", "\320\234\321\226\321\201\321\217\321\206\321\214", 0));
        ui_btnYear->setText(QApplication::translate("MainWindow", "\320\240\321\226\320\272", 0));
        ui_btnContinue->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\264\320\276\320\262\320\266\320\270\321\202\320\270", 0));
        QTableWidgetItem *___qtablewidgetitem = ui_tableStatistic->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = ui_tableStatistic->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Time", 0));
        QTableWidgetItem *___qtablewidgetitem2 = ui_tableStatistic->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "1", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
