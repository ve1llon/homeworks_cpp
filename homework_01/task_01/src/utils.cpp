#include "utils.hpp"

#include <string>
#include <string_view>
#include <vector>

std::vector<std::string> SplitString(std::string const& data) {
  std::vector<std::string> result;
  std::string str_item = "";
  bool IsBrackets = false;

  for (char const& word : data) {
    if (!IsBrackets) {
      if (word == ' ' || word == '\t') {
        if (!str_item.empty()) {
          result.push_back(str_item);
          str_item = "";
        }
      } else {
        str_item.push_back(word);
        if (word == '(') IsBrackets = true;
      }
    } else {
      str_item.push_back(word);
      if (word == ')') {
        IsBrackets = false;
        result.push_back(str_item);
        str_item = "";
      };
    };
  };

  if (!str_item.empty()) {
    result.push_back(str_item);
    str_item = "";
  }

  return result;
};