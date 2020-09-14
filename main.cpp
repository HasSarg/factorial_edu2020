#include <iostream>
#include "factorial.h"

int main()
{
  unsigned int number;
  std::cout << "Please enter the non negative integer for factorial calculating: ";
  std::cin >> number;
  std::cout << "Factorial for the given " << number << " integer is "
            << factorial(number) << std::endl;
  return 0;
}
