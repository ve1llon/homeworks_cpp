#include "utils.hpp"

#include <sstream>
#include <stack>
#include <string>

int Calculate(const std::string& data) {
  char a1 = data[0];
  char sign = data[1];
  char b1 = data[2];

  std::stringstream a_strm;
  std::stringstream b_strm;

  a_strm << a1;
  b_strm << b1;

  int a = std::stoi(a_strm.str());
  int b = std::stoi(b_strm.str());

  if (sign == '+')
    return a + b;
  else if (sign == '-')
    return a - b;
  else if (sign == '*')
    return a * b;
}