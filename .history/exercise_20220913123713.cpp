#include<iostream>
using namespace std;

double countArray(int array){
    return sizeof(array) / sizeof(int);
}

int main(){
    int array[10];
    cout << countArray(array) << endl;
    return 0;
}