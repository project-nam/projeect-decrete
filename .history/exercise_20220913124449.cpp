#include<iostream>
using namespace std;

int countArray(int arra[]){
    return begin(array) - end(array);
}

int main(){
    int array[10];
    cout << sizeof(array) / sizeof(int) << endl;
    cout << countArray(array) << endl;
    return 0;
}