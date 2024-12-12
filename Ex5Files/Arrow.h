#pragma once

#include "Shape.h"
#include "Canvas.h"

class Arrow : public Shape
{
public:

	// Constructor
	Arrow(Point a, Point b, std::string type, std::string name);

	// Destructor
	~Arrow() override;

	// Getters

	Point getSource() const;
	Point getDestination() const;

	double getPerimeter() const override;
	double getArea() const override;

	void move(const Point& other) override;

	void draw(const Canvas& canvas) override;
	void clearDraw(const Canvas& canvas) override;


private:
	
	Point _source;
	Point _destination;
};