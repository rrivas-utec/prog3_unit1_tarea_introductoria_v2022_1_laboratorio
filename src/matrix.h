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
        
        void _destroy() {
        }
        
        void _construct() {
        }
        
        void _copy(TYPE** data, SIZE_TYPE nrow, SIZE_TYPE ncol): nrow(nrow), ncol(ncol) {
        }
        
        friend ostream& operator<<(ostream& os, const matrix_t& m);
        
    public:
        matrix_t(SIZE_TYPE nrow, SIZE_TYPE ncol) {
        }
        
        matrix_t(const matrix_t& another) {
        }
        
        matrix_t& operator=(const matrix_t& another) {
            return *this;
        }
        
        ~matrix_t() {
        }

        // Metodos Get
        SIZE_TYPE row_size() const {
            return nrow;
        }
        
        SIZE_TYPE col_size() const {
            return ncol;
        }

        // Sobrecarga al operador parentesis
        TYPE& operator() (SIZE_TYPE i, SIZE_TYPE j) {
            return data[i][j];
        }
        
        TYPE operator() (SIZE_TYPE i, SIZE_TYPE j) const {
            return data[i][j];
        }

        ostream& operator<<(ostream& os, const matrix_t& m);

    };
}


#endif //PROG3_UNIT1_TAREA_INTRODUCTORIA_V2022_1_MATRIX_H
