#include "factorial.h"

unsigned int factorial(unsigned int n)
{
  if (n == 0 or n == 1) {
    return 1;
  }
  return n * factorial(n-1);
}
