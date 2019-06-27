#include <cmath>
#include <iostream>

int is_prime(long n) {
  if (n < 2) return 0;
  if (n == 2) return 1;

  for (int i = 2; i < ceil(std::pow(n, 0.5)); i++) {
    if (n % i == 0) {
      return 0;
    }
  }

  return 1;
}

int main() {
  int largest_prime;
  long number = 600851475143;

  for (long i = ceil(std::pow(number, 0.5)); i > 1; i--) {
    if (number % i == 0 && is_prime(i)) {
      largest_prime = i;
      break;
    }
  }

  std::cout << largest_prime << std::endl;

  return 0;
}