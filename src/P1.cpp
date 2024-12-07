#include <iostream>
#include "P1.h"
using namespace std;

template <typename T>
median<T>::median(initializer_list<T> init):valores(init){
    sort(valores.begin(),valores.end());
    update_median();
}

template <typename T>
T median<T>::get_median() const{
    return mActual;
}

template <typename T>
ostream& operator<<(ostream& os,const median<T>& m){
    os<<m.get_median();
    return os;
}