#include "P5.h"
#include <iostream>
#include <vector>
#include <list>
#include <forward_list>

int main() {
    using namespace std;

    // Caso de uso #1
    forward_list<int> fl{1, 2, 3, 4, 5};
    vector<int> vec{1, 2, 3, 3, 4, 5, 5};
    list<int> lst{2, 4, 5, 3, 1};
    cout << boolalpha;
    cout << "Caso 1: " << have_same_elements(fl, vec) << endl; // false
    cout << "Caso 2: " << have_same_elements(fl, lst) << endl; // true

    // Caso de uso #2
    vector<int> vec1{1, 2, 2, 3};
    list<int> lst1{2, 1, 3, 2};
    cout << "Caso 3: " << have_same_elements(vec1, lst1) << endl; // true

    // Caso de uso #3
    vector<int> vec2{1, 2, 3, 4};
    list<int> lst2{4, 3, 2, 1, 1};
    cout << "Caso 4: " << have_same_elements(vec2, lst2) << endl; // false

    return 0;
}