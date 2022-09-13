#include<iostream>
using namespace std;

void addElement(int* array, int &n, int index, int elmenet){
    n = n + 1;
    for (int i = n; i >= index;i--){
        array[i] = array[i - 1];
    }
    array[index] = elmenet;
}

int main(){
    

    return 0;
}