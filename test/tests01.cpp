#include <gtest/gtest.h>
#include "../include/converter.h"

TEST(test_01, basic_test_set) {
    ASSERT_TRUE(convert(8, 30, "am")=="0830");
}

TEST(test_02, basic_test_set) {
    ASSERT_TRUE(convert(8, 30, "pm")=="2030");
}

TEST(test_03, basic_test_set) {
    ASSERT_TRUE(convert(12, 30, "am")=="1230");
}

TEST(test_04, basic_test_set) {
    ASSERT_TRUE(convert(12, 30, "pm")=="0030");
}

TEST(test_05, basic_test_set) {
    ASSERT_TRUE(convert(4, 59, "pm")=="1659");
}

TEST(test_06, basic_test_set) {
    ASSERT_TRUE(convert(3, 1, "pm")=="1501");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}