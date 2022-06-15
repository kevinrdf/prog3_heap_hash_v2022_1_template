//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P2.h"
using namespace std;

static void question_1() {
    vector< point<int> > values = {
            {1, 1}, {1, 2}, {1, 2}, {1, 4}, {1, 5},
            {2, 1}, {2, 2}, {2, 2}, {2, 4}, {2, 5},
            {3, 1}, {3, 2}, {3, 2}, {3, 4}, {3, 5},
            {4, 1}, {4, 2}, {4, 2}, {4, 4}, {4, 5} };
    auto result = top_distance<4, greater<int>>(values, point<int>{0, 0});
    for (const auto& item: result)
        cout << item << endl;
}

static void question_2() {
    vector< point<int> > values = {
            {1, 1}, {1, 2}, {1, 2}, {1, 4}, {1, 5},
            {2, 1}, {2, 2}, {2, 2}, {2, 4}, {2, 5} };
    auto result = top_distance<3, less<int>>(values, point<int>{30, 40});
    for (const auto& item: result)
        cout << item << endl;
}

static void question_3() {
    vector< point<int> > values = {
            {1, 1}, {1, 2}, {1, 2}, {1, 4}, {1, 5},
            {2, 1}, {2, 2}, {2, 2}, {2, 4}, {2, 5},
            {3, 1}, {3, 2}, {3, 2}, {3, 4}, {3, 5},
            {4, 1}, {4, 2}, {4, 2}, {4, 4}, {4, 5} };
    auto result = top_distance<7, greater<int>>(values, point<int>{0, 0});
    for (const auto& item: result)
        cout << item << endl;
}

static void question_4() {
    vector<point<int>> values = {
            {10, 10}, {1, 20}, {10, 2}, {1, 4}, {1, 5},
            {2, 1}, {2, 2}, {2, 2}, {2, 4}, {2, 5},
            {3, 1}, {3, 2}, {3, 22}, {3, 42}, {3, 5} };
    auto result = top_distance<21, greater<int>>(values, point<int>{10, 10});
    for (const auto& item: result)
        cout << item << endl;
}

TEST_CASE("Question #2.1") {
    execute_test("test_2_1.in", question_1);
}

TEST_CASE("Question #2.2") {
    execute_test("test_2_2.in", question_2);
}

TEST_CASE("Question #2.3") {
    execute_test("test_2_3.in", question_3);
}

TEST_CASE("Question #2.4") {
    execute_test("test_2_4.in", question_4);
}