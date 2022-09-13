#include "Matrix.h"

Matrix::Matrix(){
}

Matrix::Matrix(int row, int col){
    this->col = col;
    this->row = row;
    matrix[row][col];
} 

void Matrix::inputMatrix(){
    cout << "Enter row: ";
    cin >>this->row;
    cout<<"Enter col: ";
    cin>> this->col;
    this->matrix[row][col];
    for(int i = 0; i < this->row;i++){
        for(int j = 0; j < this->col;j++){
            cout << "Enter matrix["<<i<<"]["<<j<<"]: ";
            cin >> this->matrix[i][j];
        }
    }
}

void Matrix::outputMatrix(){
    for(int i = 0; i < this->row;i++){
        for(int j = 0; j < this->col;j++){
            cout << this->matrix[i][j] << "\t"
        }
        cout << endl;
    }
}

bool Matrix::unitMatrix(){

}