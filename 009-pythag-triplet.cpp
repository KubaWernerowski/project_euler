#include <cmath>
#include <iostream>

int main() {
  int a, b, c;

  for (c = 1; c < 1000; c++) {
    for (b = 1; b < c; b++) {
      for (a = 1; a < b; a++) {
        if (a + b + c == 1000 &&
            std::pow(a, 2) + std::pow(b, 2) == std::pow(c, 2)) {
          std::cout << a * b * c << std::endl;

          return 0;
        }
      }
    }
  }
  return 1;
}