#include <gtest/gtest.h>
#include <search_index.h>

TEST(TestCase, list_len_is_1) {
    SearchIndex si;
    std::vector<int> v{0};
    EXPECT_EQ(0, si.search_index(0, v));
}

TEST(TestCase, list_len_is_2) {
    SearchIndex si;
    std::vector<int> v{0, 1};
    EXPECT_EQ(0, si.search_index(0, v));
    EXPECT_EQ(1, si.search_index(1, v));
}

TEST(TestCase, list_len_is_3) {
    SearchIndex si;
    std::vector<int> v{0, 1, 2};
    EXPECT_EQ(0, si.search_index(0, v));
    EXPECT_EQ(1, si.search_index(1, v));
    EXPECT_EQ(2, si.search_index(2, v));
}

TEST(TestCase, empty_list) {
    SearchIndex si;
    std::vector<int> v;
    EXPECT_EQ(-1, si.search_index(3, v));
}

TEST(TestCase, value_not_exist) {
    SearchIndex si;
    std::vector<int> v{0, 1, 2};
    EXPECT_EQ(-1, si.search_index(3, v));
}
