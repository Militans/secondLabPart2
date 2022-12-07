
#include <iostream>
#include <vector>
#include "Matrix.h"
using namespace std;

int main()
{
    int size1, size2;
    cout << "Enter size of matrix A" << endl;
    cin >> size1;
    cout << "Enter size of matrix B" << endl;
    cin >> size2;

    Matrix a(size1);
    Matrix b(size2);

    cout << "enter first matrix" << endl;
    a.set_matrix();
    cout << "enter second matrix" << endl;
    b.set_matrix();
    Matrix res;
    vector<vector<int>> resArr = a.dot(b);
    res.set_data(resArr);
    res.get_matrix();


    return 0;
}
