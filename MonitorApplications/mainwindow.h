#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <windows.h>
#include <tlhelp32.h>

#include <QVector>
#include <QTimer>

namespace Ui
{
    class MainWindow;
}

using std::string;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void GetProcessList(HANDLE CONST hStdOut);


    struct Program
    {
        int     m_quentitySecond;
        QString  m_name;

        Program() : m_quentitySecond(0),
                    m_name("")
        {

        }

        Program(int i_quentitySecond, QString i_name):
            m_quentitySecond(i_quentitySecond), m_name(i_name)
        {

        }
    };
signals:
    void signalChangeQuentitySecondForProcess();

    void signalOutputPeriodSecond();

private slots:
    void slotChangeQuentitySecondForProcess();

    void slotAddPeriodMinuteToAll();

    void slotAddPeriodSecondToMinute();

    void slotOutputPeriodSecond();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

    void on_ui_btnHour_clicked();

    void on_ui_btnDay_clicked();

    void on_ui_btnMonth_clicked();

    void on_ui_btnYear_clicked();

private: // add vector minutes
    QVector<QVector<Program>> m_periodAll;
    QVector<Program> m_periodMinute;
    QVector<QString>  m_periodSecond;

    QTimer* m_timeAddPeriodMinuteToAll;
    QTimer* m_timeAddPeriodSecondToMinute;

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
