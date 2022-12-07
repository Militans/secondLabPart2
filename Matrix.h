//
// Created by MI on 03.12.2022.
//
#include <vector>
using namespace std;
#ifndef LAB2_MORE_MATRIX_H
#define LAB2_MORE_MATRIX_H


class Matrix {
public:
    Matrix();
    Matrix(int size);
    void set_matrix();
    void get_matrix();
    vector<vector<int>> dot(Matrix second);
    void set_data(vector<vector<int>> value);

private:
    std::vector <std::vector <int>> data;
    int size;
};


#endif //LAB2_MORE_MATRIX_H
