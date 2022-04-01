#include <iostream>

#include <cstdlib>  // #include "stdlib.h"
#include <ctime>    // #include "time.h"
#include <random>

#include "matrix.h"

using namespace std;

int main() {
    // Definir la semilla
    // srand(time(nullptr));

    // Definir el random_device
    random_device rd;
    uniform_int_distribution<int> dis(0, 99);

    utec::matrix_t m1(4, 5);
    for (int i = 0; i < m1.row_size(); ++i) {
        for (int j = 0; j < m1.col_size(); ++j) {
//            m1(i, j) = rand() % 100;
            m1(i, j) = dis(rd);
        }
    }
    std::cout << "Ejecucion exitosa" << std::endl;
    return 0;
}
