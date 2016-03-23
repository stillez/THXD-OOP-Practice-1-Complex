#include <iostream>
#include "complex.h"

using namespace std;

int main() {
  Complex comp1(5, 3);
  Complex comp2(2, 2);
  Complex comp3(4, 7);
  comp1.printComplex();
  comp2.printComplex();

  comp1.addition(comp2);
  comp1.printComplex();
  comp1.subtraction(comp3);
  comp1.printComplex();
}