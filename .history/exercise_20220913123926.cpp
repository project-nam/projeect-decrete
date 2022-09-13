#include<iostream>
using namespace std;

int countArray(int array[]){
    cout << sizeof(array) << endl;
    cout << siz
    return sizeof(array) / sizeof(array[0]);
}

int main(){
    int array[10];
    cout << countArray(array) << endl;
    return 0;
}