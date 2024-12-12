#include "Circle.h"
#include "Canvas.h"
#include <iostream>

#define PI 3.14

//circle constructor
Circle::Circle(Point center, double radius, std::string type, std::string name) : Shape(name, type)
{
    if (radius < 0)
    {
        std::cout << "Bad input: radius cannot be negative!" << std::endl;
        exit(1);
    }

    _center = center;
    _radius = radius;
}

//circle destructor
Circle::~Circle()
{}//no need for destructor here

//this function will get the circle center
Point Circle::getCenter() const
{
    return _center;
}

//this function will get the circle radius
double Circle::getRadius() const
{
    return _radius;
}

//this function will get the circle parameter
double Circle::getPerimeter() const
{
    return (2 * PI * _radius);
}

//this function will get the circle area
double Circle::getArea() const
{
    return (_radius * _radius * PI);
}

//this function will move the circle
void Circle::move(const Point& other)
{
    _center += other;
}

//this function will draw the circle
 void Circle::draw(const Canvas& canvas)
 {
 	canvas.draw_circle(getCenter(), getRadius());
 }

 //this function will clear the drawing of the circle
 void Circle::clearDraw(const Canvas& canvas)
 {
 	canvas.clear_circle(getCenter(), getRadius());
 }


