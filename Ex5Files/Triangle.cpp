#include "Triangle.h"
#include "Canvas.h"
#include <iostream>

//triangle constructor
Triangle::Triangle(Point a, Point b, Point c, std::string type, std::string name) : Polygon(name, type)
{
	if ((a.getX() == b.getX() && b.getX() == c.getX()) || //same x on all 3
		(a.getY() == b.getY() && b.getY() == c.getY())) //same y on all 3
	{
		std::cout << "Bad input: the 3 points are on the same line." << std::endl;
		exit(1);
	}

	_points.push_back(a);
	_points.push_back(b);
	_points.push_back(c);
}

//triangle destructor
Triangle::~Triangle()
{} //no need for destructor here

//this function will get the area of a triangle 
double Triangle::getArea() const
{
	double x1 = _points[0].getX();
	double y1 = _points[0].getY();
	double x2 = _points[1].getX();
	double y2 = _points[1].getY();
	double x3 = _points[2].getX();
	double y3 = _points[2].getY();

	//5,5 9,8 4,7
	return 0.5 * std::abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)); //return the absolute value
}

//this function will draw the triangle 
void Triangle::draw(const Canvas& canvas)
{
	canvas.draw_triangle(_points[0], _points[1], _points[2]);
}

//this function will clear the drawing of the triangle 
void Triangle::clearDraw(const Canvas& canvas)
{
	canvas.clear_triangle(_points[0], _points[1], _points[2]);
}
