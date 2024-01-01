#include "calendar.h"
#include "./ui_calendar.h"
#include <QPainter>

Calendar::Calendar(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calendar)
{
    ui->setupUi(this);
    setupMenu();
    setupMainWidget();
}

Calendar::~Calendar()
{
    delete ui;
}

QIcon Calendar::paintIcon(QString string,QColor color)
{
    QPixmap pixmap(string);
    QPainter* painter = new QPainter(&pixmap);
    painter->setCompositionMode(QPainter::CompositionMode_SourceIn);
    painter->setBrush(color);
    painter->setPen(color);
    painter->drawRect(pixmap.rect());
    return QIcon(pixmap);
}

void Calendar::setupMenu(){

    menuBar()->addMenu("")->setIcon(paintIcon(":/images/plus.png",Qt::darkRed));
    menuBar()->addMenu("")->setIcon(paintIcon(":/images/plus.png",Qt::white));
}

void Calendar::setupMainWidget()
{
    auto mainWidget = new QWidget;
    setCentralWidget(mainWidget);
}
