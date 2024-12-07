#include <iostream>
#include "P2.h"
using namespace std;

template <size_t T, typename Compare, typename Container>
vector<typename Container::value_type> top_distance(
        const Container& valores,
        const typename Container::value_type& origen)
{
    using Point=typename Container::value_type;
    using DistanceType=decltype(origen.squared_distance(origen));

    vector<pair<DistanceType,Point>> distances;
    for (const auto& point : valores) {
        distances.emplace_back(point.squared_distance(origen), point);
    }

    sort(distances.begin(),distances.end(),[](const auto& a, const auto& b) {return Compare{}(a.first, b.first); });

    vector<Point> vRetorno;
    for (size_t i=0;i< min(T,distances.size());++i){
        vRetorno.push_back(distances[i].second);
    }

    return vRetorno;
}

template vector<point<int>>top_distance<3,less<int>,vector<point<int>>>(const vector<point<int>>&,const point<int>&);
template vector<point<int>>top_distance<4,greater<int>,vector<point<int>>>(const vector<point<int>>&,const point<int>&);
template vector<point<int>>top_distance<7,greater<int>,vector<point<int>>>(const vector<point<int>>&,const point<int>&);