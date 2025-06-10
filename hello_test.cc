#include <gtest/gtest.h>
#include "hello.h"

TEST(HelloTest, BasicAssertion) {
  EXPECT_EQ("hello", my::hello());
}
