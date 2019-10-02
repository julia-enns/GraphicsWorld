#include <iostream>
#include <string.h>
#include "shape.h"

using namespace std;

Shape::Shape(double x, double y, const char* name) : origin(x,y){
		shapeName = new char[strlen(name) + 1];
		strcpy(shapeName, name);
}

Shape::~Shape(){
	delete [] shapeName;
}

Shape::Shape(const Shape& source):origin(source.origin), shapeName(new char[strlen(source.shapeName)+1]){
	if(shapeName == NULL){
		cerr << "Memory not available...";
		exit(1);
	}
	
	strcpy(shapeName, source.shapeName);
}

Shape& Shape::operator=(const Shape& rhs){
	if(this==&rhs)
		return *this;
	delete [] shapeName;
	shapeName = new char[strlen(rhs.shapeName)+1];
	
	if(shapeName == NULL){
		cerr << "Memory not available...";
		exit(1);
	}
	strcpy(shapeName, rhs.shapeName);
	origin = rhs.origin;
	return *this;
}

void Shape::display(){
	cout<<"Shape Name: "<< shapeName<<endl;
	origin.display();
}

double Shape::distance(const Shape& other){
	return origin.distance(other.origin);
}

double Shape::distance(const Shape& the_shape, const Shape& other){
	return Point::distance(the_shape.origin, other.origin);
}

Point& Shape::getOrigin(){
	return origin;
}

char* Shape::getName(){
	return shapeName;
}