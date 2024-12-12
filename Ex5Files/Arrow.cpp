#include "Arrow.h"
#include "Canvas.h"
#include <iostream>

//arrow constructor
Arrow::Arrow(Point a, Point b, std::string type, std::string name) : Shape(name, type)
{
	if (a == b)
	{
		std::cout << "Bad input: require two different points to create a line" << std::endl;
		exit(1);
	}

	_source = a;
	_destination = b;

}

//arrow destructor
Arrow::~Arrow()
{} //no need for destructor here

//this function gets the source point
Point Arrow::getSource() const
{
	return _source;
}

//this function gets the destination point
Point Arrow::getDestination() const
{
	return _destination;
}

//this function will get the perimeter of arrow (distance)
double Arrow::getPerimeter() const
{
	return _source.distance(_destination);
}

//this function will get the area of arrow (always 0)
double Arrow::getArea() const
{
	return 0;
}

//this function will move the arrow
void Arrow::move(const Point& other)
{
	_source += other;
	_destination += other;
}

//this function draws the arrow
void Arrow::draw(const Canvas& canvas)
{
    canvas.draw_arrow(_source, _destination);
}

//this function clears the drawing of the arrow
void Arrow::clearDraw(const Canvas& canvas)
{
	canvas.clear_arrow(_source, _destination);
}


