#include<iostream>
#include<array>
using namespace std;

int main(){
    int array[10];
    cout << sizeof(array) / sizeof(int) << endl;
    cout << countArray(array) << endl;
    return 0;
}