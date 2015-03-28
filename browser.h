/*
 * (c) 2014-205 Sam Nazarko
 * email@samnazarko.co.uk
 */

#ifndef BROWSER_H
#define BROWSER_H

#include <QMainWindow>
#include "widgetKeyBoard.h"

namespace Ui {
class browser;
}

class browser : public QMainWindow
{
    Q_OBJECT

public:
    explicit browser(QWidget *parent = 0);
    ~browser();

private:
    Ui::browser *ui;
    widgetKeyBoard *keyboard;
};

#endif // BROWSER_H
