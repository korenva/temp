#include "Point.h"
#include <cmath>

#define SQUARED 2

// Default constructor initializes point to (0, 0)
Point::Point()
{
	_x = 0;
	_y = 0;
}

//point constructor
Point::Point(double x, double y)
{
	_x = x;
	_y = y;
}

//point destructor
Point::~Point()
{}//no need for destuctor here

// Adds the x and y coordinates of both points
Point Point::operator+(const Point& other) const
{
	double x = _x + other._x;
	double y = _y + other._y;

	return Point(x, y);
}

// Adds the x and y coordinates of the other point to the current point
Point& Point::operator+=(const Point& other)
{
	this->_x += other._x;
	this->_y += other._y;

	return *this;
}

//Compares if both points have the same coordinates (added myself)
bool Point::operator==(const Point& other) const
{
	return (_x == other._x && _y == other._y);
}

// Returns the x coordinate of the point
double Point::getX() const
{
	return _x;
}

// Returns the y coordinate of the point
double Point::getY() const
{
	return _y;
}

// Calculates the distance between this point and another point
double Point::distance(const Point& other) const
{
	double disX = pow((_x - other._x), SQUARED);
	double disY = pow((_y - other._y), SQUARED);

	double dis = sqrt(disX + disY);

	return dis;
}