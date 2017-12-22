TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    triangle_interval.cpp \
    interval.cpp \
    trapeze_interval.cpp \
    parameter.cpp \
    rule.cpp

HEADERS += \
    triangle_interval.h \
    interval.h \
    trapeze_interval.h \
    parameter.h \
    emark.h \
    rule.h
