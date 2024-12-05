#ifndef PROG3_HEAP_HASH_V2022_1_P2_H
#define PROG3_HEAP_HASH_V2022_1_P2_H

#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

using namespace std;

template <typename T>
struct point {
    T x, y;

    point(T x = 0, T y = 0) : x(x), y(y) {}

    T squared_distance(const point<T>& other) const {
        T dx = x - other.x;
        T dy = y - other.y;
        return dx * dx + dy * dy;
    }

    friend ostream& operator<<(std::ostream& os, const point<T>& p) {
        os << "(" << p.x << ", " << p.y << ")";
        return os;
    }
};

template <size_t T, typename Compare, typename Container>
vector<typename Container::value_type> top_distance(
        const Container& values,
        const typename Container::value_type& origin);

#endif //PROG3_HEAP_HASH_V2022_1_P2_H