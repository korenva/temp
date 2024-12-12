#pragma once

#include "Polygon.h"
#include "Canvas.h"
#include <string>

class Triangle : public Polygon
{
public:

	// Constructor
	Triangle(Point a, Point b, Point c, std::string type, std::string name);

	// Destructor
	~Triangle() override;
	
	double getArea() const override;

	void draw(const Canvas& canvas) override;
	void clearDraw(const Canvas& canvas) override;
};