/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "color.h"
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionSave;
    QWidget *centralwidget;
    QLabel *ZGeral;
    QLabel *YGeral;
    QSlider *horizontalSliderZCanvas;
    QSpinBox *spinBoxYCanvas;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelEllipsoid;
    QGridLayout *gridLayout_3;
    QSpinBox *spinBoxRx;
    QLabel *Rx;
    QSlider *horizontalSliderRx;
    QSpinBox *spinBoxRy;
    QLabel *Ry;
    QSlider *horizontalSliderRy;
    QSpinBox *spinBoxRz;
    QLabel *Rz;
    QSlider *horizontalSliderRz;
    QSpinBox *spinBoxXCanvas;
    Color *widget_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButtonPutVoxel;
    QRadioButton *radioButtonCutVoxel;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButtonPutBox;
    QRadioButton *radioButtonCutBox;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButtonPutSphere;
    QRadioButton *radioButtonCutSphere;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButtonPutEllipsoid;
    QRadioButton *radioButtonCutEllipsoid;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QSlider *horizontalSliderGreen;
    QLabel *Azul;
    QLabel *Verde;
    QSpinBox *spinBoxG;
    QSlider *horizontalSliderBlue;
    QSpinBox *spinBoxA;
    QLabel *Vermelho;
    QSpinBox *spinBoxR;
    QSlider *horizontalSliderRed;
    QLabel *Alfa;
    QSlider *horizontalSliderAlfa;
    QSpinBox *spinBoxB;
    QSlider *horizontalSliderXCanvas;
    QSlider *horizontalSliderYCanvas;
    Plotter *widget;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelSphere;
    QGridLayout *gridLayout_4;
    QSpinBox *spinBoxRaio;
    QSlider *horizontalSliderRaio;
    QLabel *Raio;
    QPushButton *pushButtonCriaCanvas;
    QLabel *XGeral;
    QSpinBox *spinBoxZCanvas;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QSlider *horizontalSliderDimZ;
    QSlider *horizontalSliderDimX;
    QSlider *horizontalSliderDimY;
    QSpinBox *spinBoxDimZ;
    QSpinBox *spinBoxDimY;
    QSpinBox *spinBoxDimX;
    QLabel *DimZ;
    QLabel *DimY;
    QLabel *DimX;
    QLabel *labelBox;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(945, 692);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName("actionQuit");
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        ZGeral = new QLabel(centralwidget);
        ZGeral->setObjectName("ZGeral");
        ZGeral->setGeometry(QRect(644, 102, 16, 16));
        YGeral = new QLabel(centralwidget);
        YGeral->setObjectName("YGeral");
        YGeral->setGeometry(QRect(644, 71, 16, 16));
        horizontalSliderZCanvas = new QSlider(centralwidget);
        horizontalSliderZCanvas->setObjectName("horizontalSliderZCanvas");
        horizontalSliderZCanvas->setGeometry(QRect(700, 106, 84, 16));
        horizontalSliderZCanvas->setOrientation(Qt::Horizontal);
        spinBoxYCanvas = new QSpinBox(centralwidget);
        spinBoxYCanvas->setObjectName("spinBoxYCanvas");
        spinBoxYCanvas->setGeometry(QRect(657, 71, 37, 23));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setEnabled(true);
        layoutWidget->setGeometry(QRect(480, 505, 171, 120));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelEllipsoid = new QLabel(layoutWidget);
        labelEllipsoid->setObjectName("labelEllipsoid");
        labelEllipsoid->setEnabled(true);

        verticalLayout_4->addWidget(labelEllipsoid);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        spinBoxRx = new QSpinBox(layoutWidget);
        spinBoxRx->setObjectName("spinBoxRx");
        spinBoxRx->setEnabled(true);

        gridLayout_3->addWidget(spinBoxRx, 0, 0, 1, 1);

        Rx = new QLabel(layoutWidget);
        Rx->setObjectName("Rx");
        Rx->setEnabled(true);

        gridLayout_3->addWidget(Rx, 0, 1, 1, 1);

        horizontalSliderRx = new QSlider(layoutWidget);
        horizontalSliderRx->setObjectName("horizontalSliderRx");
        horizontalSliderRx->setEnabled(true);
        horizontalSliderRx->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSliderRx, 0, 2, 1, 1);

        spinBoxRy = new QSpinBox(layoutWidget);
        spinBoxRy->setObjectName("spinBoxRy");
        spinBoxRy->setEnabled(true);

        gridLayout_3->addWidget(spinBoxRy, 1, 0, 1, 1);

        Ry = new QLabel(layoutWidget);
        Ry->setObjectName("Ry");
        Ry->setEnabled(true);

        gridLayout_3->addWidget(Ry, 1, 1, 1, 1);

        horizontalSliderRy = new QSlider(layoutWidget);
        horizontalSliderRy->setObjectName("horizontalSliderRy");
        horizontalSliderRy->setEnabled(true);
        horizontalSliderRy->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSliderRy, 1, 2, 1, 1);

        spinBoxRz = new QSpinBox(layoutWidget);
        spinBoxRz->setObjectName("spinBoxRz");
        spinBoxRz->setEnabled(true);

        gridLayout_3->addWidget(spinBoxRz, 2, 0, 1, 1);

        Rz = new QLabel(layoutWidget);
        Rz->setObjectName("Rz");
        Rz->setEnabled(true);

        gridLayout_3->addWidget(Rz, 2, 1, 1, 1);

        horizontalSliderRz = new QSlider(layoutWidget);
        horizontalSliderRz->setObjectName("horizontalSliderRz");
        horizontalSliderRz->setEnabled(true);
        horizontalSliderRz->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSliderRz, 2, 2, 1, 1);


        verticalLayout_4->addLayout(gridLayout_3);

        spinBoxXCanvas = new QSpinBox(centralwidget);
        spinBoxXCanvas->setObjectName("spinBoxXCanvas");
        spinBoxXCanvas->setGeometry(QRect(657, 40, 37, 23));
        widget_2 = new Color(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setEnabled(true);
        widget_2->setGeometry(QRect(240, 555, 61, 61));
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(560, 165, 247, 181));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName("label_2");

        verticalLayout_6->addWidget(label_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        radioButtonPutVoxel = new QRadioButton(verticalLayoutWidget_2);
        radioButtonPutVoxel->setObjectName("radioButtonPutVoxel");

        horizontalLayout->addWidget(radioButtonPutVoxel);

        radioButtonCutVoxel = new QRadioButton(verticalLayoutWidget_2);
        radioButtonCutVoxel->setObjectName("radioButtonCutVoxel");

        horizontalLayout->addWidget(radioButtonCutVoxel);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_6->addLayout(verticalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        radioButtonPutBox = new QRadioButton(verticalLayoutWidget_2);
        radioButtonPutBox->setObjectName("radioButtonPutBox");

        horizontalLayout_2->addWidget(radioButtonPutBox);

        radioButtonCutBox = new QRadioButton(verticalLayoutWidget_2);
        radioButtonCutBox->setObjectName("radioButtonCutBox");

        horizontalLayout_2->addWidget(radioButtonCutBox);


        verticalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        radioButtonPutSphere = new QRadioButton(verticalLayoutWidget_2);
        radioButtonPutSphere->setObjectName("radioButtonPutSphere");

        horizontalLayout_3->addWidget(radioButtonPutSphere);

        radioButtonCutSphere = new QRadioButton(verticalLayoutWidget_2);
        radioButtonCutSphere->setObjectName("radioButtonCutSphere");

        horizontalLayout_3->addWidget(radioButtonCutSphere);


        verticalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        radioButtonPutEllipsoid = new QRadioButton(verticalLayoutWidget_2);
        radioButtonPutEllipsoid->setObjectName("radioButtonPutEllipsoid");

        horizontalLayout_4->addWidget(radioButtonPutEllipsoid);

        radioButtonCutEllipsoid = new QRadioButton(verticalLayoutWidget_2);
        radioButtonCutEllipsoid->setObjectName("radioButtonCutEllipsoid");

        horizontalLayout_4->addWidget(radioButtonCutEllipsoid);


        verticalLayout_6->addLayout(horizontalLayout_4);

        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(70, 485, 170, 152));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalSliderGreen = new QSlider(layoutWidget_2);
        horizontalSliderGreen->setObjectName("horizontalSliderGreen");
        horizontalSliderGreen->setMinimum(1);
        horizontalSliderGreen->setMaximum(254);
        horizontalSliderGreen->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderGreen, 1, 2, 1, 1);

        Azul = new QLabel(layoutWidget_2);
        Azul->setObjectName("Azul");

        gridLayout->addWidget(Azul, 2, 1, 1, 1);

        Verde = new QLabel(layoutWidget_2);
        Verde->setObjectName("Verde");

        gridLayout->addWidget(Verde, 1, 1, 1, 1);

        spinBoxG = new QSpinBox(layoutWidget_2);
        spinBoxG->setObjectName("spinBoxG");
        spinBoxG->setMaximum(255);

        gridLayout->addWidget(spinBoxG, 1, 0, 1, 1);

        horizontalSliderBlue = new QSlider(layoutWidget_2);
        horizontalSliderBlue->setObjectName("horizontalSliderBlue");
        horizontalSliderBlue->setMinimum(1);
        horizontalSliderBlue->setMaximum(254);
        horizontalSliderBlue->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderBlue, 2, 2, 1, 1);

        spinBoxA = new QSpinBox(layoutWidget_2);
        spinBoxA->setObjectName("spinBoxA");
        spinBoxA->setMaximum(255);

        gridLayout->addWidget(spinBoxA, 3, 0, 1, 1);

        Vermelho = new QLabel(layoutWidget_2);
        Vermelho->setObjectName("Vermelho");

        gridLayout->addWidget(Vermelho, 0, 1, 1, 1);

        spinBoxR = new QSpinBox(layoutWidget_2);
        spinBoxR->setObjectName("spinBoxR");
        spinBoxR->setMaximum(255);

        gridLayout->addWidget(spinBoxR, 0, 0, 1, 1);

        horizontalSliderRed = new QSlider(layoutWidget_2);
        horizontalSliderRed->setObjectName("horizontalSliderRed");
        horizontalSliderRed->setMinimum(1);
        horizontalSliderRed->setMaximum(254);
        horizontalSliderRed->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderRed, 0, 2, 1, 1);

        Alfa = new QLabel(layoutWidget_2);
        Alfa->setObjectName("Alfa");

        gridLayout->addWidget(Alfa, 3, 1, 1, 1);

        horizontalSliderAlfa = new QSlider(layoutWidget_2);
        horizontalSliderAlfa->setObjectName("horizontalSliderAlfa");
        horizontalSliderAlfa->setMinimum(1);
        horizontalSliderAlfa->setMaximum(254);
        horizontalSliderAlfa->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderAlfa, 3, 2, 1, 1);

        spinBoxB = new QSpinBox(layoutWidget_2);
        spinBoxB->setObjectName("spinBoxB");
        spinBoxB->setMaximum(255);

        gridLayout->addWidget(spinBoxB, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalSliderXCanvas = new QSlider(centralwidget);
        horizontalSliderXCanvas->setObjectName("horizontalSliderXCanvas");
        horizontalSliderXCanvas->setGeometry(QRect(700, 44, 84, 16));
        horizontalSliderXCanvas->setOrientation(Qt::Horizontal);
        horizontalSliderYCanvas = new QSlider(centralwidget);
        horizontalSliderYCanvas->setObjectName("horizontalSliderYCanvas");
        horizontalSliderYCanvas->setGeometry(QRect(700, 75, 84, 16));
        horizontalSliderYCanvas->setOrientation(Qt::Horizontal);
        widget = new Plotter(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(90, 45, 441, 371));
        layoutWidget_3 = new QWidget(centralwidget);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setEnabled(true);
        layoutWidget_3->setGeometry(QRect(320, 455, 331, 56));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        labelSphere = new QLabel(layoutWidget_3);
        labelSphere->setObjectName("labelSphere");
        labelSphere->setEnabled(true);

        verticalLayout_5->addWidget(labelSphere);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        spinBoxRaio = new QSpinBox(layoutWidget_3);
        spinBoxRaio->setObjectName("spinBoxRaio");
        spinBoxRaio->setEnabled(true);

        gridLayout_4->addWidget(spinBoxRaio, 0, 0, 1, 1);

        horizontalSliderRaio = new QSlider(layoutWidget_3);
        horizontalSliderRaio->setObjectName("horizontalSliderRaio");
        horizontalSliderRaio->setEnabled(true);
        horizontalSliderRaio->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontalSliderRaio, 0, 2, 1, 1);

        Raio = new QLabel(layoutWidget_3);
        Raio->setObjectName("Raio");
        Raio->setEnabled(true);

        gridLayout_4->addWidget(Raio, 0, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout_4);

        pushButtonCriaCanvas = new QPushButton(centralwidget);
        pushButtonCriaCanvas->setObjectName("pushButtonCriaCanvas");
        pushButtonCriaCanvas->setGeometry(QRect(540, 65, 80, 22));
        XGeral = new QLabel(centralwidget);
        XGeral->setObjectName("XGeral");
        XGeral->setGeometry(QRect(644, 40, 16, 16));
        spinBoxZCanvas = new QSpinBox(centralwidget);
        spinBoxZCanvas->setObjectName("spinBoxZCanvas");
        spinBoxZCanvas->setGeometry(QRect(657, 102, 37, 23));
        layoutWidget_4 = new QWidget(centralwidget);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setEnabled(true);
        layoutWidget_4->setGeometry(QRect(320, 505, 151, 120));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalSliderDimZ = new QSlider(layoutWidget_4);
        horizontalSliderDimZ->setObjectName("horizontalSliderDimZ");
        horizontalSliderDimZ->setEnabled(true);
        horizontalSliderDimZ->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSliderDimZ, 4, 2, 1, 1);

        horizontalSliderDimX = new QSlider(layoutWidget_4);
        horizontalSliderDimX->setObjectName("horizontalSliderDimX");
        horizontalSliderDimX->setEnabled(true);
        horizontalSliderDimX->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSliderDimX, 2, 2, 1, 1);

        horizontalSliderDimY = new QSlider(layoutWidget_4);
        horizontalSliderDimY->setObjectName("horizontalSliderDimY");
        horizontalSliderDimY->setEnabled(true);
        horizontalSliderDimY->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSliderDimY, 3, 2, 1, 1);

        spinBoxDimZ = new QSpinBox(layoutWidget_4);
        spinBoxDimZ->setObjectName("spinBoxDimZ");
        spinBoxDimZ->setEnabled(true);

        gridLayout_2->addWidget(spinBoxDimZ, 4, 0, 1, 1);

        spinBoxDimY = new QSpinBox(layoutWidget_4);
        spinBoxDimY->setObjectName("spinBoxDimY");
        spinBoxDimY->setEnabled(true);

        gridLayout_2->addWidget(spinBoxDimY, 3, 0, 1, 1);

        spinBoxDimX = new QSpinBox(layoutWidget_4);
        spinBoxDimX->setObjectName("spinBoxDimX");
        spinBoxDimX->setEnabled(true);

        gridLayout_2->addWidget(spinBoxDimX, 2, 0, 1, 1);

        DimZ = new QLabel(layoutWidget_4);
        DimZ->setObjectName("DimZ");
        DimZ->setEnabled(true);

        gridLayout_2->addWidget(DimZ, 4, 1, 1, 1);

        DimY = new QLabel(layoutWidget_4);
        DimY->setObjectName("DimY");
        DimY->setEnabled(true);

        gridLayout_2->addWidget(DimY, 3, 1, 1, 1);

        DimX = new QLabel(layoutWidget_4);
        DimX->setObjectName("DimX");
        DimX->setEnabled(true);

        gridLayout_2->addWidget(DimX, 2, 1, 1, 1);

        labelBox = new QLabel(layoutWidget_4);
        labelBox->setObjectName("labelBox");
        labelBox->setEnabled(true);

        gridLayout_2->addWidget(labelBox, 1, 0, 1, 3);


        verticalLayout_2->addLayout(gridLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 945, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionQuit);
        menuFile->addAction(actionSave);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderRaio, &QSlider::sliderMoved, spinBoxRaio, &QSpinBox::setValue);
        QObject::connect(horizontalSliderRed, &QSlider::sliderMoved, spinBoxR, &QSpinBox::setValue);
        QObject::connect(horizontalSliderGreen, &QSlider::sliderMoved, spinBoxG, &QSpinBox::setValue);
        QObject::connect(horizontalSliderBlue, &QSlider::sliderMoved, spinBoxB, &QSpinBox::setValue);
        QObject::connect(horizontalSliderAlfa, &QSlider::sliderMoved, spinBoxA, &QSpinBox::setValue);
        QObject::connect(horizontalSliderDimX, &QSlider::sliderMoved, spinBoxDimX, &QSpinBox::setValue);
        QObject::connect(horizontalSliderDimY, &QSlider::sliderMoved, spinBoxDimY, &QSpinBox::setValue);
        QObject::connect(horizontalSliderDimZ, &QSlider::sliderMoved, spinBoxDimZ, &QSpinBox::setValue);
        QObject::connect(horizontalSliderRx, &QSlider::sliderMoved, spinBoxRx, &QSpinBox::setValue);
        QObject::connect(horizontalSliderRy, &QSlider::sliderMoved, spinBoxRy, &QSpinBox::setValue);
        QObject::connect(horizontalSliderRz, &QSlider::sliderMoved, spinBoxRz, &QSpinBox::setValue);
        QObject::connect(horizontalSliderXCanvas, &QSlider::sliderMoved, spinBoxXCanvas, &QSpinBox::setValue);
        QObject::connect(horizontalSliderYCanvas, &QSlider::sliderMoved, spinBoxYCanvas, &QSpinBox::setValue);
        QObject::connect(horizontalSliderZCanvas, &QSlider::sliderMoved, spinBoxZCanvas, &QSpinBox::setValue);
        QObject::connect(spinBoxR, SIGNAL(valueChanged(int)), widget_2, SLOT(set_r(int)));
        QObject::connect(spinBoxG, SIGNAL(valueChanged(int)), widget_2, SLOT(set_g(int)));
        QObject::connect(spinBoxB, SIGNAL(valueChanged(int)), widget_2, SLOT(set_b(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        ZGeral->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        YGeral->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        labelEllipsoid->setText(QCoreApplication::translate("MainWindow", "Add as Dim de Elipse", nullptr));
        Rx->setText(QCoreApplication::translate("MainWindow", "Rx", nullptr));
        Ry->setText(QCoreApplication::translate("MainWindow", "Ry", nullptr));
        Rz->setText(QCoreApplication::translate("MainWindow", "Rz", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Selecione Algum metodo", nullptr));
        radioButtonPutVoxel->setText(QCoreApplication::translate("MainWindow", "Add Voxel", nullptr));
        radioButtonCutVoxel->setText(QCoreApplication::translate("MainWindow", "Tirar Voxel", nullptr));
        radioButtonPutBox->setText(QCoreApplication::translate("MainWindow", "Add  Caixa", nullptr));
        radioButtonCutBox->setText(QCoreApplication::translate("MainWindow", "Tirar Caixa", nullptr));
        radioButtonPutSphere->setText(QCoreApplication::translate("MainWindow", "Add Esfera", nullptr));
        radioButtonCutSphere->setText(QCoreApplication::translate("MainWindow", "Tirar Esfera", nullptr));
        radioButtonPutEllipsoid->setText(QCoreApplication::translate("MainWindow", "Add Elipsoide", nullptr));
        radioButtonCutEllipsoid->setText(QCoreApplication::translate("MainWindow", "Tirar Elipsoide", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Selecione a cor em RGBA", nullptr));
        Azul->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        Verde->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        Vermelho->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        Alfa->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        labelSphere->setText(QCoreApplication::translate("MainWindow", "Selecione o Raio da Esfera", nullptr));
        Raio->setText(QCoreApplication::translate("MainWindow", "Raio", nullptr));
        pushButtonCriaCanvas->setText(QCoreApplication::translate("MainWindow", "Criar Espa\303\247o", nullptr));
        XGeral->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        DimZ->setText(QCoreApplication::translate("MainWindow", "DimZ", nullptr));
        DimY->setText(QCoreApplication::translate("MainWindow", "DimY", nullptr));
        DimX->setText(QCoreApplication::translate("MainWindow", "DimX", nullptr));
        labelBox->setText(QCoreApplication::translate("MainWindow", "Add as Dim de Caixa", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
