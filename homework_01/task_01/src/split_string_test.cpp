#include <catch2/catch_test_macros.hpp>

#include "utils.hpp"

TEST_CASE("SplitString", "[simple]") {
  CHECK(SplitString("") == std::vector<std::string>{});
  CHECK(SplitString("aaa") == std::vector<std::string>{"aaa"});
  CHECK(SplitString("aaa aaa") == std::vector<std::string>{"aaa", "aaa"});
  CHECK(SplitString("aaa aaa ") == std::vector<std::string>{"aaa", "aaa"});
  CHECK(SplitString(" ") == std::vector<std::string>{});
  CHECK(SplitString("??? ??") == std::vector<std::string>{"???", "??"});
  CHECK(SplitString("a\na\ta a") == std::vector<std::string>{"a\na", "a", "a"});
  CHECK(SplitString("a (a a)") == std::vector<std::string>{"a", "(a a)"});
  CHECK(SplitString("a (a a) b (asd as)  ") == std::vector<std::string>{"a", "(a a)", "b", "(asd as)"});

  CHECK(SplitString("47   535 3.14 -4   ( 9... )") == std::vector<std::string>{"47", "535", "3.14", "-4", "( 9... )"});
  CHECK(SplitString("aa (aa (aa aa)) aa") == std::vector<std::string>{"aa", "(aa (aa aa))", "aa"});
}
