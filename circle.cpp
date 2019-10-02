#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include "circle.h"

using namespace std;

Circle::Circle(double x, double y, double r, const char* name):Shape(x, y, name){
	radius = r;
}

double Circle::area()const{
	return M_PI *pow(radius, 2);
}

double Circle::perimeter() const{
	return 2*M_PI*radius;
}

void Circle::display(){
	cout<< "Circle Name: " << shapeName<<endl;
	origin.display();
	cout<< "Radius: " << radius << endl;
	cout<< "Area: " << area() <<endl;
	cout<< "Perimeter: " << perimeter()<<endl;
}

double Circle::getRadius() const{
	return radius;
}

void Circle::setRadius(const double r){
	radius = r;
}