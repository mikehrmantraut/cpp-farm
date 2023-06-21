#include <iostream>
#include "Math.h"

using namespace std;

int main() {
	Rect r;
	Triangle t;
	Square s;
	
	r.setX(5.43);
	r.setY(4.32);
	
	double rectArea = r.getRectArea();
	double rectPerimeter = r.getRectPerimeter();

	t.setX(4.32);
	t.setY(3.25);
	t.setZ(3.43);

	double triangleArea = t.getTriangleArea();
	double trianglePerimeter = t.getTrianglePerimeter();

	s.setLength(5.0);
	double squareArea = s.getSquareArea();
	double squarePerimeter = s.getSquarePerimeter();
	
	cout << "Area of Rectangle:" << rectArea << endl;
	cout << "Perimeter of Rectangle:" << rectPerimeter << endl;
	cout << "Area of Triangle:" << triangleArea << endl;
	cout << "Perimeter of Triangle:" << trianglePerimeter << endl;
	cout << "Area of Square:" << squareArea << endl;
	cout << "Perimeter of Square:" << squarePerimeter;
	return 0;
}

