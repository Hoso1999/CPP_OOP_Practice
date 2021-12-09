#include "FractNumber.hpp"

FractNumber::FractNumber()
    : numerator(0), denumerator(1)
{}

FractNumber::FractNumber(double numerator, double denumerator)
{
    if (denumerator != 0)
    {
        this->numerator = numerator;
        this->denumerator = denumerator;
    }
    else
        throw FractZeroDividedExeption();
}

FractNumber::FractNumber(const FractNumber& otherFract)
    : numerator(otherFract.numerator), denumerator(otherFract.denumerator)
{
}

FractNumber::~FractNumber()
{}

void FractNumber::print()
{
    if (denumerator == 1)
        std::cout << numerator << std::endl;
    else
        std::cout << numerator << "/" << denumerator << std::endl;
}

FractNumber FractNumber::operator+(const FractNumber& otherFract)
{
    double n = numerator * otherFract.denumerator + otherFract.numerator * denumerator;
}