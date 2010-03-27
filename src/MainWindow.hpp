#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <gtk/gtk.h>

#include "Calendar.hpp"
#include "Timezones.hpp"


class MainWindow
{
public:
    MainWindow();
    ~MainWindow();

    GtkWindow* getWindow();
    void updateTime();

protected:
    GtkWidget* widget;
    GtkWidget* children_box;

    Calendar* calendar;
    Timezones* timezones;

};

#endif