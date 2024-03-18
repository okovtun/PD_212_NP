#ifndef PLOT_H
#define PLOT_H

#include <QMainWindow>

namespace Ui {
	class Plot;
}

class Plot : public QMainWindow
{
	Q_OBJECT

public:
	explicit Plot(QWidget *parent = nullptr);
	~Plot();

private:
	Ui::Plot *ui;
};

#endif // PLOT_H
