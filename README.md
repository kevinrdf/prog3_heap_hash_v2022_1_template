# Task #6: Estructuras de Datos Básicos - Heap y Hash  
**course:** Programación III  
**unit:** 6  
**cmake project:** prog3_heap_hash_v2022_1
## Instructions
Subir a gradescope los siguientes archivos:
- `P1.h`, `P1.cpp`
- `P2.h`, `P2.cpp`
- `P3.h`, `P3.cpp`
- `P4.h`, `P4.cpp`
- `P5.h`, `P5.cpp`

## Question #1 - Obtener mediana - Heap (4 points)

Diseñar y desarrollar el template de clase **`median`** que permita la busqueda en tiempo constante del valor de la mediana de una colección de valores numéricos.

**Use Case:**
```cpp
    // Caso de uso #1
    median<int> m {1, 2, 3, 5};
    cout << m << endl;
    // Caso de uso #2
    median<double> m {1, 2, 2.4, 5};
    cout << m << endl;
    // Caso de uso #3
    median<float> m {1, 2, 5, 6, 7, 3, 11, 2, 4, 3, 7};
    cout << m << endl;
    // Caso de uso #4
    median<int> m {1};
    cout << m << endl;
```
## Question #2 - Distancia máxima - Heap (4 points)

Generar el template de función **`top_distance`** para que permita devolver valores máximos y mínimos, permita seleccionar los  t valores máximos o mínimos y que permita seleccionar la posición del punto de origen.

**Use Case:**
```cpp
    // Caso de uso #1
    vector< point<int> > values = {
        {1, 1}, {1, 2}, {1, 2}, {1, 4}, {1, 5},
        {2, 1}, {2, 2}, {2, 2}, {2, 4}, {2, 5},
        {3, 1}, {3, 2}, {3, 2}, {3, 4}, {3, 5},
        {4, 1}, {4, 2}, {4, 2}, {4, 4}, {4, 5} };
    auto result = top_distance<4, greater<int>>(values, point<int>{0, 0});
    for (const auto& item: result)
        cout << item << endl;
    // Caso de uso #2
    vector< point<int> > values = {
        {1, 1}, {1, 2}, {1, 2}, {1, 4}, {1, 5},
        {2, 1}, {2, 2}, {2, 2}, {2, 4}, {2, 5} };
    auto result = top_distance<3, less<int>>(values, point<int>{30, 40});
    for (const auto& item: result)
        cout << item << endl;
    // Caso de uso #3
    vector< point<int> > values = {
        {1, 1}, {1, 2}, {1, 2}, {1, 4}, {1, 5},
        {2, 1}, {2, 2}, {2, 2}, {2, 4}, {2, 5},
        {3, 1}, {3, 2}, {3, 2}, {3, 4}, {3, 5},
        {4, 1}, {4, 2}, {4, 2}, {4, 4}, {4, 5} };
    auto result = top_distance<7, greater<int>>(values, point<int>{0, 0});
    for (const auto& item: result)
        cout << item << endl;
```
## Question #3 - Buscar subtexto minimo - Heap (4 points)

Dado un texto 'T' y un patrón 'P', escribir una función **`find_min_subtext`** que, utilizando heaps, encuentre y retorne la porción del texto 'R' (contando espacios como carácter válido), de manera tal que los caracteres de P se encuentran en alguna parte de 'R', pero siguiendo el mismo orden de aparición de P. R tiene que ser la porción de texto que tenga el mínimo número de caracteres posible que cumpla con los requisitos.

**Use Case:**
```cpp
    // Caso de uso #1
    string text = "ABNT AuToN AuTooN sArTeN ATeN";
    string result = find_min_subtext(text, "ATN");
    cout << result << endl;
    // Caso de uso #2
    string text = "El rey de constantinopla esta constantinoplizado. " 
            "consta que constanza, no lo pudo desconstantinoplizar. "
            "El desconstantinoplizador que desconstantinoplizare "
            "al rey de constantinopla, buen desconstantinoplizador será.";
    string result = find_min_subtext(text, "csp");
    cout << result;
    // Caso de uso #3
    string text = "El hipopotamo Hipo está con hipo, ¿quien le quita el hipo"
    " al hipopotamo Hipo";
    string result = find_min_subtext(text, "hpm");
    cout << result;
```
## Question #4 - Pares cruzado - Hash (4 points)

Dado un contenedor de pares ordenados, Escribir el template de función **`crisscross_pairs`** que busque para cada par ordenado `p1 (i,j)` el par ordenado `p2 (j,i)` y retorne ambos pares encontrados en un contenedor del mismo tipo que el original.

**Use Case:**
```cpp
    // Caso de uso #1
    using sorted_pair = pair<int, int>;
    vector<sorted_pair> vec {	{1, 2}, {1, 1}, {2, 1},
                                {1, 4}, {3, 2}, {4,1}};
    auto result = crisscross_pairs(vec); // {{1, 2}, {2, 1}, {1, 4}, {4,1}}
    // Caso de uso #2
    using sorted_pair = std::pair<int, int>;
    vector<sorted_pair> vec {
    {1, 2}, {1, 1}, {2, 1}, {1, 4}, {3, 2}, {4,1}, {1, 2}, {4, 5}, {7, 1}, {7, 1}, {1, 7}};
    auto result = crisscross_pairs(vec);
    for (const auto& item: result)
    cout << item.first << " " << item.second << endl;
    // Caso de uso #3
    using sorted_pair = std::pair<int, int>;
    vector<sorted_pair> vec {{1, 2}};
    auto result = crisscross_pairs(vec);
    for (const auto& item: result)
    cout << item.first << " " << item.second << endl;
    // Caso de uso #4
    using sorted_pair = std::pair<int, int>;
    vector<sorted_pair> vec {};
    auto result = crisscross_pairs(vec);
    for (const auto& item: result)
    cout << item.first << " " << item.second << endl;
```
## Question #5 - Los mismos elementos - Hash (4 points)

Dado 2 contenedores cuyos valores no se encuentran ordenados, desarrollar un template de función **`have_same_elements`** que permite verificar si ambos arreglos contienen los mismos elementos y cuyo tiempo sea lineal O(n).

**Use Case:**
```cpp
    // Caso de uso #1
    forward_list<int> fl {1, 2, 3, 4, 5};
    vector<int> vec {1, 2, 3, 3, 4, 5, 5};
    list<int> lst {2, 4, 5, 3, 1};
    cout << boolalpha;
    cout << have_same_elements(fl, vec) << endl; // false
    cout << have_same_elements(fl, lst) << endl; // true
```
