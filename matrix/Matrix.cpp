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
    int temp[col][row];
    for (int i = 0; i < this->col; i++)
    {
        for (int j = 0; j < this->row; j++)
        {
            temp[i][j] = matrix[j][i];
        }
    }
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << temp[i][j] << "\t";
        }
        cout << endl;
    }
}

void Matrix::countMatrix()
{
   
}
void Matrix::sortMatrixAsc()
{
    for (int i = 0; i < this->row; i++)
    {
        for (int j = 0; j < this->col-1; j++)
        {
            for (int k = this->col-1; k > j; k++)
            {
                if (matrix[i][j] < matrix[i][j - 1])
                {
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[i][j-1];
                    matrix[i][j-1] = temp;
                }
            }
        }
    }
    outputMatrix();
}
