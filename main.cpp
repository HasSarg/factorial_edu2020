#include <iostream>
#include "factorial.h"

int main()
{
  unsigned int number;
  std::cin >> number;
  std::cout << factorial(number) << std::endl;
  return 0;
}
