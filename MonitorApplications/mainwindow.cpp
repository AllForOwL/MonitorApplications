#include "mainwindow.h"
#include "ui_mainwindow.h"

const int ONE_MINUTE = 60000;
const int ONE_SECOND = 1000;

using std::find;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_timeAddPeriodMinuteToAll = new QTimer();
    m_timeAddPeriodMinuteToAll->start(ONE_MINUTE);

    m_timeAddPeriodSecondToMinute = new QTimer();
    m_timeAddPeriodSecondToMinute->start(ONE_SECOND);

    connect(m_timeAddPeriodSecondToMinute, SIGNAL(timeout()), this, SLOT(slotAddPeriodSecondToMinute()));

    connect(m_timeAddPeriodMinuteToAll, SIGNAL(timeout()), this, SLOT(slotAddPeriodMinuteToAll()));

    connect(this, SIGNAL(signalChangeQuentitySecondForProcess()), this, SLOT(slotChangeQuentitySecondForProcess()));
}

void MainWindow::slotAddPeriodMinuteToAll()
{
    m_periodAll.push_back(m_periodMinute);
    m_periodMinute.clear();
}

void MainWindow::slotChangeQuentitySecondForProcess()
{
    // add all program from second to QVector minute
   if (m_periodMinute.empty())
   {
        for (int i = 0; i < m_periodSecond.size(); i++)
        {
            m_periodMinute.push_back(Program(1, m_periodSecond[i]));
            m_periodSecond[i] = "";
        }
   }
   else // increase quentity second for each program which is QVector minute
   {
        for (int i = 0; i < m_periodSecond.size(); i++)
        {
            for (int j = 0; j < m_periodMinute.size(); j++)
            {
                if (m_periodMinute[j].m_name == m_periodSecond[i])
                {
                    ++m_periodMinute[j].m_quentitySecond;
                    m_periodSecond[i] = "";

                    break;
                    break;
                }
            }
        }
   }

   // add new program and set quentity second == 1
   for (int i = 0; i < m_periodSecond.size(); i++)
   {
       if (m_periodSecond[i] != "")
       {
           m_periodMinute.push_back(Program(1, m_periodSecond[i]));
           m_periodSecond[i] = "";
       }
   }
}

void MainWindow::slotAddPeriodSecondToMinute()
{
    HANDLE CONST hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    PrintProcessList(hStdOut);
    GetProcessList(hStdout);
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
    m_periodSecond.clear();
    do
    {
    if (!std::find(m_periodSecond.begin(), m_periodSecond.end(), peProcessEntry.szExeFile))
    {
       m_periodSecond.push_back(peProcessEntry.szExeFile);
    }
    }
    while(Process32Next(hSnapshot, &peProcessEntry));
    CloseHandle(hSnapshot);

    emit signalChangeQuentitySecondForProcess();    // call slot change quentity second
}

MainWindow::~MainWindow()
{
    delete ui;
}
