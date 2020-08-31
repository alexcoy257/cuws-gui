# qjackctl.pro
#
TARGET = qjackctl

TEMPLATE = app
CONFIG += app_bundle
INCLUDEPATH += .

include(src.pri)

#DEFINES += DEBUG

HEADERS += config.h \
	qSimpleform.h \
	qjackctl.h \
	qjackctlAbout.h \
	qjackctlAlsaConnect.h \
	qjackctlAlsaGraph.h \
	qjackctlConnect.h \
	qjackctlAliases.h \
	qjackctlGraph.h \
	qjackctlGraphCommand.h \
	qjackctlInterfaceComboBox.h \
	qjackctlJackConnect.h \
	qjackctlJackGraph.h \
	qjackctlPatchbay.h \
	qjackctlPatchbayFile.h \
	qjackctlPatchbayRack.h \
	qjackctlSession.h \
	qjackctlSetup.h \
	qjackctlStatus.h \
	qjackctlSystemTray.h \
	qjackctlAboutForm.h \
	qjackctlConnectionsForm.h \
	qjackctlGraphForm.h \
	qjackctlMainForm.h \
	qjackctlMessagesStatusForm.h \
	qjackctlPatchbayForm.h \
	qjackctlSessionForm.h \
	qjackctlSetupForm.h \
	qjackctlPaletteForm.h \
	qjackctlSocketForm.h

SOURCES += \
	qSimpleForm.cpp \
	qjackctl.cpp \
	qjackctlAlsaConnect.cpp \
	qjackctlAlsaGraph.cpp \
	qjackctlConnect.cpp \
	qjackctlAliases.cpp \
	qjackctlGraph.cpp \
	qjackctlGraphCommand.cpp \
	qjackctlInterfaceComboBox.cpp \
	qjackctlJackConnect.cpp \
	qjackctlJackGraph.cpp \
	qjackctlPatchbay.cpp \
	qjackctlPatchbayFile.cpp \
	qjackctlPatchbayRack.cpp \
	qjackctlSession.cpp \
	qjackctlSetup.cpp \
	qjackctlSystemTray.cpp \
	qjackctlAboutForm.cpp \
	qjackctlConnectionsForm.cpp \
	qjackctlGraphForm.cpp \
	qjackctlMainForm.cpp \
	qjackctlMessagesStatusForm.cpp \
	qjackctlPatchbayForm.cpp \
	qjackctlSessionForm.cpp \
	qjackctlSetupForm.cpp \
	qjackctlPaletteForm.cpp \
	qjackctlSocketForm.cpp

FORMS += \
	qjackctlAboutForm.ui \
	qjackctlConnectionsForm.ui \
	qjackctlGraphForm.ui \
	qjackctlMainForm.ui \
	qjackctlMessagesStatusForm.ui \
	qjackctlPatchbayForm.ui \
	qjackctlSessionForm.ui \
	qjackctlSetupForm.ui \
	qjackctlPaletteForm.ui \
	qjackctlSocketForm.ui

RESOURCES += \
	qjackctl.qrc


TRANSLATIONS += \
	translations/qjackctl_cs.ts \
	translations/qjackctl_de.ts \
	translations/qjackctl_es.ts \
	translations/qjackctl_fr.ts \
	translations/qjackctl_it.ts \
	translations/qjackctl_ja.ts \
	translations/qjackctl_nl.ts \
	translations/qjackctl_pt.ts \
	translations/qjackctl_ru.ts


unix {

	# variables
	OBJECTS_DIR = .obj
	MOC_DIR     = .moc
	UI_DIR      = .ui

	isEmpty(PREFIX) {
		PREFIX = /usr/local
	}

	isEmpty(BINDIR) {
		BINDIR = $${PREFIX}/bin
	}

	isEmpty(DATADIR) {
		DATADIR = $${PREFIX}/share
	}

	#DEFINES += DATADIR=\"$${DATADIR}\"

	# make install
	INSTALLS += target desktop icon icon_scalable appdata

	target.path = $${BINDIR}

	desktop.path = $${DATADIR}/applications
	desktop.files += $${TARGET}.desktop

	icon.path = $${DATADIR}/icons/hicolor/32x32/apps
	icon.files += images/$${TARGET}.png 

	icon_scalable.path = $${DATADIR}/icons/hicolor/scalable/apps
	icon_scalable.files += images/$${TARGET}.svg

	appdata.path = $${DATADIR}/metainfo
	appdata.files += appdata/$${TARGET}.appdata.xml
}

# XML/DOM support
QT += widgets xml

win32 {
	CONFIG += static
}

#******************************
# Created by Juan-Pablo Caceres
#******************************

CONFIG += c++11 console
#CONFIG -= app_bundle

CONFIG += qt thread release build_all

#CONFIG(debug, debug|release) {
#  TARGET = qjacktrip_debug
#  } else {
#  TARGET = qjacktrip
#  }

QT += gui
QT += network
QT += widgets

# rc.1.2 switch enables experimental wair build, merge some of it with WAIRTOHUB
# DEFINES += WAIR
DEFINES += WAIRTOHUB

# http://wiki.qtcentre.org/index.php?title=Undocumented_qmake#Custom_tools
#cc DEFINES += __RT_AUDIO__
# Configuration without Jack
nojack {
  DEFINES += __NO_JACK__
}

# for plugins
INCLUDEPATH += faust-src-lair/stk

!win32 {
  INCLUDEPATH+=/usr/local/include
# wair needs stk, can be had from linux this way
# INCLUDEPATH+=/usr/include/stk
# LIBS += -L/usr/local/lib -ljack -lstk -lm
  LIBS += -L/usr/local/lib -ljack -lm
  nojack {
    message(Building NONJACK)
    LIBS -= -ljack
  }
}

macx {
  message(Building on MAC OS X)
  QMAKE_CXXFLAGS += -D__MACOSX_CORE__ #-D__UNIX_JACK__ #RtAudio Flags
  QMAKE_MACOSX_DEPLOYMENT_TARGET = 10.9
  #QMAKE_MAC_SDK = macosx10.9
  #CONFIG -= app_bundle
  #CONFIG += x86 #ppc #### If you have both libraries installed, you
  # can change between 32bits (x86) or 64bits(x86_64) Change this to go back to 32 bits (x86)
  LIBS += -framework CoreAudio -framework CoreFoundation
  DEFINES += __MAC_OSX__
  }

linux-g++ | linux-g++-64 {
#   LIBS += -lasound -lrtaudio
  QMAKE_CXXFLAGS += -D__LINUX_ALSA__ #-D__LINUX_OSS__ #RtAudio Flags

FEDORA = $$system(cat /proc/version | grep -o fc)

contains( FEDORA, fc): {
  message(building on fedora)
}

UBUNTU = $$system(cat /proc/version | grep -o Ubuntu)

contains( UBUNTU, Ubuntu): {
  message(building on  Ubuntu)

# workaround for Qt bug under ubuntu 18.04
# gcc version 7.3.0 (Ubuntu 7.3.0-16ubuntu3)
# QMake version 3.1
# Using Qt version 5.9.5 in /usr/lib/x86_64-linux-gnu
  INCLUDEPATH += /usr/include/x86_64-linux-gnu/c++/7

# sets differences from original fedora version
  DEFINES += __UBUNTU__
}

  QMAKE_CXXFLAGS += -g -O2
  DEFINES += __LINUX__
  }

linux-g++ {
  message(Linux)
  QMAKE_CXXFLAGS += -D__LINUX_ALSA__ #-D__LINUX_OSS__ #RtAudio Flags
  }

linux-g++-64 {
  message(Linux 64bit)
  QMAKE_CXXFLAGS += -fPIC -D__LINUX_ALSA__ #-D__LINUX_OSS__ #RtAudio Flags
  }


win32 {
  message(Building on win32)
#cc  CONFIG += x86 console
  CONFIG += c++11 console
  INCLUDEPATH += "C:\Program Files (x86)\Jack\includes"
  LIBS += "C:\Program Files (x86)\Jack\lib\libjack64.lib"
  LIBS += "C:\Program Files (x86)\Jack\lib\libjackserver64.lib"
#cc  QMAKE_CXXFLAGS += -D__WINDOWS_ASIO__ #-D__UNIX_JACK__ #RtAudio Flags
  #QMAKE_LFLAGS += -static -static-libgcc -static-libstdc++ -lpthread
  LIBS += -lWs2_32 #cc -lOle32 #needed by rtaudio/asio
  DEFINES += __WIN_32__
  DEFINES += _WIN32_WINNT=0x0600 #needed for inet_pton
  DEFINES += WIN32_LEAN_AND_MEAN
#cc    DEFINES -= UNICODE #RtAudio for Qt
}

DESTDIR = .
QMAKE_CLEAN += -r ./jacktrip ./jacktrip_debug ./release ./debug
target.path = /usr/bin
INSTALLS += target

# for plugins
INCLUDEPATH += faust-src-lair

# Input
HEADERS += DataProtocol.h \
           JMess.h \
           JackTrip.h \
           jacktrip_globals.h \
           jacktrip_types.h \
           JackTripWorker.h \
           LoopBack.h \
           PacketHeader.h \
           ProcessPlugin.h \
           RingBuffer.h \
           RingBufferWavetable.h \
           Settings.h \
           UdpDataProtocol.h \
           UdpHubListener.h \
           AudioInterface.h \
           about.h \
           qjacktrip.h
#(Removed JackTripThread.h JackTripWorkerMessages.h NetKS.h TestRingBuffer.h ThreadPoolTest.h)

!nojack {
HEADERS += JackAudioInterface.h
}
SOURCES += DataProtocol.cpp \
           JMess.cpp \
           JackTrip.cpp \
           jacktrip_globals.cpp \
           JackTripWorker.cpp \
           LoopBack.cpp \
           PacketHeader.cpp \
           RingBuffer.cpp \
           Settings.cpp \
           UdpDataProtocol.cpp \
           UdpHubListener.cpp \
           AudioInterface.cpp \
           about.cpp \
           main.cpp \
           qjacktrip.cpp
#(Removed jacktrip_main.cpp jacktrip_tests.cpp JackTripThread.cpp ProcessPlugin.cpp)

!nojack {
SOURCES += JackAudioInterface.cpp
}

FORMS += qjacktrip.ui about.ui
RESOURCES += qjacktrip.qrc

# RtAduio Input
win32 {
  INCLUDEPATH += externals/rtaudio-4.1.1/include
  DEPENDPATH += externals/rtaudio-4.1.1/include
}
macx | win32 {
INCLUDEPATH += externals/rtaudio-4.1.1/
DEPENDPATH += externals/rtaudio-4.1.1/
HEADERS +=
SOURCES +=
}
