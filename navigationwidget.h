#pragma once

#include <coreplugin/inavigationwidgetfactory.h>

namespace PgManager {
namespace Internal {

//! The class creates a PostgreSQL manager
class NavigationWidget : public Core::INavigationWidgetFactory
{
    Q_OBJECT

public:
    //! Constructs a navigation widget
    explicit NavigationWidget();

    //! Create a navigation view
    Core::NavigationView createWidget();
};

}}
