# qjackctl.pri
#
PREFIX  = C:/qjackctl
BINDIR  = C:/qjackctl/bin
LIBDIR  = C:/qjackctl/lib
DATADIR = C:/qjackctl/share
MANDIR  = C:/qjackctl/share/man

VERSION = 
CONFIG += release

INCLUDEPATH += C:/Qt/5.15.0/mingw81/include "C:\Program Files (x86)\Jack\includes"
LIBS += -LC:/Qt/5.15.0/mingw81/lib -L"C:\Program Files (x86)\Jack\lib" -llibjack64 -llibjackserver64

# Extra optimization flags
QMAKE_CXXFLAGS += 
QMAKE_LFLAGS += 

# D-BUS support
QDBUS = 
!isEmpty(QDBUS) {
	QT += dbus
}

# Network support
QNETWORK = network
!isEmpty(QNETWORK) {
	QT += network
}
