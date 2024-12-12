#pragma once

#include "Point.h"
#include "Canvas.h"

#include <string>

class Shape 
{
public:

	// Constructor
	Shape(std::string name, std::string type);

	// Destructor
	virtual ~Shape();

	// Getters
	std::string getType() const;
	std::string getName() const;

	// Methods
	virtual double getArea() const = 0;
	virtual double getPerimeter() const = 0;
	virtual void move(const Point& other) = 0; // add the Point coordinates to all the points coordinates in the shape
	void printDetails();

	virtual void draw(const Canvas& canvas) = 0;
	virtual void clearDraw(const Canvas& canvas) = 0;

private:
	
	std::string _type;
	std::string _name;
};