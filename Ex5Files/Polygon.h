#pragma once

#include "Shape.h"
#include "Point.h"
#include <vector>

class Polygon : public Shape
{
public:

	// Constructor
	Polygon(std::string type, std::string name);

	// Destructor
	~Polygon() override;

	// Getters
	std::vector<Point> getPoints() const;
	double getPerimeter() const;

	void move(const Point& other) override;

protected:

	std::vector<Point> _points;
};