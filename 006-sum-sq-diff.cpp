#include <iostream>

int main() {
  int sum_of_squares = 0;
  int squared_sum = 0;

  for (int i = 1; i < 101; i++) {
    squared_sum += i;
    sum_of_squares += i * i;
  }

  std::cout << squared_sum * squared_sum - sum_of_squares << std::endl;

  return 0;
}
