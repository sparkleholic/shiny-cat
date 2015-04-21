/*
 * main.cpp
 *
 *  Created on: 2015. 4. 21.
 *      Author: junilkim
 */

#include <iostream>
#include "calc.h"
int main(int argc, char* argv[])
{
   Calc calc;
   // for test
   std::cout << "1 + 1 = " << calc.add(1, 1) << std::endl;
   std::cout << "1 - 1 = " << calc.subtract(1, 1) << std::endl;
   std::cout << "1 x 1 = " << calc.multiply(1, 1) << std::endl;
   std::cout << "1 / 1 = " << calc.divide(1, 1) << std::endl;
   // requirement : (1+2) * 3 / 3
   int r1 = calc.add(1, 2);
   int r2 = calc.multiply(r1, 3);
   int r3 = calc.divide(r2, 3);
   std::cout << "(2+1) * 3 / 3 = " << r3 << std::endl;
   return 0;
}


