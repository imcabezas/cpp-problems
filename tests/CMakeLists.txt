# Find the Google Test package that the Dev Container feature installed for us.
# The 'REQUIRED' keyword will cause an error if it's not found.
find_package(GTest REQUIRED)

# Create an executable for our tests from the test_main.cpp file.
add_executable(run_tests test_main.cpp)

# Link our test executable against the Google Test libraries.
# This is what gives us access to the TEST() macro and test runner.
target_link_libraries(run_tests PRIVATE GTest::GTest GTest::Main)

# Include the GoogleTest module to add support for CTest.
include(GoogleTest)

# This powerful command automatically discovers all TEST() macros in our
# executable and registers them as individual tests with CTest.
gtest_discover_tests(run_tests)