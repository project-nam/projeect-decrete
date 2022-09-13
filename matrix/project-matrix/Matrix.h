//
// Created by Kienroro on 13/09/2022.
//

#ifndef PROJECT_MATRIX_MATRIX_H
#define PROJECT_MATRIX_MATRIX_H


class Matrix {
private:
    int matrix[100][100];
    int col;
    int row;
public:
    Matrix();
    Matrix(int col, int row);

    void inputMatrix();

    void outputMatrix();

    bool unitMatrix();

    void matrixTransposition();

    void countMatrix();

    void sortMatrixAsc();

    void findAllPrimeMatrix();

    void sumTwoMatrix(Matrix matrix);

    void processMatrix(Matrix matrix);

    int sumMarginMatrix();

    int determinantMatrix();

    void inverseMatrix();

};


#endif //PROJECT_MATRIX_MATRIX_H
