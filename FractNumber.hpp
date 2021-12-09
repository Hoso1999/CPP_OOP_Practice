#ifndef FRACTNUMBER_HPP
#define FRACTNUMBER_HPP

#include <iostream>
#include <exception>


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
    public:
        FractNumber(double, double);
        FractNumber();
        FractNumber(const FractNumber&);
        ~FractNumber();
        void print();
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