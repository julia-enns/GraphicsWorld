#include <iostream>
#include <math.h>
#include <string>
#include "point.h"

using namespace std;

int Point::objectCounter = 0;

void Point::display(){
	cout<<"X-coordinate: "<< x << endl << "Y-coordinate: "<< y << endl;
	return;
}

Point::Point(double xCoord, double yCoord){
	objectCounter++;
	x = xCoord;
	y = yCoord;
	id = 1000 + objectCounter;
}

int Point::counter(){
	return objectCounter;
}

double Point::distance(const Point& p1){
	double xDist = p1.x - x;
	double yDist = p1.y - y;
	return sqrt(pow(xDist, 2) + pow(yDist, 2));
}

double Point::distance(const Point& p1, const Point& p2){
	double xDist = p1.x - p2.x;
	double yDist = p1.y - p2.y;
	return sqrt(pow(xDist, 2) + pow(yDist, 2));
}

double Point::getx()const{
	return x;
}

double Point::gety()const{
	return y;
}

int Point::getId() const{
	return id;
}

void Point::setx(const double xCoord){
	x = xCoord;
}

void Point::sety(const double yCoord){
	y = yCoord;
}
	
void Point::setId(const int i){
	id = i;
}
	
	
	