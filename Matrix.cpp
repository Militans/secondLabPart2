//
// Created by MI on 03.12.2022.
//
#include <iostream>
#include "Matrix.h"
using namespace std;

Matrix::Matrix() {
    size = NULL;
}

Matrix::Matrix(int size) {
    this->size = size;
}

void Matrix::set_matrix() {
      if (this->size == NULL)
      {
          cout << "Enter the size\n";
          cin >> this->size;
      }
      for (int i = 0; i < this->size; i++)
      {
          cout << "enter string " << i + 1 << endl;
          vector <int> temp;
          int tempValue;
          while (cin >> tempValue){
              temp.push_back(tempValue);
              if (cin.get() == '\n') break;
          }
          data.push_back(temp);
      }
}

void Matrix::get_matrix() {
    for (int i = 0; i < this->size; i++)
    {
        for (int j = 0; j < this->size; j++)
        {
            cout << data[i][j] << "\t";
        }
        cout << endl;
    }

}
vector<vector<int>> Matrix::dot(Matrix second) {
    int temp = this->size;
    vector<vector<int>> resArr;
    for (int i = 0; i < temp; i++)
    {
        vector<int> tempArr;
        for (int j = 0; j < temp; j++)
        {
            int k = 0;
            tempArr.push_back(k);
        }
        resArr.push_back(tempArr);
    }

    for (int i = 0; i < temp; i++)
    {
        for (int j = 0; j < temp; j++) {
            for (int k = 0; k < temp; k++) {
                resArr[i][j] += this->data[i][k] * second.data[k][j];
            }
        }
    }

    return resArr;
}

void Matrix::set_data(vector<vector<int>> value) {
    this->data = value;
    this->size = value.size();
}
