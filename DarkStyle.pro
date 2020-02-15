QT += core gui widgets

TARGET = DarkStyle
TEMPLATE = lib
CONFIG += plugin

DESTDIR = $$[QT_INSTALL_PLUGINS]/styles

SOURCES += \
    DarkStyle.cpp \
    DarkStylePlugin.cpp

HEADERS += \
    DarkStyle.h \
    DarkStylePlugin.h

RESOURCES += darkstyle.qrc

DISTFILES += darkstyle.json

unix {
    target.path = /usr/lib
    INSTALLS += target
}
