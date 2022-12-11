#include <catch2/catch_test_macros.hpp>

#include "utils.hpp"

TEST_CASE("Calculate", "[simple_sum]") {
  CHECK(Calculate("1+2") == 3);
  CHECK(Calculate("2+2") == 4);
  CHECK(Calculate("1+0") == 1);
  CHECK(Calculate("0+0") == 0);

  CHECK(Calculate("124+14") == 138);
  CHECK(Calculate("10+100") == 110);
}

TEST_CASE("Calculate", "[simple_difference]") {
  CHECK(Calculate("5-2") == 3);
  CHECK(Calculate("2-2") == 0);
  CHECK(Calculate("1-0") == 1);
  CHECK(Calculate("0-0") == 0);

  CHECK(Calculate("87-97") == -10);
  CHECK(Calculate("125-25") == 100);
}

TEST_CASE("Calculate", "[simple_multiply]") {
  CHECK(Calculate("5*2") == 10);
  CHECK(Calculate("2*2") == 4);
  CHECK(Calculate("1*0") == 0);
  CHECK(Calculate("0*0") == 0);

  CHECK(Calculate("100000*0") == 0);
  CHECK(Calculate("125*40") == 5000);
}
