#ifndef PROG3_HEAP_HASH_V2022_1_P1_H
#define PROG3_HEAP_HASH_V2022_1_P1_H

#include <iostream>
#include <algorithm>
#include <vector>
#include <stdexcept>

using namespace std;

template <typename T>
class median{
private:
    vector<T> valores;
    T mActual;

    void update_median(){
        if (valores.empty()){
            throw runtime_error("No se puede calcular la mediana de una colección vacía");
        }
        size_t n=valores.size();
        if (n%2==0){
            mActual=(valores[n/2 -1]+valores[n/2])/2.0;
        }
        else{
            mActual=valores[n/2];
        }
    }

public:
    median(initializer_list<T> init);

    T get_median() const;

    template <typename U>
    friend ostream& operator<<(ostream& os,const median<U>& m);
};

#endif //PROG3_HEAP_HASH_V2022_1_P1_H