#include "Shape.h"
#include <iostream>

//Shape constructor
Shape::Shape(std::string name, std::string type)
{
	_name = name;
	_type = type;
}

//Shape destructor
Shape::~Shape()
{} //no need for destructor here

//This functions gets the type of the shape
std::string Shape::getType() const
{
	return _type;
}

//This functions gets the name of the shape
std::string Shape::getName() const
{
	return _name;
}

//this function will get a area of a shape
double Shape::getArea() const
{
	return 0; //not implemented here
}

//this function will get a perimeter of a shape
double Shape::getPerimeter() const
{
	return 0; //not implemented here
}

//this function will move a shape 
void Shape::move(const Point& other)
{
	//not implemented here
}

//this function will print the details of a shape
void Shape::printDetails()
{
	std::cout << _type << " " << _name << " " << getArea() << " " << getPerimeter() << std::endl;
}

//this function will draw a shape
void Shape::draw(const Canvas& canvas)
{
	//not implemented here
}

//this function will clear the drawing 
void Shape::clearDraw(const Canvas& canvas)
{
	//not implemented here
}