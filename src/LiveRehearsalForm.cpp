#include "LiveRehearsalForm.h"
#include "ui_LiveRehearsalForm.h"

LiveRehearsalForm::LiveRehearsalForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LiveRehearsalForm)
{
    ui->setupUi(this);
}

LiveRehearsalForm::~LiveRehearsalForm()
{
    delete ui;
}
