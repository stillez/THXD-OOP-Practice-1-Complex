#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex {
private:
    double realPart, imaginaryPart;

    void setComplexNumber(double rp, double ip);

public:
    Complex(double rp = 0, double ip = 0);

    void addition(Complex s);

    void subtraction(Complex s);

    void printComplex();
};


#endif // COMPLEX_H_INCLUDED
