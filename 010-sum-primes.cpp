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
  long sum = 2;
  int num = 3;

  while (num < 2000000) {
    if (is_prime(num)) {
      sum += num;
    }
    num += 2;
  }

  std::cout << sum << std::endl;

  return 0;
}