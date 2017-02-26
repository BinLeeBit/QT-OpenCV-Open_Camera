#ifndef CAMERAOPERATE_H
#define CAMERAOPERATE_H
#include <opencv2\opencv.hpp>
#include <iostream>
#include <filesystem>
#include <qtimer.h>

class CameraOperate
{	
private:
	int Id;					//��������
public:
	QTimer *timer;			//������򿪼�ʱ
	bool is_Open;			//������Ƿ��
	cv::VideoCapture capture;//�����

	CameraOperate(int id);
	~CameraOperate();

	/**
	*	@brief	�������
	*	@param	��������
	#	@return ���Ƿ�ɹ�
	*/
	bool isOpenCamera();

	/*
	�ر������
	*/
	bool isCloseCamera();

	/**
	*	@brief	���浱ǰ֡ͼƬ
	*	@param	����·��
	*	@return ���Ƿ�ɹ�
	*/
	bool isSavePicture(std::string filePath);

};

#endif