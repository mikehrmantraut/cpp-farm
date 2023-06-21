#pragma once

class Rect {
	public:
		double getRectArea();
		double getRectPerimeter();
		void setX(double x);
		void setY(double y);
	private:
		double x_;
		double y_;
};

class Triangle {
	public:
		double getTriangleArea();
		double getTrianglePerimeter();
		void setX(double x);
		void setY(double y);
		void setZ(double z);
	private:
		double x_;
		double y_;
		double z_;
};

class Square {
	public:
		double getSquareArea();
		double getSquarePerimeter();
		void setLength(double length);
	private:
		double length_;
};
