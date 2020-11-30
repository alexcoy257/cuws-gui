#ifndef LIVEREHEARSALFORM_H
#define LIVEREHEARSALFORM_H

#include <QWidget>

namespace Ui {
class LiveRehearsalForm;
}

class LiveRehearsalForm : public QWidget
{
    Q_OBJECT

public:
    explicit LiveRehearsalForm(QWidget *parent = nullptr);
    ~LiveRehearsalForm();

private:
    Ui::LiveRehearsalForm *ui;
};

#endif // LIVEREHEARSALFORM_H
