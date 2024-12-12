#include "Polygon.h"

//polygon constructor
Polygon::Polygon(std::string type, std::string name) : Shape(name, type)
{
}

//polygon destructor
Polygon::~Polygon()
{} //no need for destructor here

//this function will get the points of the polygon
std::vector<Point> Polygon::getPoints() const
{
	return _points;
}

//this function will get the perimeter of the shape
double Polygon::getPerimeter() const
{
	double perimeter = 0;
	size_t i = 0;

	for (i = 0; i < _points.size(); i++)
	{
		const Point& curr = _points[i];
		const Point& next = _points[(i + 1) % _points.size()]; // Wrap around
		perimeter += curr.distance(next);
	}

	return perimeter;
}

//this function will move the polygon 
void Polygon::move(const Point& other)
{
	for (Point& point : _points)
	{
		point += other;
	}
}

