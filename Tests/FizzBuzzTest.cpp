#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../src/FizzBuzz.h"

using testing::Eq;

namespace {
    class FizzBuzzTest : public testing::Test {

    public:
        FizzBuzz sut;

        FizzBuzzTest() {
            sut;
        }
    };
}

TEST_F(FizzBuzzTest, shouldReturnNumWhenNotDivisibleByThreeOrFive) {
    int const size = 9;
    int numbers[size] = {1, 2, 4, 7, 8, 11, 13, 14, 16};

    for (int i = 0; i < size; i++) {
        int num = numbers[i];
        string actual = sut.process(num);
        string expected = std::to_string(num);
        
        ASSERT_EQ(actual, expected);
    }
}

TEST_F(FizzBuzzTest, shouldReturnFizzWhenDivisibleByThreeButNotFive) {
    int const size = 5;
    int numbers[size] = {3, 6, 9, 12, 18};

    for (int i = 0; i < size; i++) {
        int num = numbers[i];
        string actual = sut.process(num);
        string expected = "Fizz";

        ASSERT_EQ(actual, expected);
    }
}

TEST_F(FizzBuzzTest, shouldReturnBuzzWhenDivisibleByFiveButNotThree) {
    int const size = 5;
    int numbers[size] = {5, 10, 20, 25, 35};

    for (int i = 0; i < size; i++) {
        int num = numbers[i];
        string actual = sut.process(num);
        string expected = "Buzz";

        ASSERT_EQ(actual, expected);
    }
}

TEST_F(FizzBuzzTest, shouldReturnFizzBuzzWhenDivisibleByFiveAndThree) {
    int const size = 5;
    int numbers[size] = {0, 15, 30, 45, 60};

    for (int i = 0; i < size; i++) {
        int num = numbers[i];
        string actual = sut.process(num);
        string expected = "FizzBuzz";

        ASSERT_EQ(actual, expected);
    }
}