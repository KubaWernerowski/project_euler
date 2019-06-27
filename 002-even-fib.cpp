#include <cmath>
#include <iostream>

int NthFibNum(int n) {
  double const golden_ratio = (1 + std::sqrt(5)) / 2;
  double const psi = (1 - std::sqrt(5)) / 2;

  return floor(((std::pow(golden_ratio, n) - std::pow(psi, n)) / std::sqrt(5)));
}

int main() {
  int even_fib_sum = 0;
  int fib_n = 1;
  int curr_fib_num = NthFibNum(fib_n);

  while (curr_fib_num < 4000000) {
    if (curr_fib_num % 2 == 0) {
      even_fib_sum += curr_fib_num;
    }
    fib_n++;
    curr_fib_num = NthFibNum(fib_n);
  }

  std::cout << even_fib_sum << std::endl;

  return 0;
}
