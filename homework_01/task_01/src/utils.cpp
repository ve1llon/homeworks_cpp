#include "utils.hpp"

#include <string>
#include <string_view>
#include <vector>

std::vector<std::string> SplitString(const std::string& data) {
  std::vector<std::string> result;
  std::string str_item = "";
  bool brackets = false;
  int extra_brackets = 0;

  for (const char& c : data) {
    if (!brackets) {
      if (c == ' ' || c == '\t') {
        if (!str_item.empty()) {
          result.push_back(str_item);
          str_item.clear();
        }
      } 
      else {
        str_item.push_back(c);
        if (c == '(') brackets = true;
      }
    } 
    else {
      str_item.push_back(c);
      if (c == '(') 
        extra_brackets += 1;
      if (c == ')') {
        if (extra_brackets != 0)
          extra_brackets -= 1;
        else { 
          brackets = false;
          result.push_back(str_item);
          str_item.clear();
        }
      }
    }
  }

  if (!str_item.empty()) {
    result.push_back(str_item);
    str_item.clear();
  }

  return result;

}
