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

std::string FractNumber::get()
{
    std::string res;
    if (denumerator == 1)
        res = std::to_string(numerator) + "\n";
    else
        res = std::to_string(numerator) + "/" + std::to_string(denumerator);
}

int FractNumber::gcd(int num, int denum)
{
    int reminder;
    while (denum != 0)
    {
        reminder = num % denum;
        num = denum;
        denum = reminder;
    }
    return num;
}

FractNumber FractNumber::operator+(const FractNumber& otherFract)
{
    double n = numerator * otherFract.denumerator + otherFract.numerator * denumerator;
    double d = denumerator * otherFract.denumerator;
    double num;
    double denum;
    if ((int)n == n)
        num = (int)n / this->gcd((int)n, (int)d);
    else
        num = n;
    if ((int)d == d)
        denum = (int)d / this->gcd((int)n, (int)d);
    else
        denum = d;
    return FractNumber(num, denum);
}

FractNumber FractNumber::operator-(const FractNumber& otherFract)
{
    double n = numerator * otherFract.denumerator - otherFract.numerator * denumerator;
    double d = denumerator * otherFract.denumerator;
    double num;
    double denum;
    if ((int)n == n)
        num = (int)n / this->gcd((int)n, (int)d);
    else
        num = n;
    if ((int)d == d)
        denum = (int)d / this->gcd((int)n, (int)d);
    else
        denum = d;
    return FractNumber(num, denum);
}

FractNumber FractNumber::operator*(const FractNumber& otherFract)
{
    double n = numerator * otherFract.numerator;
    double d = denumerator * otherFract.denumerator;
    double num;
    double denum;
    if ((int)n == n)
        num = (int)n / this->gcd((int)n, (int)d);
    else
        num = n;
    if ((int)d == d)
        denum = (int)d / this->gcd((int)n, (int)d);
    else
        denum = d;
    return FractNumber(num, denum);
}

FractNumber FractNumber::operator/(const FractNumber& otherFract)
{
    double n = numerator * otherFract.denumerator;
    double d = denumerator * otherFract.numerator;
    double num;
    double denum;
    if ((int)n == n)
        num = (int)n / this->gcd((int)n, (int)d);
    else
        num = n;
    if ((int)d == d)
        denum = (int)d / this->gcd((int)n, (int)d);
    else
        denum = d;
    return FractNumber(num, denum);
}