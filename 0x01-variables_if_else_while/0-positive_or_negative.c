#include <stdlib.h>
#include <stdio.h>

/**
 * main - assigns a random number to int n everytime
 * it executes, and prints if it's positive, zero or negative 
 */

int main() {
  int n;
  n = rand() - RAND_MAX / 2;
  if (n > 0)
    printf("%d is positive\n", n);
  else if (n == 0)
    printf("%d is zero\n", n);
  else if (n < 0)
    printf("%d is negative\n", n);
  return (0);
}
