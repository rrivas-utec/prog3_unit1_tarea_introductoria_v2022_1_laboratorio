//
// Created by rudri on 3/23/2022.
//

#ifndef PROG3_UNIT1_TAREA_INTRODUCTORIA_V2022_1_MATRIX_H
#define PROG3_UNIT1_TAREA_INTRODUCTORIA_V2022_1_MATRIX_H

namespace utec {
    using TYPE = double;        // El tipo del contenido de la matriz
    using SIZE_TYPE = int;      // Representa las dimensiones y posiciones dentro de la matriz

    class matrix_t {
        // Atributos
        SIZE_TYPE nrow = 0;     // La cantidad de filas
        SIZE_TYPE ncol = 0;     // La cantidad de columnas
        TYPE** data = nullptr;  // El contenido de la matriz
    public:
        matrix_t(SIZE_TYPE nrow, SIZE_TYPE ncol);

        // Metodos Get
        SIZE_TYPE row_size() {
            return nrow;
        }
        SIZE_TYPE col_size() {
            return ncol;
        }

        // Sobrecarga al operador parentesis
        TYPE& operator() (SIZE_TYPE i, SIZE_TYPE j) {
            return data[i][j];
        }


    };
}


#endif //PROG3_UNIT1_TAREA_INTRODUCTORIA_V2022_1_MATRIX_H
