#pragma once

#include "pgmanager_global.h"

#include <extensionsystem/iplugin.h>

namespace PgManager {
namespace Internal {

//! The class is a PostgreSQL manager plugin
class PgManagerPlugin : public ExtensionSystem::IPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QtCreatorPlugin" FILE "PgManager.json")

public:
    //! Constructs a plugin
    PgManagerPlugin() = default;

    //! Destroys a plugin
    ~PgManagerPlugin() final;

    //! Initializes a plugin
    bool initialize(const QStringList &arguments, QString *errorString) override;

    //! Initializes a depend plugins
    void extensionsInitialized() final {}
};

}
}
