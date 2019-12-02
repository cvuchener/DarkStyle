#ifndef DARKSTYLEPLUGIN_H
#define DARKSTYLEPLUGIN_H

#include <QStylePlugin>

class DarkStylePlugin : public QStylePlugin
{
	Q_OBJECT
#if QT_VERSION >= 0x050000
	Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QStyleFactoryInterface" FILE "darkstyle.json")
#endif // QT_VERSION >= 0x050000

public:
	explicit DarkStylePlugin(QObject *parent = nullptr);

	QStyle *create(const QString &key) override;
};

#endif // DARKSTYLEPLUGIN_H
