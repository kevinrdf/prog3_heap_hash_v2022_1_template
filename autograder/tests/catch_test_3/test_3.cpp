//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P3.h"
using namespace std;

static void question_1() {
    string text = "ABNT AuToN AuTooN sArTeN ATeN";
    string result = find_min_subtext(text, "ATN");
    cout << result;
}

static void question_2() {
    string text = "El rey de constantinopla esta constantinoplizado. "
                  "consta que constanza, no lo pudo desconstantinoplizar. "
                  "El desconstantinoplizador que desconstantinoplizare "
                  "al rey de constantinopla, buen desconstantinoplizador será.";
    string result = find_min_subtext(text, "csp");
    cout << result;
}

static void question_3() {
    string text = "El hipopotamo Hipo está con hipo, ¿quien le quita el hipo"
                  " al hipopotamo Hipo";
    string result = find_min_subtext(text, "hpm");
    cout << result;
}

static void question_4() {
    string text = "pedro perez pitan pintor perpetuo pinta paisajes por poco precio "
                  "para poder partir pronto para Paris.";
    string result = find_min_subtext(text, "pn");
    cout << result;
}

TEST_CASE("Question #3.1") {
    execute_test("test_3_1.in", question_1);
}

TEST_CASE("Question #3.2") {
    execute_test("test_3_2.in", question_2);
}

TEST_CASE("Question #3.3") {
    execute_test("test_3_3.in", question_3);
}

TEST_CASE("Question #3.4") {
    execute_test("test_3_4.in", question_4);
}
