#include <iostream>
#include <unordered_set>
#include "P4.h"
using namespace std;

template <typename Container>
Container crisscross_pairs(const Container& entrada){
    using PairType=typename Container::value_type;
    Container result;
    unordered_set<PairType> seen;

    for (const auto& p:entrada){
        PairType reversed={p.second,p.first};
        if (seen.find(reversed)!=seen.end()){
            result.push_back(p);
            result.push_back(reversed);
        }
        else{
            seen.insert(p);
        }
    }
    return result;
}