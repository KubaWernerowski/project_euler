#include <iostream>

int main() {
  int mult_sum = 0;

  for (int i = 1; i < 1000; i++) {
    if (i % 3 == 0 || i % 5 == 0) mult_sum += i;
  }

  std::cout << mult_sum << std::endl;

  return 0;
}
