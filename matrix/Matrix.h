#include <iostream>
using namespace std;

class Matrix{
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

        void maxtrixTransposition();

        void countMatrix();

        void sortMatrixAsc();

        void findAllPrimeMatrix();

        void sumTwoMatrix(Matrix matrix);

        void processMatrix(Matrix matrix);

        int sumMarginMatrix();

        int determinantMatrix();

        void inverseMatrix();
};