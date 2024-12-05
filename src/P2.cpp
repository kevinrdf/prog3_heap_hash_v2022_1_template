#include <iostream>
#include "P2.h"
using namespace std;

template <size_t T, typename Compare, typename Container>
vector<typename Container::value_type> top_distance(
        const Container& values,
        const typename Container::value_type& origin)
{
    using Point = typename Container::value_type;
    using DistanceType = decltype(origin.squared_distance(origin));

    vector<pair<DistanceType, Point>> distances;
    for (const auto& point : values) {
        distances.emplace_back(point.squared_distance(origin), point);
    }

    sort(distances.begin(), distances.end(),
              [](const auto& a, const auto& b) { return Compare{}(a.first, b.first); });

    vector<Point> result;
    for (size_t i = 0; i < min(T, distances.size()); ++i) {
        result.push_back(distances[i].second);
    }

    return result;
}

template vector<point<int>> top_distance<4, greater<int>, vector<point<int>>>(const vector<point<int>>&, const point<int>&);
template vector<point<int>> top_distance<3, less<int>, vector<point<int>>>(const vector<point<int>>&, const point<int>&);
template vector<point<int>> top_distance<7, greater<int>, vector<point<int>>>(const vector<point<int>>&, const point<int>&);