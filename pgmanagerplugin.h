#pragma once

#include "pgmanager_global.h"

#include <extensionsystem/iplugin.h>

namespace PgManager {
namespace Internal {

class PgManagerPlugin : public ExtensionSystem::IPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QtCreatorPlugin" FILE "PgManager.json")

public:
    //! Constructor a plugin
    PgManagerPlugin();

    //! Destroy a plugin
    ~PgManagerPlugin();

    //! Initializes a plugin
    bool initialize(const QStringList &arguments, QString *errorString);

    //! Initializes a depend plugins
    void extensionsInitialized();

    //! Deinitializes a plugin
    ShutdownFlag aboutToShutdown();
};

}
}
