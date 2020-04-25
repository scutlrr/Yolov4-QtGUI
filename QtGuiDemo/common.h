#pragma once
#include <string>
#include <qstring.h>
#include <opencv2/opencv.hpp>
#include "yolo_v2_class.hpp"

#define SQ(str) str2qstr(str)
#define QS(qstr) std::string(qstr2str(QString(qstr)))

inline QString str2qstr(const std::string& str)
{
	return QString::fromLocal8Bit(str.data());
}

inline std::string qstr2str(const QString& qstr)
{
	QByteArray cdata = qstr.toLocal8Bit();
	return std::string(cdata);
}


void draw_boxes(cv::Mat mat_img, std::vector<bbox_t> result_vec, std::vector<std::string> obj_names, double spendTime, int current_det_fps = -1, int current_cap_fps = -1)
{
	int const colors[6][3] = { { 1,0,1 },{ 0,0,1 },{ 0,1,1 },{ 0,1,0 },{ 1,1,0 },{ 1,0,0 } };

	for (auto &i : result_vec) {
		cv::Scalar color(0, 255, 0);
		cv::rectangle(mat_img, cv::Rect(i.x, i.y, i.w, i.h), color, 2);
		std::string obj_name = obj_names[i.obj_id];
		cv::Size const text_size = getTextSize(obj_name, cv::FONT_HERSHEY_COMPLEX_SMALL, 1.2, 2, 0);
		int const max_width = (text_size.width > i.w + 2) ? text_size.width - 5 : (i.w + 2);
		cv::rectangle(mat_img, cv::Point2f(std::max((int)i.x - 1, 0), std::max((int)i.y - 30, 0)),
			cv::Point2f(std::min((int)i.x + max_width, mat_img.cols - 1), std::min((int)i.y, mat_img.rows - 1)),
			color, CV_FILLED, 8, 0);
		putText(mat_img, obj_name, cv::Point2f(i.x, i.y - 10), cv::FONT_HERSHEY_COMPLEX_SMALL, 1.2, cv::Scalar(0, 0, 0), 2);
	}
	std::string  spend = QS(QString::number(spendTime, 10, 4));
	putText(mat_img, "time:" + spend + "s", cv::Point2f(0, 30), cv::FONT_HERSHEY_COMPLEX_SMALL, 1.2, cv::Scalar(0, 0, 0), 2);
	if (current_det_fps >= 0 && current_cap_fps >= 0) {
		std::string fps_str = "FPS detection: " + std::to_string(current_det_fps) + "   FPS capture: " + std::to_string(current_cap_fps);
		putText(mat_img, fps_str, cv::Point2f(10, 20), cv::FONT_HERSHEY_COMPLEX_SMALL, 1.2, cv::Scalar(50, 255, 0), 2);
	}
}