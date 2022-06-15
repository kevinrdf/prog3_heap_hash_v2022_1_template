//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P4.h"
using namespace std;

static void question_1() {
    using sorted_pair = std::pair<int, int>;
    vector<sorted_pair> vec {
        {1, 2}, {1, 1}, {2, 1}, {2, 1}, {1, 4}, {3, 2}, {4,1}};
    auto result = crisscross_pairs(vec);
    for (const auto& item: result)
        cout << item.first << " " << item.second << endl;
}

static void question_2() {
    using sorted_pair = std::pair<int, int>;
    vector<sorted_pair> vec {
        {1, 2}, {1, 1}, {2, 1}, {1, 4}, {3, 2}, {4,1}, {1, 2}, {4, 5}, {7, 1}, {7, 1}, {1, 7}};
    auto result = crisscross_pairs(vec);
    for (const auto& item: result)
        cout << item.first << " " << item.second << endl;
}

static void question_3() {
    using sorted_pair = std::pair<int, int>;
    vector<sorted_pair> vec {{1, 2}};
    auto result = crisscross_pairs(vec);
    for (const auto& item: result)
        cout << item.first << " " << item.second << endl;
}

static void question_4() {
    using sorted_pair = std::pair<int, int>;
    vector<sorted_pair> vec {};
    auto result = crisscross_pairs(vec);
    for (const auto& item: result)
        cout << item.first << " " << item.second << endl;
}

TEST_CASE("Question #4.1") {
    execute_test("test_4_1.in", question_1);
}

TEST_CASE("Question #4.2") {
    execute_test("test_4_2.in", question_2);
}

TEST_CASE("Question #4.3") {
    execute_test("test_4_3.in", question_3);
}

TEST_CASE("Question #4.4") {
    execute_test("test_4_4.in", question_4);
}
