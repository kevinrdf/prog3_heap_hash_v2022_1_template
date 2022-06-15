//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P1.h"
using namespace std;

static void question_1() {
    median<int> m {1, 2, 3, 5};
    cout << m << endl;
}

static void question_2() {
    median<double> m {1, 2, 2.4, 5};
    cout << m << endl;
}

static void question_3() {
    median<float> m {1, 2, 5, 6, 7, 3, 11, 2, 4, 3, 7};
    cout << m << endl;
}

static void question_4() {
    median<int> m {1};
    cout << m << endl;
}

TEST_CASE("Question #1.1") {
    execute_test("test_1_1.in", question_1);
}

TEST_CASE("Question #1.2") {
    execute_test("test_1_2.in", question_2);
}

TEST_CASE("Question #1.3") {
    execute_test("test_1_3.in", question_3);
}

TEST_CASE("Question #1.4") {
    execute_test("test_1_4.in", question_4);
}