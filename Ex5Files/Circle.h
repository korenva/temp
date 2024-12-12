#pragma once

#include "Shape.h"
#include "Point.h"
#include "Canvas.h"

#define PI 3.14

class Circle : public Shape
{
public:

	// Constructor
	Circle(Point center, double radius, std::string type, std::string name);

	// Destructor
	~Circle();

	// Getters
	Point getCenter() const;
	double getRadius() const;
	double getPerimeter() const override;
	double getArea() const override;

	void move(const Point& other) override;

	void draw(const Canvas& canvas) override;
	void clearDraw(const Canvas& canvas) override;

private:
	
	Point _center;
	double _radius;
};