/********************************************************************************
** Form generated from reading UI file 'qjacktrip.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QJACKTRIP_H
#define UI_QJACKTRIP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QJackTrip
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *buttonLayout;
    QPushButton *connectButton;
    QPushButton *disconnectButton;
    QPushButton *exitButton;
    QLabel *addressLabel;
    QLabel *typeLabel;
    QComboBox *typeComboBox;
    QLabel *ipLabel;
    QLineEdit *addressEdit;
    QTabWidget *optionsTabWidget;
    QWidget *basicTab;
    QGridLayout *gridLayout_3;
    QCheckBox *zeroCheckBox;
    QComboBox *autoPatchComboBox;
    QSpacerItem *basicVerticalSpacer;
    QLabel *autoPatchLabel;
    QLabel *channelLabel;
    QSpinBox *channelSpinBox;
    QHBoxLayout *aboutLayout;
    QSpacerItem *aboutSpacer;
    QPushButton *aboutButton;
    QWidget *advancedTab;
    QGridLayout *gridLayout_4;
    QLabel *resolutionLabel;
    QLineEdit *clientNameEdit;
    QSpinBox *queueLengthSpinBox;
    QHBoxLayout *connectAudioLayout;
    QCheckBox *connectAudioCheckBox;
    QLabel *queueLengthLabel;
    QHBoxLayout *useDefaultsLayout;
    QSpacerItem *useDefaultsSpacer;
    QPushButton *useDefaultsButton;
    QComboBox *resolutionComboBox;
    QLabel *clientNameLabel;
    QSpinBox *redundancySpinBox;
    QSpacerItem *advancedVerticalSpacer;
    QLabel *portOffsetLabel;
    QSpinBox *portOffsetSpinBox;
    QLabel *redundancyLabel;
    QLineEdit *remoteNameEdit;
    QLabel *remoteNameLabel;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QJackTrip)
    {
        if (QJackTrip->objectName().isEmpty())
            QJackTrip->setObjectName(QStringLiteral("QJackTrip"));
        QJackTrip->resize(403, 555);
        QIcon icon;
        icon.addFile(QStringLiteral(":/qjacktrip/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        QJackTrip->setWindowIcon(icon);
        centralWidget = new QWidget(QJackTrip);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName(QStringLiteral("buttonLayout"));
        connectButton = new QPushButton(centralWidget);
        connectButton->setObjectName(QStringLiteral("connectButton"));
        connectButton->setEnabled(false);

        buttonLayout->addWidget(connectButton);

        disconnectButton = new QPushButton(centralWidget);
        disconnectButton->setObjectName(QStringLiteral("disconnectButton"));
        disconnectButton->setEnabled(false);

        buttonLayout->addWidget(disconnectButton);

        exitButton = new QPushButton(centralWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));

        buttonLayout->addWidget(exitButton);


        gridLayout->addLayout(buttonLayout, 5, 0, 1, 2);

        addressLabel = new QLabel(centralWidget);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));
        addressLabel->setEnabled(true);

        gridLayout->addWidget(addressLabel, 2, 0, 1, 1);

        typeLabel = new QLabel(centralWidget);
        typeLabel->setObjectName(QStringLiteral("typeLabel"));

        gridLayout->addWidget(typeLabel, 0, 0, 1, 1);

        typeComboBox = new QComboBox(centralWidget);
        typeComboBox->addItem(QString());
        typeComboBox->addItem(QString());
        typeComboBox->addItem(QString());
        typeComboBox->addItem(QString());
        typeComboBox->setObjectName(QStringLiteral("typeComboBox"));

        gridLayout->addWidget(typeComboBox, 0, 1, 1, 1);

        ipLabel = new QLabel(centralWidget);
        ipLabel->setObjectName(QStringLiteral("ipLabel"));

        gridLayout->addWidget(ipLabel, 1, 1, 1, 1);

        addressEdit = new QLineEdit(centralWidget);
        addressEdit->setObjectName(QStringLiteral("addressEdit"));

        gridLayout->addWidget(addressEdit, 2, 1, 1, 1);

        optionsTabWidget = new QTabWidget(centralWidget);
        optionsTabWidget->setObjectName(QStringLiteral("optionsTabWidget"));
        optionsTabWidget->setEnabled(true);
        optionsTabWidget->setMinimumSize(QSize(391, 0));
        optionsTabWidget->setTabsClosable(false);
        optionsTabWidget->setMovable(false);
        basicTab = new QWidget();
        basicTab->setObjectName(QStringLiteral("basicTab"));
        gridLayout_3 = new QGridLayout(basicTab);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        zeroCheckBox = new QCheckBox(basicTab);
        zeroCheckBox->setObjectName(QStringLiteral("zeroCheckBox"));

        gridLayout_3->addWidget(zeroCheckBox, 3, 0, 1, 2);

        autoPatchComboBox = new QComboBox(basicTab);
        autoPatchComboBox->addItem(QString());
        autoPatchComboBox->addItem(QString());
        autoPatchComboBox->addItem(QString());
        autoPatchComboBox->addItem(QString());
        autoPatchComboBox->addItem(QString());
        autoPatchComboBox->setObjectName(QStringLiteral("autoPatchComboBox"));

        gridLayout_3->addWidget(autoPatchComboBox, 1, 1, 1, 1);

        basicVerticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(basicVerticalSpacer, 4, 0, 1, 1);

        autoPatchLabel = new QLabel(basicTab);
        autoPatchLabel->setObjectName(QStringLiteral("autoPatchLabel"));
        autoPatchLabel->setMaximumSize(QSize(130, 16777215));

        gridLayout_3->addWidget(autoPatchLabel, 1, 0, 1, 1);

        channelLabel = new QLabel(basicTab);
        channelLabel->setObjectName(QStringLiteral("channelLabel"));
        channelLabel->setMaximumSize(QSize(130, 16777215));

        gridLayout_3->addWidget(channelLabel, 0, 0, 1, 1);

        channelSpinBox = new QSpinBox(basicTab);
        channelSpinBox->setObjectName(QStringLiteral("channelSpinBox"));
        channelSpinBox->setMinimum(1);
        channelSpinBox->setValue(2);

        gridLayout_3->addWidget(channelSpinBox, 0, 1, 1, 1);

        aboutLayout = new QHBoxLayout();
        aboutLayout->setObjectName(QStringLiteral("aboutLayout"));
        aboutSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        aboutLayout->addItem(aboutSpacer);

        aboutButton = new QPushButton(basicTab);
        aboutButton->setObjectName(QStringLiteral("aboutButton"));

        aboutLayout->addWidget(aboutButton);


        gridLayout_3->addLayout(aboutLayout, 6, 0, 1, 2);

        optionsTabWidget->addTab(basicTab, QString());
        advancedTab = new QWidget();
        advancedTab->setObjectName(QStringLiteral("advancedTab"));
        advancedTab->setEnabled(true);
        gridLayout_4 = new QGridLayout(advancedTab);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        resolutionLabel = new QLabel(advancedTab);
        resolutionLabel->setObjectName(QStringLiteral("resolutionLabel"));

        gridLayout_4->addWidget(resolutionLabel, 5, 0, 1, 1);

        clientNameEdit = new QLineEdit(advancedTab);
        clientNameEdit->setObjectName(QStringLiteral("clientNameEdit"));
        clientNameEdit->setMaxLength(64);

        gridLayout_4->addWidget(clientNameEdit, 0, 1, 1, 1);

        queueLengthSpinBox = new QSpinBox(advancedTab);
        queueLengthSpinBox->setObjectName(QStringLiteral("queueLengthSpinBox"));
        queueLengthSpinBox->setMinimum(2);
        queueLengthSpinBox->setValue(4);

        gridLayout_4->addWidget(queueLengthSpinBox, 3, 1, 1, 1);

        connectAudioLayout = new QHBoxLayout();
        connectAudioLayout->setObjectName(QStringLiteral("connectAudioLayout"));
        connectAudioCheckBox = new QCheckBox(advancedTab);
        connectAudioCheckBox->setObjectName(QStringLiteral("connectAudioCheckBox"));
        connectAudioCheckBox->setChecked(true);

        connectAudioLayout->addWidget(connectAudioCheckBox);


        gridLayout_4->addLayout(connectAudioLayout, 6, 0, 1, 2);

        queueLengthLabel = new QLabel(advancedTab);
        queueLengthLabel->setObjectName(QStringLiteral("queueLengthLabel"));

        gridLayout_4->addWidget(queueLengthLabel, 3, 0, 1, 1);

        useDefaultsLayout = new QHBoxLayout();
        useDefaultsLayout->setObjectName(QStringLiteral("useDefaultsLayout"));
        useDefaultsSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        useDefaultsLayout->addItem(useDefaultsSpacer);

        useDefaultsButton = new QPushButton(advancedTab);
        useDefaultsButton->setObjectName(QStringLiteral("useDefaultsButton"));

        useDefaultsLayout->addWidget(useDefaultsButton);


        gridLayout_4->addLayout(useDefaultsLayout, 8, 0, 1, 2);

        resolutionComboBox = new QComboBox(advancedTab);
        resolutionComboBox->addItem(QString());
        resolutionComboBox->addItem(QString());
        resolutionComboBox->addItem(QString());
        resolutionComboBox->addItem(QString());
        resolutionComboBox->setObjectName(QStringLiteral("resolutionComboBox"));

        gridLayout_4->addWidget(resolutionComboBox, 5, 1, 1, 1);

        clientNameLabel = new QLabel(advancedTab);
        clientNameLabel->setObjectName(QStringLiteral("clientNameLabel"));

        gridLayout_4->addWidget(clientNameLabel, 0, 0, 1, 1);

        redundancySpinBox = new QSpinBox(advancedTab);
        redundancySpinBox->setObjectName(QStringLiteral("redundancySpinBox"));
        redundancySpinBox->setMinimum(1);
        redundancySpinBox->setValue(1);

        gridLayout_4->addWidget(redundancySpinBox, 4, 1, 1, 1);

        advancedVerticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(advancedVerticalSpacer, 7, 0, 1, 1);

        portOffsetLabel = new QLabel(advancedTab);
        portOffsetLabel->setObjectName(QStringLiteral("portOffsetLabel"));

        gridLayout_4->addWidget(portOffsetLabel, 2, 0, 1, 1);

        portOffsetSpinBox = new QSpinBox(advancedTab);
        portOffsetSpinBox->setObjectName(QStringLiteral("portOffsetSpinBox"));
        portOffsetSpinBox->setMaximum(999);

        gridLayout_4->addWidget(portOffsetSpinBox, 2, 1, 1, 1);

        redundancyLabel = new QLabel(advancedTab);
        redundancyLabel->setObjectName(QStringLiteral("redundancyLabel"));

        gridLayout_4->addWidget(redundancyLabel, 4, 0, 1, 1);

        remoteNameEdit = new QLineEdit(advancedTab);
        remoteNameEdit->setObjectName(QStringLiteral("remoteNameEdit"));
        remoteNameEdit->setMaxLength(64);

        gridLayout_4->addWidget(remoteNameEdit, 1, 1, 1, 1);

        remoteNameLabel = new QLabel(advancedTab);
        remoteNameLabel->setObjectName(QStringLiteral("remoteNameLabel"));

        gridLayout_4->addWidget(remoteNameLabel, 1, 0, 1, 1);

        optionsTabWidget->addTab(advancedTab, QString());

        gridLayout->addWidget(optionsTabWidget, 4, 0, 1, 2);

        QJackTrip->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QJackTrip);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 403, 30));
        QJackTrip->setMenuBar(menuBar);
        statusBar = new QStatusBar(QJackTrip);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QJackTrip->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        addressLabel->setBuddy(addressEdit);
        typeLabel->setBuddy(typeComboBox);
        autoPatchLabel->setBuddy(autoPatchComboBox);
        channelLabel->setBuddy(channelSpinBox);
        resolutionLabel->setBuddy(resolutionComboBox);
        queueLengthLabel->setBuddy(queueLengthSpinBox);
        clientNameLabel->setBuddy(clientNameEdit);
        portOffsetLabel->setBuddy(portOffsetSpinBox);
        redundancyLabel->setBuddy(redundancySpinBox);
        remoteNameLabel->setBuddy(remoteNameEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(typeComboBox, addressEdit);
        QWidget::setTabOrder(addressEdit, connectButton);
        QWidget::setTabOrder(connectButton, disconnectButton);
        QWidget::setTabOrder(disconnectButton, exitButton);
        QWidget::setTabOrder(exitButton, optionsTabWidget);
        QWidget::setTabOrder(optionsTabWidget, channelSpinBox);
        QWidget::setTabOrder(channelSpinBox, autoPatchComboBox);
        QWidget::setTabOrder(autoPatchComboBox, zeroCheckBox);
        QWidget::setTabOrder(zeroCheckBox, aboutButton);
        QWidget::setTabOrder(aboutButton, clientNameEdit);
        QWidget::setTabOrder(clientNameEdit, remoteNameEdit);
        QWidget::setTabOrder(remoteNameEdit, portOffsetSpinBox);
        QWidget::setTabOrder(portOffsetSpinBox, queueLengthSpinBox);
        QWidget::setTabOrder(queueLengthSpinBox, redundancySpinBox);
        QWidget::setTabOrder(redundancySpinBox, resolutionComboBox);
        QWidget::setTabOrder(resolutionComboBox, connectAudioCheckBox);
        QWidget::setTabOrder(connectAudioCheckBox, useDefaultsButton);

        retranslateUi(QJackTrip);

        optionsTabWidget->setCurrentIndex(0);
        autoPatchComboBox->setCurrentIndex(0);
        resolutionComboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QJackTrip);
    } // setupUi

    void retranslateUi(QMainWindow *QJackTrip)
    {
        QJackTrip->setWindowTitle(QApplication::translate("QJackTrip", "QJackTrip", nullptr));
        connectButton->setText(QApplication::translate("QJackTrip", "Connect", nullptr));
        disconnectButton->setText(QApplication::translate("QJackTrip", "Disconnect", nullptr));
        exitButton->setText(QApplication::translate("QJackTrip", "Exit", nullptr));
        addressLabel->setText(QApplication::translate("QJackTrip", "&Address of server", nullptr));
        typeLabel->setText(QApplication::translate("QJackTrip", "&Run JackTrip as", nullptr));
        typeComboBox->setItemText(0, QApplication::translate("QJackTrip", "Client", nullptr));
        typeComboBox->setItemText(1, QApplication::translate("QJackTrip", "Server", nullptr));
        typeComboBox->setItemText(2, QApplication::translate("QJackTrip", "Hub Client", nullptr));
        typeComboBox->setItemText(3, QApplication::translate("QJackTrip", "Hub Server", nullptr));

#ifndef QT_NO_TOOLTIP
        typeComboBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        ipLabel->setText(QApplication::translate("QJackTrip", "Looking up external IP address...", nullptr));
        zeroCheckBox->setText(QApplication::translate("QJackTrip", "Set buffer to &zero when underrun occurs", nullptr));
        autoPatchComboBox->setItemText(0, QApplication::translate("QJackTrip", "Server to clients", nullptr));
        autoPatchComboBox->setItemText(1, QApplication::translate("QJackTrip", "Client loopback", nullptr));
        autoPatchComboBox->setItemText(2, QApplication::translate("QJackTrip", "Client fan out/in but no loopback", nullptr));
        autoPatchComboBox->setItemText(3, QApplication::translate("QJackTrip", "Full Mix", nullptr));
        autoPatchComboBox->setItemText(4, QApplication::translate("QJackTrip", "No auto patching", nullptr));

        autoPatchLabel->setText(QApplication::translate("QJackTrip", "Hub auto&patch mode", nullptr));
        channelLabel->setText(QApplication::translate("QJackTrip", "&Number of channels", nullptr));
        aboutButton->setText(QApplication::translate("QJackTrip", "About", nullptr));
        optionsTabWidget->setTabText(optionsTabWidget->indexOf(basicTab), QApplication::translate("QJackTrip", "Basic options", nullptr));
        resolutionLabel->setText(QApplication::translate("QJackTrip", "Audio &Bit Resolution", nullptr));
        clientNameEdit->setPlaceholderText(QApplication::translate("QJackTrip", "JackTrip", nullptr));
        connectAudioCheckBox->setText(QApplication::translate("QJackTrip", "&Connect default audio ports", nullptr));
        queueLengthLabel->setText(QApplication::translate("QJackTrip", "&Queue Buffer Length", nullptr));
        useDefaultsButton->setText(QApplication::translate("QJackTrip", "Use &Defaults", nullptr));
        resolutionComboBox->setItemText(0, QApplication::translate("QJackTrip", "8", nullptr));
        resolutionComboBox->setItemText(1, QApplication::translate("QJackTrip", "16", nullptr));
        resolutionComboBox->setItemText(2, QApplication::translate("QJackTrip", "24", nullptr));
        resolutionComboBox->setItemText(3, QApplication::translate("QJackTrip", "32", nullptr));

        clientNameLabel->setText(QApplication::translate("QJackTrip", "Custom Client &Name", nullptr));
        portOffsetLabel->setText(QApplication::translate("QJackTrip", "Port &Offset", nullptr));
        redundancyLabel->setText(QApplication::translate("QJackTrip", "&Redundancy", nullptr));
        remoteNameLabel->setText(QApplication::translate("QJackTrip", "Remote Client Name", nullptr));
        optionsTabWidget->setTabText(optionsTabWidget->indexOf(advancedTab), QApplication::translate("QJackTrip", "Advanced options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QJackTrip: public Ui_QJackTrip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QJACKTRIP_H
