#include "utils.hpp"

#include <sstream>
#include <stack>
#include <string>

int Calculate(const std::string& data) {
  std::string str1 = "";
  std::string str2 = "";
  char sign = ' ';
  bool IsSign = false;

  for (char const& i : data) {
    if (!IsSign) {
      if (i != '+' && i != '-' && i != '*')
        str1.push_back(i);
      else {
        sign = i;
        IsSign = true;
      }
    } 
    else {
      str2.push_back(i);
    }
  }

  float float1 = std::stoi(str1);
  float float2 = std::stoi(str2);

  switch (sign) {
    case '+':
      return float1 + float2;
    case '-':
      return float1 - float2;
    case '*':
      return float1 * float2;
  };

};
