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

TEST_F(FizzBuzzTest, shouldReturn1for1) {
    ASSERT_EQ(sut.printFizzBuzz(1), "1");
}

