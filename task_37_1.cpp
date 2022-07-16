#include "Task_37_1.h"

Task_37_1::Task_37_1(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    oneNum = ui.numOne;
    twoNum = ui.numTwo;
    result = ui.result;
}

void Task_37_1::add() {
    auto one = oneNum->text().toStdString();
    auto two = twoNum->text().toStdString();
    if (one.empty() || two.empty()) {
        result->setText("ERROR");
        return;
    }
    double a = std::stod(one);
    double b = std::stod(two);
    double r = a + b;
    result->setText(QString::number(r));
}
void Task_37_1::div() {
    auto one = oneNum->text().toStdString();
    auto two = twoNum->text().toStdString();
    if (one.empty() || two.empty()) {
        result->setText("ERROR");
        return;
    }
    double a = std::stod(one);
    double b = std::stod(two);
    if (b == 0.0) {
        result->setText("ERROR");
        return;
    }
    double r = a / b;
    result->setText(QString::number(r));
}
void Task_37_1::min() {
    auto one = oneNum->text().toStdString();
    auto two = twoNum->text().toStdString();
    if (one.empty() || two.empty()) {
        result->setText("ERROR");
        return;
    }
    double a = std::stod(one);
    double b = std::stod(two);
    double r = a - b;
    result->setText(QString::number(r));
}
void Task_37_1::umn() {
    auto one = oneNum->text().toStdString();
    auto two = twoNum->text().toStdString();
    if (one.empty() || two.empty()) {
        result->setText("ERROR");
        return;
    }
    double a = std::stod(one);
    double b = std::stod(two);
    double r = a * b;
    result->setText(QString::number(r));
}
