#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <windows.h>
#include <tlhelp32.h>

namespace Ui
{
    class MainWindow;
}

using std::string;
using std::vector;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void GetProcessList(HANDLE CONST hStdOut);

private:// add vector minutes
    struct Program
    {
        string  m_name;
        int     m_quentitySecond;
    };

    vector<Program> m_hour;
    vector<Program> m_month;
    vector<Program> m_year;

    vector<string>  m_allProcessRunning;

    QTimer* m_timeReset

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
