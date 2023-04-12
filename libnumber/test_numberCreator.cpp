#include "gtest/gtest.h"
#include "numberCreator.h"

TEST(NumberCreatorTest, NumberCreation) {
    numberCreator_t numberCreator{};
    numberContainer_t number = numberCreator.createNumber();
    EXPECT_EQ(number.number, 99);
}
