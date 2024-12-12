#include "Rectangle.h"
#include "Canvas.h"

//rectangle constructor
myShapes::Rectangle::Rectangle(Point a, double length, double width, std::string type, std::string name)
	: Polygon(name, type)
{
	_width = width;
	_length = length;
}

//rectangle destructor
myShapes::Rectangle::~Rectangle()
{}//no need for destructor here

//this function will get the area of the rectangle
double myShapes::Rectangle::getArea() const
{
	return _width * _length;
}

//this function will draw the rectangle
void myShapes::Rectangle::draw(const Canvas& canvas)
{
	canvas.draw_rectangle(_points[0], _points[1]);
}

//this function will clear the drawing of the rectangle
void myShapes::Rectangle::clearDraw(const Canvas& canvas)
{
	canvas.clear_rectangle(_points[0], _points[1]);
}


