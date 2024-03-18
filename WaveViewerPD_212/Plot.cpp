#include "Plot.h"
#include "ui_Plot.h"

Plot::Plot(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::Plot)
{
	ui->setupUi(this);

	ui->customPlot->addGraph();
	ui->customPlot->xAxis->setRange(0, 4500);
	ui->customPlot->yAxis->setRange(-500, 4500);
}

Plot::~Plot()
{
	delete ui;
}
