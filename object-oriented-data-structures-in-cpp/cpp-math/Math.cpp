#include "Math.h"

double Rect::getRectArea() {
	return x_ * y_;
}

double Rect::getRectPerimeter() {
	return 2 * (x_ + y_);
}

void Rect::setX(double x) {
	x_ = x;
}

void Rect::setY(double y) {
	y_ = y;
}

double Triangle::getTriangleArea() {
	return (x_ * y_) / 2;

}

double Triangle::getTrianglePerimeter() {
	return	x_ + y_ + z_;
}

void Triangle::setX(double x) {
	x_ = x;
}

void Triangle::setY(double y) {
	y_ = y;
}

void Triangle::setZ(double z) {
	z_ = z;
}

double Square::getSquareArea() {
	return length_ * length_;
}

double Square::getSquarePerimeter() {
	return 4 * length_;
}

void Square::setLength(double length) {
	length_  = length;
}

































