#include <cmath>
#include <iostream>

int is_prime(int n) {
  if (n < 2 || (n != 2 && n % 2 == 0)) return 0;
  if (n == 2) return 1;

  for (int i = 2; i < ceil(std::pow(n, 0.5)) + 1; i += 1) {
    if (n % i == 0) {
      return 0;
    }
  }

  return 1;
}

int main() {
  int prime_count = 1;  // factor in 2 so we can halve total checks
  int num = 1;

  while (prime_count != 10001) {
    num += 2;
    if (is_prime(num)) {
      prime_count++;
    }
  }

  std::cout << num << std::endl;

  return 0;
}