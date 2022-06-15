//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include <vector>
#include <list>
#include <forward_list>
#include "P5.h"
using namespace std;

static void question_1() {
    forward_list<int> fl {1, 2, 3, 4, 5};
    vector<int> vec {1, 2, 3, 3, 4, 5, 5};
    list<int> lst {2, 4, 5, 3, 1};
    cout << boolalpha;
    cout << have_same_elements(fl, vec) << endl; // false
    cout << have_same_elements(fl, lst) << endl; // true
}

static void question_2() {
    forward_list<int> fl1 {1, 1, 1, 1, 1};
    forward_list<int> fl2 {1, 1, 1, 1, 1, 1, 1};
    cout << boolalpha;
    cout << have_same_elements(fl1, fl2) << endl; // false
}

static void question_3() {
    vector<int> vec {};
    list<int> lst {};
    cout << boolalpha;
    cout << have_same_elements(vec, lst) << endl; // true
}

static void question_4() {
    forward_list<double> fl {1.1, 3.0, 4.5, 3.5, 2.2};
    vector<double> vec {1.1, 2.2, 3.0, 3.5, 4.5};
    cout << boolalpha;
    cout << have_same_elements(fl, vec) << endl; // true
}

TEST_CASE("Question #5.1") {
    execute_test("test_5_1.in", question_1);
}

TEST_CASE("Question #5.2") {
    execute_test("test_5_2.in", question_2);
}

TEST_CASE("Question #5.3") {
    execute_test("test_5_3.in", question_3);
}

TEST_CASE("Question #5.4") {
    execute_test("test_5_4.in", question_4);
}
