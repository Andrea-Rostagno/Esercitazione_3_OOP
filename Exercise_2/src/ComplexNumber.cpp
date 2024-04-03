#include "ComplexNumber.hpp"

using namespace std;

ostream& operator<<(ostream& os, const ComplexNumber &cn)
{
    if(0<=cn.imag)
        (os << cn.real)<<"+"<<cn.imag<<"i"<<endl;
    else
        (os << cn.real)<<cn.imag<<"i"<<endl;
    return os;
}

ComplexNumber operator+(const ComplexNumber &cn1, const ComplexNumber &cn2)
{
    ComplexNumber cn(cn1.real+cn2.real,cn1.imag+cn2.imag);
    return cn;
}

ComplexNumber operator+(const double &cn1, const ComplexNumber &cn2)
{
    ComplexNumber cn(cn2.real+double(cn1),cn2.imag);
    return cn;
}

string operator==(const ComplexNumber &cn1, const ComplexNumber &cn2)
{
    double tol=0.001;
    string risposta;
    if(abs(cn1.real-cn2.real)<=tol && abs(cn1.imag-cn2.imag)<=tol)
        risposta="yes";
    else
        risposta="no";

    return risposta;
}















