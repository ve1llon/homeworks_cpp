#include <iostream>

#include <utils.hpp>

int main() {
  for (const auto& word : SplitString("asdas das das fgag (adasd 1fas)")) {
    std::cout << word << std::endl;
  }
  return 0;
}
