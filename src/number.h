//
// Created by rudri on 3/23/2022.
//

#ifndef PROG3_UNIT1_TAREA_INTRODUCTORIA_V2022_1_NUMBER_H
#define PROG3_UNIT1_TAREA_INTRODUCTORIA_V2022_1_NUMBER_H


class number_t {
public:
  virtual void print(ostream& os) = 0;
};

class real_t {
public:
  virtual void print(ostream& os) {
    os << value;
  }
};

class real_t {
public:
  virtual void print(ostream& os) {
    os << value;
  }
};


#endif //PROG3_UNIT1_TAREA_INTRODUCTORIA_V2022_1_NUMBER_H
