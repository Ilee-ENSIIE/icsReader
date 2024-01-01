#ifndef CALENDAR_H
#define CALENDAR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Calendar;
}
QT_END_NAMESPACE

class Calendar : public QMainWindow
{
    Q_OBJECT

public:
    Calendar(QWidget *parent = nullptr);
    ~Calendar();

private:
    QIcon paintIcon(QString,QColor);
    void setupMenu(void);
    void setupMainWidget(void);
    Ui::Calendar *ui;
};
#endif // CALENDAR_H
