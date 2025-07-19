#include <gtest/gtest.h>

// This is a basic test case.
// It defines a Test Suite named "ExampleTests" and a Test named "DemonstratesTrue".
TEST(ExampleTests, DemonstratesTrue) {
    // ASSERT_EQ checks if its two arguments are equal.
    // This is a trivial test to make sure the framework is working.
    ASSERT_EQ(1, 1);
}

// You can add more tests here
TEST(ExampleTests, DemonstratesStrings) {
    std::string sample = "hello";
    ASSERT_STREQ("hello", sample.c_str());
}

// The main function for the test executable is boilerplate.
// It initializes Google Test and runs all the tests discovered in this file.
// You usually don't need to touch this.
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}