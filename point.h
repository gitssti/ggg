#pragma once

// точность вычислений
const double precision = 1E-10;

struct Point {

    double p_x, p_y;

    Point(double x, double y) : p_x{ x }, p_y{ y } {
    }

    Point() : p_x{ 0 }, p_y{ 0 }
    {
    }

    // вычисление расстояния до другой точки
    double distance_to(const Point &target) const;


};

void print(const Point &p);
