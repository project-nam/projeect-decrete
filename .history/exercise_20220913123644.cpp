#include<iostream>
using namespace std;

int countArray(int* array){
    return sizeof(array) / sizeof(int);
}

int main(){
    int array[10];
    cout << countArray(array);
    return 0;
}