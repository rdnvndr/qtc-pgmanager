#include "pgmanagerplugin.h"
#include "navigationwidget.h"

namespace PgManager {
namespace Internal {

class PgManagerPluginPrivate
{
public:
    NavigationWidget navigationWidget;
};

static PgManagerPluginPrivate *dd = nullptr;

PgManagerPlugin::~PgManagerPlugin()
{
    delete dd;
    dd = nullptr;
}

bool PgManagerPlugin::initialize(const QStringList &arguments, QString *errorString)
{
    Q_UNUSED(arguments)
    Q_UNUSED(errorString)

    dd = new PgManagerPluginPrivate;

    return true;
}

}}
