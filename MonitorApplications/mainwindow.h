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
        string  m_name;

        Program(int i_quentitySecond, string i_name):
            m_quentitySecond(i_quentitySecond), m_name(i_name)
        {

        }
    };
public slots:
    void slotChangeQuentitySecondForProcess();

    void slotAddPeriodMinuteToAll();

    void slotAddPeriodSecondToMinute();

signals:
    void signalChangeQuentitySecondForProcess();

private: // add vector minutes
    QVector<QVector<Program>> m_periodAll;
    QVector<Program> m_periodMinute;
    QVector<string>  m_periodSecond;

    QTimer* m_timeAddPeriodMinuteToAll;
    QTimer* m_timeAddPeriodSecondToMinute;

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
