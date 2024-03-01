#include "gtest/gtest.h"

// Function to be tested
int add(int a, int b) {
    return a + b;
}

// Test suite
class TestSuite : public ::testing::Test {
protected:
    void SetUp() override {
        // Code here will be called immediately after the constructor (right
        // before each test).
    }

    void TearDown() override {
        // Code here will be called immediately after each test (right
        // before the destructor).
    }
};

// Test case
TEST_F(TestSuite, ExampleTest) {
    EXPECT_EQ(add(1, 2), 3);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
