QT       += core gui network sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    CommandLineInterface.cpp \
    Database.cpp \
    Message.cpp \
    Parsing.cpp \
    User.cpp \
    loginform.cpp \
    main.cpp \
    mainwindow.cpp \
    registrationform.cpp \
    sha1.cpp \
    sql.cpp \
    startscreen.cpp

HEADERS += \
    CommandLineInterface.h \
    Database.h \
    Message.h \
    Parsing.h \
    User.h \
    loginform.h \
    mainwindow.h \
    registrationform.h \
    sha1.h \
    sql.h \
    startscreen.h

FORMS += \
    loginform.ui \
    mainwindow.ui \
    registrationform.ui \
    startscreen.ui

LIBS += \
    -L/Library/PostgreSQL/17/lib

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
