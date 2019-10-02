#ifndef SQUARE_H
#define SQUARE_H
#include <iostream>
#include "shape.h"

using namespace std;

class Square: virtual public Shape{
	public:
		Square(double x, double y, double a, const char* name);
		double area() const;
		double perimeter() const;
		void display();
		double get_side_a() const;
		void set_side_a(const double a);
		
	protected:
		double side_a;
};
#endif