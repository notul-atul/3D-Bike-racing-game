// class to display options menu
#ifndef OPTIONS_H
#define OPTIONS_H

#include <QDialog>

namespace Ui {
class Options;
}

class Options : public QDialog
{
    Q_OBJECT
    
public:
    explicit Options(QWidget *parent = 0);
    ~Options();
    
private slots:
    void on_pushButton_clicked(); // return to main menu on click

private:
    Ui::Options *ui;
};

#endif // OPTIONS_H
