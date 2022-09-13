#include "Matrix.cpp"

int main()
{
    Matrix matrix;
    matrix.inputMatrix();
    matrix.outputMatrix();
    cout << matrix.unitMatrix();
    cout << endl;
    matrix.matrixTransposition();
    matrix.countMatrix();
    cout << endl;
    matrix.sortMatrixAsc();
    return 0;
}