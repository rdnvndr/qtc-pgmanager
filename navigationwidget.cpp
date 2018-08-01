#include "navigationwidget.h"

#include <QtWidgets/QWidget>

namespace PgManager {
namespace Internal {

NavigationWidget::NavigationWidget()
{
    setDisplayName(tr("PostgreSQL"));
    setPriority(500);
    setId("PostgreSQL");
}

Core::NavigationView NavigationWidget::createWidget()
{
    QWidget *widget = new QWidget();
    Core::NavigationView view;
    view.widget = widget;
    return view;
}

}}
