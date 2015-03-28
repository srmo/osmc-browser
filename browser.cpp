/*
 * (c) 2014-205 Sam Nazarko
 * email@samnazarko.co.uk
 */

#include "browser.h"
#include "ui_browser.h"
#include <QDebug>
#include <QPushButton>
#include <QRect>
#include <QWebView>
#include <QTabWidget>
#include "browsertab.h"

browser::browser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::browser)
{
    ui->setupUi(this);
    /* first, remove all tabs, coming from the ui designer. */
    ui->tabWidget->removeTab(1);
    ui->tabWidget->removeTab(0);

    /* now add our initial tab */
    ui->tabWidget->addTab(new BrowserTab(ui->tabWidget), BrowserTab::INITIAL_TITLE);
    this->keyboard = new widgetKeyBoard(false);
    this->keyboard->setZoomFacility(true);
    this->keyboard->enableSwitchingEcho(false); // enable possibility to change echo through keyboard
    this->keyboard->createKeyboard(); // only create keyboard
    this->keyboard->show(this);
}

browser::~browser()
{
    delete this->keyboard;
    delete ui;
}
