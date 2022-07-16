#pragma once

#include <QtWidgets/QMainWindow>
#include <QLineEdit>
#include "ui_Task_37_1.h"

class Task_37_1 : public QMainWindow
{
    Q_OBJECT
public:
    Task_37_1(QWidget *parent = Q_NULLPTR);
public slots:
    void add();
    void div();
    void min();
    void umn();

private:
    Ui::MainWindow ui;
    QLineEdit* oneNum = nullptr;
    QLineEdit* twoNum = nullptr;
    QLineEdit* result = nullptr;
};
