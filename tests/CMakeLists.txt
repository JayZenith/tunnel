# Find testing framework (e.g., Google Test)
find_package(GTest REQUIRED)

# Create test executable
add_executable(my_tests )

# Link with your library and GTest
target_link_libraries(my_tests
    PRIVATE
        tunnel
        GTest::GTest
        GTest::Main
)

# Register tests with CTest
add_test(NAME my_tests COMMAND my_tests)