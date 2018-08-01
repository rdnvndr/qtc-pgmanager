#pragma once

#include <QtGlobal>

#if defined(PGMANAGER_LIBRARY)
#  define PGMANAGERSHARED_EXPORT Q_DECL_EXPORT
#else
#  define PGMANAGERSHARED_EXPORT Q_DECL_IMPORT
#endif
