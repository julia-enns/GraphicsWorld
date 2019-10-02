#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include "point.h"

using namespace std;

class Shape{
	public:
		virtual ~Shape();
		Shape(double x, double y, const char* name);
		Shape(const Shape& source);
		Shape& operator=(const Shape& rhs);
		virtual void display();
		double distance(const Shape& other);
		static double distance(const Shape& the_shape, const Shape& other);
		void move (double dx, double dy);
		virtual double area() const = 0;
		virtual double perimeter() const = 0;
		
		
		Point& getOrigin();
		char* getName();
		
	protected:
		Point origin;
		char * shapeName;
	
};
#endif