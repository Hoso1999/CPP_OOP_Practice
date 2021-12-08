#ifndef SHAPE_HPP
#define SHAPE_HPP

#define M_PI 3.14159265358979323846
#include <iostream>
#include <cmath>

class Shape
{
    public:
        virtual void print(void) = 0;
        virtual double area(void) = 0;
        virtual ~Shape() {};
};

#endif