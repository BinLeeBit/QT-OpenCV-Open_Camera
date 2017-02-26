#pragma once
#include "CameraOperate.h"
#include "qstring.h"

CameraOperate::CameraOperate(int id)
{
	timer = new QTimer();
	is_Open = false;
	Id = id;
}

CameraOperate::~CameraOperate()
{
	capture.release();
}

bool CameraOperate::isOpenCamera()
{
	capture = cv::VideoCapture(Id);
	if (!capture.isOpened()){
		return false;
	}
	is_Open = !is_Open;
	return true;
}

bool CameraOperate::isCloseCamera(){

	if (!capture.isOpened()){
		return false;
	}
	capture.release();
	is_Open = !is_Open;
	return true;

}

bool CameraOperate::isSavePicture(std::string filePath)
{
	return false;
}
