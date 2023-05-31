#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QHeaderView>
#include <QStandardItemModel>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QStringList header;
    header<<"序号"<<"名称"<<"设备ID"<<"设备IP"<<"设备端口"<<"型号";
    ui->deviceTableWidget->setShowGrid(true);
    ui->deviceTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->deviceTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->deviceTableWidget->horizontalHeader()->setStretchLastSection(true);
    ui->deviceTableWidget->horizontalHeader()->setFont(QFont("song", 12));
    ui->deviceTableWidget->setHorizontalHeaderLabels(header);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_scanButton_clicked()
{

}

