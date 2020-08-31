# qjackctl.pro
#
TARGET = qjackctl

TEMPLATE = app
CONFIG += app_bundle
INCLUDEPATH += .

include(src.pri)

# Start qjacktrip stuff here
#
#
#
#

# for plugins
INCLUDEPATH += qjacktrip/faust-src-lair/stk

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

DESTDIR = .
QMAKE_CLEAN += -r ./jacktrip ./jacktrip_debug ./release ./debug

# isEmpty(PREFIX) will allow path to be changed during the command line
# call to qmake, e.g. qmake PREFIX=/usr
isEmpty(PREFIX) {
 PREFIX = /usr/local
}
target.path = $$PREFIX/bin/
INSTALLS += target

macx {
  message(Building on MAC OS X)
  QMAKE_CXXFLAGS += -D__MACOSX_CORE__ #-D__UNIX_JACK__ #RtAudio Flags
  QMAKE_MACOSX_DEPLOYMENT_TARGET = 10.9
  #QMAKE_MAC_SDK = macosx10.9
  CONFIG -= app_bundle
  #CONFIG += x86 #ppc #### If you have both libraries installed, you
  # can change between 32bits (x86) or 64bits(x86_64) Change this to go back to 32 bits (x86)
  LIBS += -framework CoreAudio -framework CoreFoundation
  DEFINES += __MAC_OSX__
  }


SOURCES += $$files(qjacktrip/src/*.cpp, true)
SOURCES -=  qjacktrip/src/JackTripThread.cpp \
            qjacktrip/src/main.cpp \
            qjacktrip/src/RtAudioInterface.cpp \
            qjacktrip/src/NetKS.cpp \
            qjacktrip/src/jacktrip_tests.cpp
HEADERS += $$files(qjacktrip/src/*.h, true)
HEADERS -=  qjacktrip/src/JackTripThread.h \
            qjacktrip/src/RtAudioInterface.h \
            qjacktrip/src/NetKS.h \
            qjacktrip/src/jacktrip_tests.h

FORMS += qjacktrip/src/qjacktrip.ui qjacktrip/src/about.ui qjacktrip/src/messageDialog.ui
RESOURCES += qjacktrip/src/qjacktrip.qrc



# RtAduio Input
win32 {
  INCLUDEPATH += qjacktrip/externals/rtaudio-4.1.1/include
  DEPENDPATH += qjacktrip/externals/rtaudio-4.1.1/include
}
macx | win32 {
INCLUDEPATH += qjacktrip/externals/rtaudio-4.1.1/
DEPENDPATH += qjacktrip/externals/rtaudio-4.1.1/
HEADERS +=
SOURCES +=
}


CONFIG -= debug_and_release build_all
CONFIG += app_bundle

#
#
#
#
#
# End Qjacktrip stuff here


#DEFINES += DEBUG

HEADERS += config.h \
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
