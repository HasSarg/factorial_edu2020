#include <iostream>

unsigned int factorial(unsigned int n)
{
  if (n == 0 or n == 1) {
    return 1;
  }
  return n * factorial(n-1);
}

int main()
{
  unsigned int number;
  std::cin >> number;
  std::cout << factorial(number) << std::endl;
  return 0;
}
