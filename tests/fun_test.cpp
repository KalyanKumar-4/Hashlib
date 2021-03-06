#include "gtest/gtest.h"

#include "src/lib/hash.hpp"

TEST(Strn, Outp) {
  auto hasher = slowhash::string_hasher(131, 137, 53);
  auto h1 = hasher("goodbye cruel world!", 0);
  auto h2 = hasher("hello great universe!", 0);
  EXPECT_NE(h1, h2);
}

TEST(Strn, BeEq) {
  auto hasher = slowhash::string_hasher(131, 137, 53);
  auto h1 = hasher("hello!!!", 0);
  auto h2 = hasher("hello!!!", 0);
  EXPECT_EQ(h1, h2);
}

TEST(Inte, Outp) {
  auto hasher = slowhash::integral_hasher<int>(131);
  auto h1 = hasher(22);
  auto h2 = hasher(23);
  EXPECT_NE(h1, h2);
}
