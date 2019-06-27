#include <cmath>
#include <iostream>
#include <string>

int is_palindrome(int num) {
  std::string str = std::to_string(num);
  int mid_point = floor(str.length() / 2);

  for (int i = 0; i < mid_point; i++) {
    if (str[i] != str[str.length() - i - 1]) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int i, j, largest, prod;
  largest = 0;

  for (i = 999; i > 99; i--) {
    for (j = 999; j > 99; j--) {
      prod = i * j;
      if (is_palindrome(prod) && prod > largest) {
        largest = prod;
        break;
      }
    }
  }
  std::cout << largest << std::endl;

  return 0;
}
