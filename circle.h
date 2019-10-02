#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include "shape.h"

using namespace std;

class Circle: virtual public Shape{
	public:
		Circle(double x, double y, double r, const char* name);
		double area() const;
		double perimeter() const;
		void display();
		double getRadius() const;
		void setRadius(const double r);
		
	protected:
		double radius;
};
#endif