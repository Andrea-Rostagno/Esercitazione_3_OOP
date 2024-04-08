#ifndef __Complex_H
#define __Complex_H

#include <iostream>

using namespace std;

struct ComplexNumber
{
    double real;
    double imag;
    ComplexNumber()=default;

    ComplexNumber(double a, double b):
        real(a),
        imag(b)
    {
    }


};

ostream& operator<<(ostream& os, const ComplexNumber &cn);

ComplexNumber operator+(const ComplexNumber &cn1, const ComplexNumber &cn2);

ComplexNumber operator+(const double &cn1, const ComplexNumber &cn2);

string operator==(const ComplexNumber &cn1, const ComplexNumber &cn2);


#endif
