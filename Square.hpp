#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "Polygon.hpp"


class Square : public Polygon
{
private:
    double side;
public:
    Square(double);
    ~Square() {}
    void print(void);
    double area(void);
    double perimeter(void);
    double insideRadius(void);
    double outsideRadius(void);
    double diagonal(void);
};

#endif