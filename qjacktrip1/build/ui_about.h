/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *imageLayout;
    QLabel *aboutImage;
    QSpacerItem *imageVerticalSpacer;
    QVBoxLayout *textLayout;
    QLabel *titleLabel;
    QLabel *aboutLabel;
    QSpacerItem *textVerticalSpacer;
    QHBoxLayout *buttonLayout;
    QSpacerItem *buttonHorizontalSpacer;
    QPushButton *closeButton;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QStringLiteral("About"));
        About->resize(524, 293);
        horizontalLayout = new QHBoxLayout(About);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        imageLayout = new QVBoxLayout();
        imageLayout->setObjectName(QStringLiteral("imageLayout"));
        aboutImage = new QLabel(About);
        aboutImage->setObjectName(QStringLiteral("aboutImage"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(aboutImage->sizePolicy().hasHeightForWidth());
        aboutImage->setSizePolicy(sizePolicy);
        aboutImage->setAutoFillBackground(false);
        aboutImage->setStyleSheet(QLatin1String("background-color: rgb(255,255,255);\n"
"border: 4px solid black; "));
        aboutImage->setFrameShape(QFrame::Box);
        aboutImage->setLineWidth(3);
        aboutImage->setPixmap(QPixmap(QString::fromUtf8(":/qjacktrip/about.png")));
        aboutImage->setScaledContents(true);
        aboutImage->setMargin(0);

        imageLayout->addWidget(aboutImage);

        imageVerticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        imageLayout->addItem(imageVerticalSpacer);


        horizontalLayout->addLayout(imageLayout);

        textLayout = new QVBoxLayout();
        textLayout->setObjectName(QStringLiteral("textLayout"));
        titleLabel = new QLabel(About);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setStyleSheet(QStringLiteral("font: 24pt;"));
        titleLabel->setMargin(3);

        textLayout->addWidget(titleLabel);

        aboutLabel = new QLabel(About);
        aboutLabel->setObjectName(QStringLiteral("aboutLabel"));
        aboutLabel->setMinimumSize(QSize(366, 174));
        aboutLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        aboutLabel->setWordWrap(true);
        aboutLabel->setMargin(3);

        textLayout->addWidget(aboutLabel);

        textVerticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        textLayout->addItem(textVerticalSpacer);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName(QStringLiteral("buttonLayout"));
        buttonHorizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonLayout->addItem(buttonHorizontalSpacer);

        closeButton = new QPushButton(About);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        buttonLayout->addWidget(closeButton);


        textLayout->addLayout(buttonLayout);


        horizontalLayout->addLayout(textLayout);


        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QApplication::translate("About", "About", nullptr));
        aboutImage->setText(QString());
        titleLabel->setText(QApplication::translate("About", "QJackTrip", nullptr));
        aboutLabel->setText(QApplication::translate("About", "<html><head/><body><p>Bringing a graphical user interface to JackTrip, a system for high quality audio network performance over the internet.</p><p>Copyright \302\251 2020 Aaron Wyatt.<br/>Built on JackTrip version %VERSION%, Copyright \302\251 2008-2020 Juan-Pablo Caceres, Chris Chafe, et al.<br/>SoundWIRE group at CCRMA, Stanford University.</p><p>This is beta software and is provided &quot;as is&quot;, without warranty of any kind.</p></body></html>", nullptr));
        closeButton->setText(QApplication::translate("About", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
