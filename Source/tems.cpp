#pragma once
#include "tems.h"

TEMS::TEMS(QWidget *parent)
	: QMainWindow(parent),
	ui(new Ui::TEMSClass)
{
	ui->setupUi(this);
	Aperture1Cam = new CameraOperate(0);
	Aperture2Cam = new CameraOperate(2);
	OpticalScreenCam = new CameraOperate(1);

	connect(Aperture1Cam->timer, SIGNAL(timeout()), this, SLOT(Cam1_readFrame()));
	connect(Aperture2Cam->timer, SIGNAL(timeout()), this, SLOT(Cam2_readFrame()));
	connect(OpticalScreenCam->timer, SIGNAL(timeout()), this, SLOT(Cam_readFrame()));
}

TEMS::~TEMS()
{
	OpticalScreenCam->isCloseCamera();
	Aperture1Cam->isCloseCamera();
	Aperture2Cam->isCloseCamera();
	frame1.release();
	frame2.release();
	frame.release();
	//delete &tempQimage;
}

void TEMS::on_pushButton_OpenCam1_clicked()
{
	if (!Aperture1Cam->is_Open){
		if (Aperture1Cam->isOpenCamera()){
			QString str = QStringLiteral("关闭摄像头");
			ui->pushButton_OpenCam1->setText(str);
			Aperture1Cam->timer->start(20);
		}
		else{
			ui->label_Aperture1Cam->setText("摄像头打开失败");
		}
	}
	else{
		Aperture1Cam->isCloseCamera();
		Aperture1Cam->timer->stop();
		QString str = QStringLiteral("打开摄像头");
		ui->pushButton_OpenCam1->setText(str);
		ui->label_Aperture1Cam->setStyleSheet("background-color: rgb(85, 255, 127);font: 12pt ""宋体"";");
		ui->label_Aperture1Cam->setText("光阑I处摄像机");

	}
}

void TEMS::on_pushButton_OpenCam2_clicked()
{
	if (!Aperture2Cam->is_Open){
		if (Aperture2Cam->isOpenCamera()){
			QString str = QStringLiteral("关闭摄像头");
			ui->pushButton_OpenCam2->setText(str);
			Aperture2Cam->timer->start(20);
		}
		else{
			ui->label_Aperture2Cam->setText("摄像头打开失败");
		}
	}
	else{
		Aperture2Cam->isCloseCamera();
		Aperture2Cam->timer->stop();
		QString str = QStringLiteral("打开摄像头");
		ui->pushButton_OpenCam2->setText(str);
		ui->label_Aperture2Cam->setStyleSheet("background-color: rgb(85, 170, 0);font: 12pt ""宋体"";");
		ui->label_Aperture2Cam->setText("光阑II处摄像机");
	}
}

void TEMS::on_pushButton_OpenScreenCam_clicked()
{
	if (!OpticalScreenCam->is_Open){
		if (OpticalScreenCam->isOpenCamera()){
			QString str = QStringLiteral("关闭摄像头");
			ui->pushButton_OpenScreenCam->setText(str);
			OpticalScreenCam->timer->start(33);
		}
		else{
			ui->label_OpticalScreenCam->setText("摄像头打开失败");
		}
	}
	else{
		OpticalScreenCam->isCloseCamera();
		OpticalScreenCam->timer->stop();
		QString str = QStringLiteral("打开摄像头");
		ui->pushButton_OpenScreenCam->setText(str);
		ui->label_OpticalScreenCam->setStyleSheet("background-color: rgb(85, 170, 255);font: 12pt ""宋体"";");
		ui->label_OpticalScreenCam->setText("光屏处摄像机");
	}
}

void TEMS::on_pushButton_Confirm_clicked()
{
	ui->label_ResultPic->setPixmap(QPixmap::fromImage(tempQimage));
}

void TEMS::Cam1_readFrame()
{
	Aperture1Cam->capture >> frame1;
	const uchar *pSrc = (const uchar *)frame1.data;
	int width = ui->label_Aperture1Cam->width();
	int height = ui->label_Aperture1Cam->height();
	QImage qimage(pSrc, width, height,frame1.step, QImage::Format_RGB888);
	ui->label_Aperture1Cam->setPixmap(QPixmap::fromImage(qimage));
}

void TEMS::Cam2_readFrame()
{
	Aperture2Cam->capture >> frame2;
	const uchar *pSrc = (const uchar *)frame2.data;
	int width = ui->label_Aperture2Cam->width();
	int height = ui->label_Aperture2Cam->height();
	QImage qimage(pSrc, width, height, frame2.step, QImage::Format_RGB888);
	ui->label_Aperture2Cam->setPixmap(QPixmap::fromImage(qimage));
}

void TEMS::Cam_readFrame()
{
	OpticalScreenCam->capture >> frame;
	const uchar *pSrc = (const uchar *)frame.data;
	int width = ui->label_OpticalScreenCam->width();
	int height = ui->label_OpticalScreenCam->height();
	tempQimage = QImage(pSrc, width, height, frame.step, QImage::Format_RGB888);
	ui->label_OpticalScreenCam->setPixmap(QPixmap::fromImage(tempQimage));
}
