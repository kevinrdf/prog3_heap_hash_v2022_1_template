#ifndef PROG3_HEAP_HASH_V2022_1_P1_H
#define PROG3_HEAP_HASH_V2022_1_P1_H

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iostream>

template <typename T>
class median {
private:
    std::vector<T> values;  // Almacena los valores ordenados
    T current_median;       // Valor de la mediana actual

    // Actualiza la mediana
    void update_median() {
        if (values.empty()) {
            throw std::runtime_error("No se puede calcular la mediana de una colección vacía.");
        }
        size_t n = values.size();
        if (n % 2 == 0) {
            current_median = (values[n / 2 - 1] + values[n / 2]) / 2.0;
        } else {
            current_median = values[n / 2];
        }
    }

public:
    // Constructor que acepta lista de valores
    median(std::initializer_list<T> init);

    // Método para obtener la mediana actual
    T get_median() const;

    // Sobrecarga del operador << para imprimir la mediana
    template <typename U>
    friend std::ostream& operator<<(std::ostream& os, const median<U>& m);
};

#endif //PROG3_HEAP_HASH_V2022_1_P1_H