#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;


class Point{
	public:
		friend class Shape;
		static int objectCounter;
		
		void display();
		Point(double xCoord, double yCoord);
		int counter();
		double distance(const Point& p1);
		static double distance(const Point& p1, const Point& p2);
		double getx()const;
		double gety() const;
		int getId() const;
		void setx(const double xCoord);
		void sety(const double yCoord);
		void setId(const int i);
	
	private:
		double x;
		double y;
		int id;
};
#endif