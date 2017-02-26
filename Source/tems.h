#pragma execution_character_set("utf-8")
#ifndef TEMS_H
#define TEMS_H

#include <QtWidgets/QMainWindow>
#include "ui_tems.h"
#include "CameraOperate.h"
#include <opencv2\opencv.hpp>
#include <qtimer.h>
#include <qimage.h>
#include <qwidget.h>

class TEMS : public QMainWindow
{
	Q_OBJECT

public:
	TEMS(QWidget *parent = 0);
	~TEMS();

	private slots:
	//打开摄像机槽函数
	void on_pushButton_OpenCam1_clicked();
	void on_pushButton_OpenCam2_clicked();
	void on_pushButton_OpenScreenCam_clicked();

	//确定按键槽函数
	void on_pushButton_Confirm_clicked();

	//自定义读取摄像机帧的槽函数
	void Cam1_readFrame();
	void Cam2_readFrame();
	void Cam_readFrame();

private:
	Ui::TEMSClass *ui;				//主界面
	cv::Mat frame1;					//光阑1摄像机帧
	cv::Mat frame2;					//光阑2摄像机帧
	cv::Mat frame;					//光屏摄像机帧
	QImage tempQimage;				//光屏摄像机图像(临时转换变量)
	CameraOperate *OpticalScreenCam;//光屏摄像机
	CameraOperate *Aperture1Cam;	//光阑I摄像机
	CameraOperate *Aperture2Cam;	//光阑II摄像机	
};

#endif // TEMS_H
