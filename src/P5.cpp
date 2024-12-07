#include <iostream>
#include "P5.h"
using namespace std;

template <typename Container1, typename Container2>
bool have_same_elements(const Container1& contenedor1,const Container2& contenedor2){
    unordered_map<typename Container1::value_type,int> element_counts;

    for (const auto& elem:contenedor1){
        ++element_counts[elem];
    }

    for (const auto& elem:contenedor2){
        auto it=element_counts.find(elem);
        if (it==element_counts.end() || it->second==0){
            return false;
        }
        --it->second;
    }

    for (const auto& [key,count]:element_counts){
        if (count!=0){
            return false;
        }
    }
    return true;
}