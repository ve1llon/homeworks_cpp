#include "utils.hpp"

#include <string>
#include <string_view>
#include <vector>

std::vector<std::string> SplitString(const std::string& data) {
  std::vector<std::string> result;
  std::string el = "";
  int k = 0;
  for (char const& letter : data) {
    if (k == 0) {
      if (letter == '(') {
        k = 1;
      } else if (letter != ' ' and letter != '\t') {
        el.push_back(letter);
      } else if (letter != ' ' or letter == '\t') {
        if (!el.empty()) {
          result.push_back(el);
          el.clear();
        }
      };
    };
    if (k == 1) {
      if (letter != ')') {
        el.push_back(letter);
      } else if (letter == ')') {
        el.push_back(letter);
        if (!el.empty()) {
          result.push_back(el);
          el.clear();
        }
        k = 0;
      };
    };
  };
  if (!el.empty()) {
    result.push_back(el);
    el.clear();
  }
  return {result};
};
