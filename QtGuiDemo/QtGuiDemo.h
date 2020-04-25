#pragma once

#ifndef QT_H
#define QT_H


#include <QtWidgets/QMainWindow>
#include "ui_QtGuiDemo.h"

#include <QMainWindow>
#include <QLabel>
#include <QGridLayout>
#include <QLineEdit>
#include <QComboBox>
#include <QPushButton>
#include <QCheckBox>
#include <QFormLayout>
#include <QObject>
#include <QMetaEnum>
#include <QDebug>
#include <QIcon>

#include <string>
#include <qstring.h>
#include <opencv2/opencv.hpp>
#include "yolo_v2_class.hpp"

#define SCREEN_WIDTH 1920
#define SCREEN_HEIGHT 1080

class QtGuiDemo : public QMainWindow
{
	Q_OBJECT

public:
	QtGuiDemo(QWidget *parent = Q_NULLPTR);
	~QtGuiDemo();
	/**opencv mat 图像转为qImage, 显示在qLabel上**/
	void setCVMat2QtLabel(const cv::Mat &image, QLabel *qLabel);
	std::vector<std::string> objects_names_from_file(std::string const filename);
	cv::Scalar obj_id_to_color(int obj_id);
	void init_detector();
// QT 界面初始化和槽
public slots:
	/* 界面*/
	void initView();
	void initMenu();
	void cleanMenu();
	void initLayout();
	void cleanLayout();
	/* 菜单槽函数 */
	void openVideoSlot();				// 打开本地视频文件槽
	void openPictureSlot();				// 打开图片槽
	void openCaptureSlot();
	void paintEvent(QPaintEvent *e);	// 实时显示槽

private:
	Ui::QtGuiDemoClass ui;
	/* 菜单栏 */
	QMenu *openFileMenu;
	
	QAction *openCaptureAction;			// 打开摄像头
	QAction *openVideoAction;			// 打开本地视频文件
	QAction *openPictureAction;			// 打开图片
	QLabel *imageLabel;					// 显示图片Label控件

	QWidget *centralWidget;

	cv::VideoCapture capture;
	cv::Mat inputImage;
	cv::Mat outputImage;

	std::string  names_file_ = "D:/vs/vs_project/darknet-yolov4/darknet-master/build/darknet/x64/data/coco.names";
	std::string  cfg_file_ = "D:/vs/vs_project/darknet-yolov4/darknet-master/build/darknet/x64/cfg/yolov4.cfg";
	std::string  weights_file_ = "D:/vs/vs_project/darknet-yolov4/darknet-master/build/darknet/x64/yolov4.weights";

	std::vector<std::string> obj_names = objects_names_from_file(names_file_);
	Detector *detector_;

	// 视频开关
	bool isOpenVedio = false;
	// 选择模式 0. 打开图片文件 2.打开本地视频 3.打开本地摄像头
	int selectMode;
};

#endif // QT_H
