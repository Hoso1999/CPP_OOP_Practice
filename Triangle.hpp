#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "Polygon.hpp"


enum class BaseTriangle
{
    BASE_A,
    BASE_B,
    BASE_C
};

class Triangle : public Polygon
{
private:
    double a;
    double b;
    double c;
public:
    Triangle(double, double, double);
    ~Triangle() {}
    void print(void);
    double area(void);
    double perimeter(void);
    double insideRadius(void);
    double outsideRadius(void);
    double height(BaseTriangle);
};

#endif
