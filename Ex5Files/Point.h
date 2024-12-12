#pragma once

class Point
{
public:

	// Constructors
	Point(); // initialize values to 0
	Point(double x, double y);

	// Destructor
	~Point() override;
	
	// Operators
	Point operator+(const Point& other) const;
	Point& operator+=(const Point& other);

	bool operator==(const Point& other) const;

	// Getters
	double getX() const;
	double getY() const;

	// Methods
	double distance(const Point& other) const;

private:

	double _x;
	double _y;
};