#include "utils.hpp"

#include <sstream>
#include <stack>
#include <string>

int Calculate(const std::string& data) {
  std::string a1 = "";
  std::string b1 = "";
  char sign = ' ';
  bool IsSign = false;
  for (char const& i : data) {
    if (!IsSign) {
      if (i != '+' && i != '-' && i != '*') {
        a1.push_back(i);
      } else {
        sign = i;
        IsSign = true;
      }
    } else {
      b1.push_back(i);
    }
  }

  float a = std::stoi(a1);
  float b = std::stoi(b1);

  if (sign == '+')
    return a + b;
  else if (sign == '-')
    return a - b;
  else if (sign == '*')
    return a * b;
}