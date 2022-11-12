#include "utils.hpp"

#include <iostream>
#include <stack>

int Calculate(const std::string& data) {
  char a1 = data[0];
  char sign = data[1];
  char b1 = data[2];

  int a = int(a1);
  int b = int(b1);

  if (sign == '+') {
    return a + b;
  } else if (sign == '-') {
    return a - b;
  } else if (sign == '*') {
    return a * b;
  }
}
