#include "DarkStylePlugin.h"
#include "DarkStyle.h"

DarkStylePlugin::DarkStylePlugin(QObject *parent)
        : QStylePlugin(parent)
{
}

QStyle *DarkStylePlugin::create(const QString &key)
{
	if (key == "darkstyle")
		return new DarkStyle(QStyleFactory::create("fusion"));
	return nullptr;
}
