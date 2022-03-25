#include <iostream>
#include "point.h"

Point get_point() {
	Point p(3.0, 2.0);
	return p;
}

void print(const Point &p) {
	std::cout << "( " << p.p_x << ", " << p.p_y << " )";
}

double Point::distance_to(const Point &target) const {
	double dx = p_x - target.p_x;
	double dy = p_y - target.p_y;

	return sqrt(dx * dx + dy * dy);
}