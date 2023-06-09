#include "gtest/gtest.h"
#include "libnumber/containers/numberContainer.h"
#include "libnumber/numberHelper.h"

TEST(NumberHelperTest, NumberHelping) {
    numberContainer_t numberContainer{5};
    numberHelper_t numberHelper{numberContainer};
    EXPECT_EQ(numberHelper.getInteger(), 5);
}
