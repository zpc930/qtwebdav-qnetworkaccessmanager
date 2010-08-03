include(../qtwebdav.pro)

CONFIG += qt

OTHER_FILES += \
    explorer/icon.png

HEADERS += \
    explorer/propertiesdialog.h \
    explorer/mainwindow.h \

SOURCES += \
    explorer/propertiesdialog.cpp \
    explorer/mainwindow.cpp \
    explorer/main.cpp

FORMS += \
    explorer/mainwindow.ui \
    explorer/propertiesdialog.ui

RESOURCES += \
    explorer/explorer.qrc
