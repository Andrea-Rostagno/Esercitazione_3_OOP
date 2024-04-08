#include "src/ComplexNumber.hpp"
#include <iostream>

using namespace std;

ComplexNumber conjugate(const ComplexNumber &cn){
    ComplexNumber conj;
    conj.real=cn.real;
    conj.imag=-cn.imag;
    return conj;

}

int main(){

    ComplexNumber cn;
    cout<<"The default number is:"<<cn<<endl;

    ComplexNumber cn1(1.00005,1);
    cout<<"The first complex number is:"<<cn1<<endl;

    ComplexNumber cn2(1,1);
    cout<<"The second complex number is:"<<cn2<<endl;

    ComplexNumber sum = cn1+cn2;
    cout << "sum of cn1 + cn2: " << sum << endl;

    ComplexNumber sum1 = 3.12+cn2;
    cout << "sum1 of double + cn2: " << sum1 << endl;

    string uguaglianza = operator==(cn1,cn2);
    cout << "The numbers are equal? "<<uguaglianza<<endl;

    cout<<"The conjugate is:"<<conjugate(cn2)<<endl;


}



