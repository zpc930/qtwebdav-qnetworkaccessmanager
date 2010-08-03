CONFIG += qt

QT += network xml

HEADERS += \
    src/webdav.h \
    src/webdav_url_info.h \
    src/webdav_export.h

SOURCES += \
    src/webdav_url_info.cpp \
    src/webdav.cpp

TEMPLATE = lib

DEFINES += QWEBDAV_MAKEDLL
