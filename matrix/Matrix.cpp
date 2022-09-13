#include "Matrix.h"

Matrix::Matrix()
{
}

Matrix::Matrix(int row, int col)
{
    this->row = row;
    this->col = col;
    matrix[row][col];
}

void Matrix::inputMatrix()
{
    cout << "Enter row: ";
    cin >> this->row;
    cout << "Enter col: ";
    cin >> this->col;
    this->matrix[row][col];
    for (int i = 0; i < this->row; i++)
    {
        for (int j = 0; j < this->col; j++)
        {
            cout << "Enter matrix[" << i << "][" << j << "]: ";
            cin >> this->matrix[i][j];
        }
    }
}

void Matrix::outputMatrix()
{
    for (int i = 0; i < this->row; i++)
    {
        for (int j = 0; j < this->col; j++)
        {
            cout << this->matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

bool Matrix::unitMatrix()
{
    if (row != col)
    {
        return false;
    }
    else
    {
        for (int i = 0; i < this->row; i++)
        {
            if (matrix[i][i] != 1)
            {
                return false;
            }         
        }
        for (int i = 0; i < this->row; i++)
        {
            for (int j = i + 1; j < this->row; j++)
            {
                if (matrix[i][j] != 0 || matrix[j][i] != 0)
                {
                    return false;
                }
            }
        }
        return true;
    }
}
void Matrix::matrixTransposition()
{
    int temp;
    for (int i = 1; i < this->row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    outputMatrix();
}
void Matrix::output(int matrix[100][100], int col, int row)
{
    for (int i = 0; i < this->row; i++)
    {
        for (int j = 0; j < this->col; j++)
        {
            cout << this->matrix[i][j] << "\t";
        }
        cout << endl;
    }
}