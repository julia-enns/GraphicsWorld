#include <iostream>
#include "curveCut.h"

using namespace std;

CurveCut::CurveCut(double x, double y, double a, double b, double r, const char* name):Rectangle(x, y, a, b, name), Circle(x, y, r, name),Shape(x, y, name){
	if(r > a || r > b){
		cout<< "Radius cannot be greater than the width and length."<<endl;
		exit(1);
	}
}

double CurveCut::area()const{
	return Rectangle::area() - (Circle::area() / 4);
}

double CurveCut::perimeter() const{
	return Rectangle::perimeter() - 2 * radius + (Circle::perimeter() / 4);
}

void CurveCut::display(){
	cout<< "CurveCut Name: " << shapeName<<endl;
	origin.display();
	cout<< "Width: " << side_a << endl;
	cout<< "Length: "<< side_b << endl;
	cout<< "Radius of the cut: " << radius <<endl;
	cout<< "Area : " << area() <<endl;
	cout<< "Perimeter: " << perimeter()<<endl;
}

