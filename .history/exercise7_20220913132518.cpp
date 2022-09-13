#include<iostream>
using namespace std;

void addElement(int* array, int &n, int index, int elmenet){
    for (int i = n; i >= index;i--){
        array[i] = array[i - 1];
    }
    array[index] = elmenet;
    n++;
}

void che

void output(int* array, int n){
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}

int main(){
    int array[] = {1, 2, 3, 4, 5};
    int n = 5;
    addElement(array, n, 3, 10);
    output(array, n);

    return 0;
}