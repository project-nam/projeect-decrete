#include<iostream>
using namespace std;

void addElement(int* array, int &n, int index, int elmenet){
    n = n + 1;
    for (int i = n; i >= index;i--){
        array[i] = array[i - 1];
    }
    array[index] = elmenet;
}

void output(int* array, int n){
    for (size_t i = 0; i < count; i++)
    {
        /* code */
    }
    
}

int main(){
    int array[] = {1, 2, 3, 4, 5};


    return 0;
}