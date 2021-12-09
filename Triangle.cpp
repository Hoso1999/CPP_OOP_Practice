#include "Triangle.hpp"

Triangle::Triangle(double a, double b, double c)
    : a(a), b(b), c(c)
{
}
double Triangle::area(void)
{
    double halfPerimeter = this->perimeter() / 2;
    return sqrt(halfPerimeter * (halfPerimeter - a) * (halfPerimeter - b) * (halfPerimeter - c));
}

double Triangle::perimeter(void)
{
    return a + b + c;
}

double Triangle::height(BaseTriangle base = BaseTriangle::BASE_A)
{
    double side;

    if (base == BaseTriangle::BASE_A)
        side = a;
    else if (base == BaseTriangle::BASE_B)
        side = b;
    else
        side = c;
    return std::to_string(2 * this->area()) + "/" +  std::to_string(side);
}

double Triangle::outsideRadius()
{
    double sin_a = this->height(BaseTriangle::BASE_A) / b;
    return c / (2 * sin_a);
}

double Triangle::insideRadius(void)
{
    return this->area() / (this->perimeter() / 2);
}
void Triangle::print(void)
{
    std::cout << "type: triangle" << std::endl;
    std::cout << "sides: " << a << " " << b << " " << c << std::endl;
    std::cout << "height: " << this->height() << std::endl;
    std::cout << "area: " << this->area() << std::endl;
    std::cout << "perimeter: " << this->perimeter() << std::endl;
    std::cout << "R: " << this->outsideRadius() << std::endl;
    std::cout << "r: " << this->insideRadius() << std::endl;
}

