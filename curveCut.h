#ifndef CURVECUT_H
#define CURVECUT_H
#include <iostream>
#include "circle.h"
#include "rectangle.h"

using namespace std;

class CurveCut: public Circle, public Rectangle{
	public:
		CurveCut(double x, double y, double a, double b, double r, const char* name);
		double area() const;
		double perimeter() const;
		void display();
};
#endif