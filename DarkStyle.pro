QT += core gui widgets

TARGET = DarkStyle
TEMPLATE = lib
CONFIG += plugin

SOURCES += \
    DarkStyle.cpp \
    DarkStylePlugin.cpp

HEADERS += \
    DarkStyle.h \
    DarkStylePlugin.h

RESOURCES += darkstyle.qrc

DISTFILES += darkstyle.json

target.path = $$[QT_INSTALL_PLUGINS]/styles
INSTALLS += target
