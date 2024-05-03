#include <gtest/gtest.h>
#include <string>

#include "hello_world.h"

TEST(Kata1Test, HelloWorld) {
  EXPECT_STREQ(kata_part1::util::getHelloWorldText().c_str(), "Hello world!");
}