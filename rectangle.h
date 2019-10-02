#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include "square.h"

using namespace std;

class Rectangle: public Square{
	public:
		Rectangle(double x, double y, double a, double b, const char* name);
		double area() const;
		double perimeter() const;
		void display();
		double get_side_b() const;
		void set_side_b(const double b);
		
	protected:
		double side_b;
};
#endif