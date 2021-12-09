#ifndef FRACTNUMBER_HPP
#define FRACTNUMBER_HPP

#include <iostream>
#include <exception>
#include <string>


struct FractZeroDividedExeption : public std::exception
{
	const char * what () const throw ()
    {
    	return "denominator can never be zero in any fraction";
    }
};

class FractNumber
{
    double  numerator;
    double  denumerator;
    int gcd(int, int);
    public:
        FractNumber(double, double);
        FractNumber();
        FractNumber(const FractNumber&);
        ~FractNumber();
        void print();
        std::string get();
        FractNumber operator+(const FractNumber&);
        FractNumber operator-(const FractNumber&);
        FractNumber operator*(const FractNumber&);
        FractNumber operator/(const FractNumber&);
        FractNumber& operator=(const FractNumber&);
        FractNumber& operator+=(const FractNumber&);
        FractNumber& operator-=(const FractNumber&);
        FractNumber& operator*=(const FractNumber&);
        FractNumber& operator/=(const FractNumber&);
};





#endif