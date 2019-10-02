#include <iostream>
#include "square.h"

using namespace std;

Square::Square(double x, double y, double a, const char* name): Shape( x, y, name){
	side_a = a;
}

double Square::area()const{
	return side_a * side_a;
}

double Square::perimeter() const{
	return 4 * side_a;
}

void Square::display(){
	cout<< "Square Name: " << shapeName<<endl;
	origin.display();
	cout<< "Side a: " << side_a << endl;
	cout<< "Area: " << area() <<endl;
	cout<< "Perimeter: " << perimeter()<<endl;
}

double Square::get_side_a() const{
	return side_a;
}

void Square::set_side_a(const double a){
	side_a = a;
}