#ifndef PROG3_HEAP_HASH_V2022_1_P1_H
#define PROG3_HEAP_HASH_V2022_1_P1_H

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iostream>

using namespace std;

template <typename T>
class median {
private:
    vector<T> values;
    T current_median;

    void update_median() {
        if (values.empty()) {
            throw runtime_error("No se puede calcular la mediana de una colección vacía.");
        }
        size_t n = values.size();
        if (n % 2 == 0) {
            current_median = (values[n / 2 - 1] + values[n / 2]) / 2.0;
        } else {
            current_median = values[n / 2];
        }
    }

public:
    median(initializer_list<T> init);

    T get_median() const;

    template <typename U>
    friend ostream& operator<<(ostream& os, const median<U>& m);
};

#endif //PROG3_HEAP_HASH_V2022_1_P1_H