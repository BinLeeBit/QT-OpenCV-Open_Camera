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
	//��������ۺ���
	void on_pushButton_OpenCam1_clicked();
	void on_pushButton_OpenCam2_clicked();
	void on_pushButton_OpenScreenCam_clicked();

	//ȷ�������ۺ���
	void on_pushButton_Confirm_clicked();

	//�Զ����ȡ�����֡�Ĳۺ���
	void Cam1_readFrame();
	void Cam2_readFrame();
	void Cam_readFrame();

private:
	Ui::TEMSClass *ui;				//������
	cv::Mat frame1;					//����1�����֡
	cv::Mat frame2;					//����2�����֡
	cv::Mat frame;					//���������֡
	QImage tempQimage;				//���������ͼ��(��ʱת������)
	CameraOperate *OpticalScreenCam;//���������
	CameraOperate *Aperture1Cam;	//����I�����
	CameraOperate *Aperture2Cam;	//����II�����	
};

#endif // TEMS_H
