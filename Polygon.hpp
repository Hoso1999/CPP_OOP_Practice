#ifndef POLYGON_HPP
#define POLYGON_HPP

#include "Shape.hpp"

class Polygon : public Shape
{
    public:
        virtual double perimeter(void) = 0;
        virtual double insideRadius(void) = 0;
        virtual double outsideRadius(void) = 0;
        virtual ~Polygon() {};
};

#endif //!POLYGON_HPP
