TEMPLATE = lib
TARGET = GpsDisplayGadget
QT += svg serialport

include(../../gcsplugin.pri)

include(../../libs/qwt/qwt.pri)

include(../../plugins/coreplugin/coreplugin.pri)
include(../../plugins/uavobjects/uavobjects.pri)

HEADERS += gpsdisplayplugin.h
HEADERS += gpsconstellationwidget.h
HEADERS += gpsparser.h
HEADERS += telemetryparser.h
HEADERS += gpssnrwidget.h
HEADERS += buffer.h
HEADERS += gpsdisplaygadget.h
HEADERS += gpsdisplaywidget.h
HEADERS += gpsdisplaygadgetfactory.h

SOURCES += gpsdisplayplugin.cpp
SOURCES += gpsconstellationwidget.cpp
SOURCES += gpsparser.cpp
SOURCES += telemetryparser.cpp
SOURCES += gpssnrwidget.cpp
SOURCES += buffer.cpp
SOURCES += gpsdisplaygadget.cpp
SOURCES += gpsdisplaygadgetfactory.cpp
SOURCES += gpsdisplaywidget.cpp

OTHER_FILES += GpsDisplayGadget.pluginspec

FORMS += gpsdisplaywidget.ui

RESOURCES += widgetresources.qrc
