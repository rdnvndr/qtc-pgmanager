#include "pgmanagerplugin.h"
#include "pgmanagerconstants.h"

#include <coreplugin/icore.h>
#include <coreplugin/icontext.h>
#include <coreplugin/actionmanager/actionmanager.h>
#include <coreplugin/actionmanager/command.h>
#include <coreplugin/actionmanager/actioncontainer.h>
#include <coreplugin/coreconstants.h>

#include <QAction>
#include <QMessageBox>
#include <QMainWindow>
#include <QMenu>

namespace PgManager {
namespace Internal {

PgManagerPlugin::PgManagerPlugin()
{
    // Create your members
}

PgManagerPlugin::~PgManagerPlugin()
{
    // Unregister objects from the plugin manager's object pool
    // Delete members
}

bool PgManagerPlugin::initialize(const QStringList &arguments, QString *errorString)
{
    Q_UNUSED(arguments)
    Q_UNUSED(errorString)

    return true;
}

void PgManagerPlugin::extensionsInitialized()
{

}

ExtensionSystem::IPlugin::ShutdownFlag PgManagerPlugin::aboutToShutdown()
{
    return SynchronousShutdown;
}


}
}
