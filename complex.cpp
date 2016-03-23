#include <iostream>
#include "complex.h"

Complex::Complex(double rp, double ip) {
  setComplexNumber(rp, ip);
}

void Complex::setComplexNumber(double rp, double ip) {
  realPart = rp;
  imaginaryPart = ip;
}

void Complex::addition(Complex s) {
  realPart = realPart + s.realPart;
  imaginaryPart = imaginaryPart + s.imaginaryPart;
}

void Complex::subtraction(Complex s) {
  realPart = realPart - s.realPart;
  imaginaryPart = imaginaryPart - s.imaginaryPart;
}

void Complex::printComplex() {
  if (imaginaryPart < 0) {
    std::cout<<"Complex number: "<<realPart<<" - "<<labs(imaginaryPart)<<"i\n";
  } else {
    std::cout<<"Complex number: "<<realPart<<" + "<<imaginaryPart<<"i\n";
  }
}