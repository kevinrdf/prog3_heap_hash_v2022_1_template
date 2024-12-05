#include <iostream>
#include "P1.h"
using namespace std;

template <typename T>
median<T>::median(initializer_list<T> init) : values(init) {
    sort(values.begin(), values.end());
    update_median();
}

template <typename T>
T median<T>::get_median() const {
    return current_median;
}

template <typename T>
ostream& operator<<(ostream& os, const median<T>& m) {
    os << m.get_median();
    return os;
}