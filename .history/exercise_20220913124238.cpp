#include<iostream>
using namespace std;

int countArray(intarray){
    cout << sizeof(array) << endl;
    cout << sizeof(int) << endl;
    return sizeof(array) / sizeof(array[0]);
}

int main(){
    int array[10];
    cout << sizeof(array) / sizeof(int) << endl;
    cout << countArray(array) << endl;
    return 0;
}