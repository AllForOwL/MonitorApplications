#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::GetProcessList(HANDLE CONST hStdOut)
{
    PROCESSENTRY32 peProcessEntry;

    HANDLE CONST hSnapshot = CreateToolhelp32Snapshot(
                             TH32CS_SNAPPROCESS, 0);
    if(INVALID_HANDLE_VALUE == hSnapshot)
    {
        return;
    }

    peProcessEntry.dwSize = sizeof(PROCESSENTRY32);
    Process32First(hSnapshot, &peProcessEntry);
    m_allProcessRunning.clear();
    do
    {
    if (!std::find(m_allProcessRunning.begin(), m_allProcessRunning.end(), peProcessEntry.szExeFile))
    {
       m_allProcessRunning.push_back(peProcessEntry.szExeFile);
    }
    }
    while(Process32Next(hSnapshot, &peProcessEntry));
    CloseHandle(hSnapshot);


    emit changeQuentitySecondForHour();
    
    emit changeQuentitySecondForDay();

    emit changeQuentitySecondForYear();
}

INT main()
{
    HANDLE CONST hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    PrintProcessList(hStdOut);
    ExitProcess(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}
