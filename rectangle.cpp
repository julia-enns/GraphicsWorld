#include <iostream>
#include "rectangle.h"

using namespace std;

Rectangle::Rectangle(double x, double y, double a, double b, const char* name):Square(x, y, a, name),Shape(x,y,name){
	side_b = b;
}

double Rectangle::area()const{
	return side_a * side_b;
}

double Rectangle::perimeter() const{
	return (2 * side_a) + (2 * side_b);
}

void Rectangle::display(){
	cout<< "Rectangle Name: " << shapeName<<endl;
	origin.display();
	cout<< "Side a: " << side_a << endl;
	cout<< "Side b: "<< side_b << endl;
	cout<< "Area: " << area() <<endl;
	cout<< "Perimeter: " << perimeter()<<endl;
}

double Rectangle::get_side_b() const{
	return side_b;
}

void Rectangle::set_side_b(const double b){
	side_b = b;
}