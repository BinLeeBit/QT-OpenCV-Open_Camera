#ifndef CAMERAOPERATE_H
#define CAMERAOPERATE_H
#include <opencv2\opencv.hpp>
#include <iostream>
#include <filesystem>
#include <qtimer.h>

class CameraOperate
{	
private:
	int Id;					//摄像机编号
public:
	QTimer *timer;			//摄像机打开计时
	bool is_Open;			//摄像机是否打开
	cv::VideoCapture capture;//摄像机

	CameraOperate(int id);
	~CameraOperate();

	/**
	*	@brief	打开摄像机
	*	@param	摄像机编号
	#	@return 打开是否成功
	*/
	bool isOpenCamera();

	/*
	关闭摄像机
	*/
	bool isCloseCamera();

	/**
	*	@brief	保存当前帧图片
	*	@param	保存路径
	*	@return 打开是否成功
	*/
	bool isSavePicture(std::string filePath);

};

#endif