                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                #include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QStandardItem>
#include <QString>

const int QUENTITY_CALCULATE_HOUR   = 60;
const int QUENTITY_CALCULATE_DAY    = 1440 ;
const int QUENTITY_CALCULATE_MONTH  = 43800;
const int QUENTITY_CALCULATE_YEAR   = 525600;

const int ONE_MINUTE = 60000;
const int ONE_SECOND = 1000;

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

    connect(this, SIGNAL(signalOutputPeriodSecond()), this, SLOT(slotOutputPeriodSecond()));
}

void MainWindow::CalculateStatistic(int i_quentityCalculateElement)
{

    // verify size allperiod

    for (int i = m_periodAll.size(); i < m_periodAll.size() - i_quentityCalculateElement; --i)
    {
        for (int j = 0; j < m_periodAll[i].size(); j++)
        {
            for (int b = 0; b < _statistic.size(); b++)
            {
                if (m_calculateStatistic[b].m_name == m_periodAll[i][j].m_name)
                {
                    m_calculateStatistic[b].m_quentitySecond += m_periodAll[i][j].m_quentitySecond;

                    break;
                    break;
                }
                else if (b == m_calculateStatistic.size() - 1)
                {
                    m_calculateStatistic.push_back(m_periodAll[i][j]);
                }
            }
        }
    }
}

void MainWindow::slotOutputPeriod(PeriodOutput i_typePeriod)
{
    // output QVector second on QTable
    switch (i_typePeriod)
    {
        case PeriodOutput::SECOND:
        {
            ui->ui_tableStatistic->setRowCount(m_periodSecond.size());
            for (int i = 0; i < m_periodSecond.size(); i++)
            {
                ui->ui_tableStatistic->setItem(i, 0, new QTableWidgetItem(m_periodSecond[i]));
                ui->ui_tableStatistic->setItem(i, 1, new QTableWidgetItem(1));
            }

            break;
        }
        case PeriodOutput::HOUR:
        {
            ui->ui_tableStatistic->setRowCount(m_periodSecond.size());
            CalcualteStatistic(QUENTITY_CALCULATE_HOUR);
            for (int i = 0; i < m_calculateStatistic.size(); i++)
            {
                ui->ui_tableStatistic->setItem(i, 0, new QTableWidgetItem(m_calculateStatistic[i].m_name));
                ui->ui_tableStatistic->setItem(i, 1, new QTableWidgetItem(m_calculateStatistic[i].m_quentitySecond));
            }

            break;
        }
        case PeriodOutput::DAY:
        {
            ui->ui_tableStatistic->setRowCount(m_periodSecond.size());
            CalcualteStatistic(QUENTITY_CALCULATE_DAY);

            break;
        }
        case PeriodOutput::MONTH:
        {
            ui->ui_tableStatistic->setRowCount(m_periodSecond.size());
            CalcualteStatistic(QUENTITY_CALCULATE_MONTH);

            break;
        }
        case PeriodOutput::YEAR:
        {
            ui->ui_tableStatistic->setRowCount(m_periodSecond.size());
            CalcualteStatistic(QUENTITY_CALCULATE_YEAR);


            break;
        }
    }
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
            m_periodSecond[i] = " ";
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
                    m_periodSecond[i] = " ";

                    break;
                    break;
                }
            }
        }
   }

   // add new program and set quentity second == 1
   for (int i = 0; i < m_periodSecond.size(); i++)
   {
       if (m_periodSecond[i] != " ")
       {
           m_periodMinute.push_back(Program(1, m_periodSecond[i]));
           m_periodSecond[i] = " ";
       }
   }
}

void MainWindow::slotAddPeriodSecondToMinute()
{
    HANDLE CONST hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    GetProcessList(hStdOut);
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
        QString _nameProcess  = QString::fromWCharArray(peProcessEntry.szExeFile);
        if (std::find(m_periodSecond.begin(), m_periodSecond.end(), _nameProcess) == std::end(m_periodSecond))
        {
           m_periodSecond.push_back(_nameProcess);
        }
    }
    while(Process32Next(hSnapshot, &peProcessEntry));
    CloseHandle(hSnapshot);

    emit signalOutputPeriodSecond();

    emit signalChangeQuentitySecondForProcess();    // call slot change quentity second
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ui_btnHour_clicked()
{

}

void MainWindow::on_ui_btnDay_clicked()
{

}

void MainWindow::on_ui_btnMonth_clicked()
{

}

void MainWindow::on_ui_btnYear_clicked()
{

}
