/********************************************************************************
** Form generated from reading UI file 'tems.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMS_H
#define UI_TEMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TEMSClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_Motor;
    QLabel *label_MotorControl;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButton_1Left;
    QPushButton *pushButton_1Right;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton_2Right_2;
    QPushButton *pushButton_2Right;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton_3Left;
    QPushButton *pushButton_3Right;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_4Left;
    QPushButton *pushButton_4Right;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_5Left;
    QPushButton *pushButton_5Right;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_6Left;
    QPushButton *pushButton_6Right;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_7Left;
    QPushButton *pushButton_7Right;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_8Left;
    QPushButton *pushButton_8Right;
    QVBoxLayout *verticalLayout_Calculate;
    QLabel *label_OpticalScreenCam;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_OpenScreenCam;
    QPushButton *pushButton_Confirm;
    QComboBox *comboBox_Option;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_Distance;
    QLabel *label_Result;
    QLabel *label_ResultPic;
    QVBoxLayout *verticalLayout_Aperture;
    QLabel *label_Aperture1Cam;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_OpenCam1;
    QPushButton *pushButton_SaveCam1;
    QLabel *label_Aperture2Cam;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_OpenCam2;
    QPushButton *pushButton_SaveCam2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TEMSClass)
    {
        if (TEMSClass->objectName().isEmpty())
            TEMSClass->setObjectName(QStringLiteral("TEMSClass"));
        TEMSClass->resize(648, 452);
        TEMSClass->setAutoFillBackground(false);
        TEMSClass->setStyleSheet(QStringLiteral("background-color: rgb(225, 228, 255);"));
        centralWidget = new QWidget(TEMSClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_Motor = new QVBoxLayout();
        verticalLayout_Motor->setSpacing(6);
        verticalLayout_Motor->setObjectName(QStringLiteral("verticalLayout_Motor"));
        verticalLayout_Motor->setSizeConstraint(QLayout::SetNoConstraint);
        label_MotorControl = new QLabel(centralWidget);
        label_MotorControl->setObjectName(QStringLiteral("label_MotorControl"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_MotorControl->sizePolicy().hasHeightForWidth());
        label_MotorControl->setSizePolicy(sizePolicy);
        label_MotorControl->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\345\256\213\344\275\223\";\n"
"color: rgb(255, 0, 0);\n"
"background-color: rgb(255, 255, 127);"));
        label_MotorControl->setAlignment(Qt::AlignCenter);

        verticalLayout_Motor->addWidget(label_MotorControl);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        pushButton_1Left = new QPushButton(centralWidget);
        pushButton_1Left->setObjectName(QStringLiteral("pushButton_1Left"));
        pushButton_1Left->setAutoFillBackground(false);

        horizontalLayout_12->addWidget(pushButton_1Left);

        pushButton_1Right = new QPushButton(centralWidget);
        pushButton_1Right->setObjectName(QStringLiteral("pushButton_1Right"));

        horizontalLayout_12->addWidget(pushButton_1Right);


        verticalLayout_Motor->addLayout(horizontalLayout_12);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        pushButton_2Right_2 = new QPushButton(centralWidget);
        pushButton_2Right_2->setObjectName(QStringLiteral("pushButton_2Right_2"));

        horizontalLayout_11->addWidget(pushButton_2Right_2);

        pushButton_2Right = new QPushButton(centralWidget);
        pushButton_2Right->setObjectName(QStringLiteral("pushButton_2Right"));

        horizontalLayout_11->addWidget(pushButton_2Right);


        verticalLayout_Motor->addLayout(horizontalLayout_11);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        pushButton_3Left = new QPushButton(centralWidget);
        pushButton_3Left->setObjectName(QStringLiteral("pushButton_3Left"));

        horizontalLayout_10->addWidget(pushButton_3Left);

        pushButton_3Right = new QPushButton(centralWidget);
        pushButton_3Right->setObjectName(QStringLiteral("pushButton_3Right"));

        horizontalLayout_10->addWidget(pushButton_3Right);


        verticalLayout_Motor->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        pushButton_4Left = new QPushButton(centralWidget);
        pushButton_4Left->setObjectName(QStringLiteral("pushButton_4Left"));

        horizontalLayout_9->addWidget(pushButton_4Left);

        pushButton_4Right = new QPushButton(centralWidget);
        pushButton_4Right->setObjectName(QStringLiteral("pushButton_4Right"));

        horizontalLayout_9->addWidget(pushButton_4Right);


        verticalLayout_Motor->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        pushButton_5Left = new QPushButton(centralWidget);
        pushButton_5Left->setObjectName(QStringLiteral("pushButton_5Left"));

        horizontalLayout_8->addWidget(pushButton_5Left);

        pushButton_5Right = new QPushButton(centralWidget);
        pushButton_5Right->setObjectName(QStringLiteral("pushButton_5Right"));

        horizontalLayout_8->addWidget(pushButton_5Right);


        verticalLayout_Motor->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        pushButton_6Left = new QPushButton(centralWidget);
        pushButton_6Left->setObjectName(QStringLiteral("pushButton_6Left"));

        horizontalLayout_7->addWidget(pushButton_6Left);

        pushButton_6Right = new QPushButton(centralWidget);
        pushButton_6Right->setObjectName(QStringLiteral("pushButton_6Right"));

        horizontalLayout_7->addWidget(pushButton_6Right);


        verticalLayout_Motor->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        pushButton_7Left = new QPushButton(centralWidget);
        pushButton_7Left->setObjectName(QStringLiteral("pushButton_7Left"));

        horizontalLayout_6->addWidget(pushButton_7Left);

        pushButton_7Right = new QPushButton(centralWidget);
        pushButton_7Right->setObjectName(QStringLiteral("pushButton_7Right"));

        horizontalLayout_6->addWidget(pushButton_7Right);


        verticalLayout_Motor->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_8Left = new QPushButton(centralWidget);
        pushButton_8Left->setObjectName(QStringLiteral("pushButton_8Left"));

        horizontalLayout_5->addWidget(pushButton_8Left);

        pushButton_8Right = new QPushButton(centralWidget);
        pushButton_8Right->setObjectName(QStringLiteral("pushButton_8Right"));

        horizontalLayout_5->addWidget(pushButton_8Right);


        verticalLayout_Motor->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout_Motor, 0, 0, 1, 1);

        verticalLayout_Calculate = new QVBoxLayout();
        verticalLayout_Calculate->setSpacing(6);
        verticalLayout_Calculate->setObjectName(QStringLiteral("verticalLayout_Calculate"));
        label_OpticalScreenCam = new QLabel(centralWidget);
        label_OpticalScreenCam->setObjectName(QStringLiteral("label_OpticalScreenCam"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_OpticalScreenCam->sizePolicy().hasHeightForWidth());
        label_OpticalScreenCam->setSizePolicy(sizePolicy1);
        label_OpticalScreenCam->setAutoFillBackground(false);
        label_OpticalScreenCam->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"font: 12pt \"\345\256\213\344\275\223\";"));
        label_OpticalScreenCam->setAlignment(Qt::AlignCenter);

        verticalLayout_Calculate->addWidget(label_OpticalScreenCam);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_OpenScreenCam = new QPushButton(centralWidget);
        pushButton_OpenScreenCam->setObjectName(QStringLiteral("pushButton_OpenScreenCam"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_OpenScreenCam->sizePolicy().hasHeightForWidth());
        pushButton_OpenScreenCam->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(pushButton_OpenScreenCam);

        pushButton_Confirm = new QPushButton(centralWidget);
        pushButton_Confirm->setObjectName(QStringLiteral("pushButton_Confirm"));
        sizePolicy2.setHeightForWidth(pushButton_Confirm->sizePolicy().hasHeightForWidth());
        pushButton_Confirm->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(pushButton_Confirm);

        comboBox_Option = new QComboBox(centralWidget);
        comboBox_Option->setObjectName(QStringLiteral("comboBox_Option"));
        comboBox_Option->setEditable(true);

        horizontalLayout_3->addWidget(comboBox_Option);


        verticalLayout_Calculate->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_Distance = new QLabel(centralWidget);
        label_Distance->setObjectName(QStringLiteral("label_Distance"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_Distance->sizePolicy().hasHeightForWidth());
        label_Distance->setSizePolicy(sizePolicy3);

        horizontalLayout_4->addWidget(label_Distance);

        label_Result = new QLabel(centralWidget);
        label_Result->setObjectName(QStringLiteral("label_Result"));
        label_Result->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(label_Result);


        verticalLayout_Calculate->addLayout(horizontalLayout_4);

        label_ResultPic = new QLabel(centralWidget);
        label_ResultPic->setObjectName(QStringLiteral("label_ResultPic"));
        sizePolicy1.setHeightForWidth(label_ResultPic->sizePolicy().hasHeightForWidth());
        label_ResultPic->setSizePolicy(sizePolicy1);
        label_ResultPic->setAutoFillBackground(false);
        label_ResultPic->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 127);\n"
"font: 12pt \"\345\256\213\344\275\223\";"));
        label_ResultPic->setAlignment(Qt::AlignCenter);

        verticalLayout_Calculate->addWidget(label_ResultPic);


        gridLayout->addLayout(verticalLayout_Calculate, 0, 1, 1, 1);

        verticalLayout_Aperture = new QVBoxLayout();
        verticalLayout_Aperture->setSpacing(6);
        verticalLayout_Aperture->setObjectName(QStringLiteral("verticalLayout_Aperture"));
        label_Aperture1Cam = new QLabel(centralWidget);
        label_Aperture1Cam->setObjectName(QStringLiteral("label_Aperture1Cam"));
        sizePolicy1.setHeightForWidth(label_Aperture1Cam->sizePolicy().hasHeightForWidth());
        label_Aperture1Cam->setSizePolicy(sizePolicy1);
        label_Aperture1Cam->setAutoFillBackground(false);
        label_Aperture1Cam->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 127);\n"
"font: 12pt \"\345\256\213\344\275\223\";"));
        label_Aperture1Cam->setAlignment(Qt::AlignCenter);

        verticalLayout_Aperture->addWidget(label_Aperture1Cam);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_OpenCam1 = new QPushButton(centralWidget);
        pushButton_OpenCam1->setObjectName(QStringLiteral("pushButton_OpenCam1"));
        sizePolicy2.setHeightForWidth(pushButton_OpenCam1->sizePolicy().hasHeightForWidth());
        pushButton_OpenCam1->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(pushButton_OpenCam1);

        pushButton_SaveCam1 = new QPushButton(centralWidget);
        pushButton_SaveCam1->setObjectName(QStringLiteral("pushButton_SaveCam1"));
        sizePolicy2.setHeightForWidth(pushButton_SaveCam1->sizePolicy().hasHeightForWidth());
        pushButton_SaveCam1->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(pushButton_SaveCam1);


        verticalLayout_Aperture->addLayout(horizontalLayout_2);

        label_Aperture2Cam = new QLabel(centralWidget);
        label_Aperture2Cam->setObjectName(QStringLiteral("label_Aperture2Cam"));
        sizePolicy1.setHeightForWidth(label_Aperture2Cam->sizePolicy().hasHeightForWidth());
        label_Aperture2Cam->setSizePolicy(sizePolicy1);
        label_Aperture2Cam->setStyleSheet(QString::fromUtf8("font: 12pt \"04b_21\";\n"
"font: 12pt \"\345\256\213\344\275\223\";\n"
"background-color: rgb(85, 170, 0);"));
        label_Aperture2Cam->setAlignment(Qt::AlignCenter);

        verticalLayout_Aperture->addWidget(label_Aperture2Cam);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_OpenCam2 = new QPushButton(centralWidget);
        pushButton_OpenCam2->setObjectName(QStringLiteral("pushButton_OpenCam2"));
        sizePolicy2.setHeightForWidth(pushButton_OpenCam2->sizePolicy().hasHeightForWidth());
        pushButton_OpenCam2->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(pushButton_OpenCam2);

        pushButton_SaveCam2 = new QPushButton(centralWidget);
        pushButton_SaveCam2->setObjectName(QStringLiteral("pushButton_SaveCam2"));
        sizePolicy2.setHeightForWidth(pushButton_SaveCam2->sizePolicy().hasHeightForWidth());
        pushButton_SaveCam2->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(pushButton_SaveCam2);


        verticalLayout_Aperture->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_Aperture, 0, 2, 1, 1);

        TEMSClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TEMSClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 648, 23));
        TEMSClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TEMSClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TEMSClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TEMSClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TEMSClass->setStatusBar(statusBar);

        retranslateUi(TEMSClass);

        QMetaObject::connectSlotsByName(TEMSClass);
    } // setupUi

    void retranslateUi(QMainWindow *TEMSClass)
    {
        TEMSClass->setWindowTitle(QApplication::translate("TEMSClass", "TEMS", 0));
        label_MotorControl->setText(QApplication::translate("TEMSClass", "\347\224\265\346\234\272\346\216\247\345\210\266", 0));
        pushButton_1Left->setText(QApplication::translate("TEMSClass", "PushButton", 0));
        pushButton_1Right->setText(QApplication::translate("TEMSClass", "PushButton", 0));
        pushButton_2Right_2->setText(QApplication::translate("TEMSClass", "PushButton", 0));
        pushButton_2Right->setText(QApplication::translate("TEMSClass", "PushButton", 0));
        pushButton_3Left->setText(QApplication::translate("TEMSClass", "PushButton", 0));
        pushButton_3Right->setText(QApplication::translate("TEMSClass", "PushButton", 0));
        pushButton_4Left->setText(QApplication::translate("TEMSClass", "PushButton", 0));
        pushButton_4Right->setText(QApplication::translate("TEMSClass", "PushButton", 0));
        pushButton_5Left->setText(QApplication::translate("TEMSClass", "PushButton", 0));
        pushButton_5Right->setText(QApplication::translate("TEMSClass", "PushButton", 0));
        pushButton_6Left->setText(QApplication::translate("TEMSClass", "PushButton", 0));
        pushButton_6Right->setText(QApplication::translate("TEMSClass", "PushButton", 0));
        pushButton_7Left->setText(QApplication::translate("TEMSClass", "PushButton", 0));
        pushButton_7Right->setText(QApplication::translate("TEMSClass", "PushButton", 0));
        pushButton_8Left->setText(QApplication::translate("TEMSClass", "PushButton", 0));
        pushButton_8Right->setText(QApplication::translate("TEMSClass", "PushButton", 0));
        label_OpticalScreenCam->setText(QApplication::translate("TEMSClass", "\345\205\211\345\261\217\345\244\204\346\221\204\345\203\217\346\234\272", 0));
        pushButton_OpenScreenCam->setText(QApplication::translate("TEMSClass", "\346\211\223\345\274\200\346\221\204\345\203\217\346\234\272", 0));
        pushButton_Confirm->setText(QApplication::translate("TEMSClass", "\347\241\256\345\256\232", 0));
        comboBox_Option->clear();
        comboBox_Option->insertItems(0, QStringList()
         << QApplication::translate("TEMSClass", "1", 0)
         << QApplication::translate("TEMSClass", "2", 0)
         << QApplication::translate("TEMSClass", "3", 0)
         << QApplication::translate("TEMSClass", "4", 0)
        );
        label_Distance->setText(QApplication::translate("TEMSClass", "\350\267\235\347\246\273\357\274\232", 0));
        label_Result->setText(QString());
        label_ResultPic->setText(QApplication::translate("TEMSClass", "\345\244\204\347\220\206\345\233\276\347\211\207", 0));
        label_Aperture1Cam->setText(QApplication::translate("TEMSClass", "\345\205\211\351\230\221I\345\244\204\346\221\204\345\203\217\346\234\272", 0));
        pushButton_OpenCam1->setText(QApplication::translate("TEMSClass", "\346\211\223\345\274\200\346\221\204\345\203\217\346\234\272", 0));
        pushButton_SaveCam1->setText(QApplication::translate("TEMSClass", "\344\277\235\345\255\230", 0));
        label_Aperture2Cam->setText(QApplication::translate("TEMSClass", "\345\205\211\351\230\221II\345\244\204\346\221\204\345\203\217\346\234\272", 0));
        pushButton_OpenCam2->setText(QApplication::translate("TEMSClass", "\346\211\223\345\274\200\346\221\204\345\203\217\346\234\272", 0));
        pushButton_SaveCam2->setText(QApplication::translate("TEMSClass", "\344\277\235\345\255\230", 0));
    } // retranslateUi

};

namespace Ui {
    class TEMSClass: public Ui_TEMSClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMS_H
