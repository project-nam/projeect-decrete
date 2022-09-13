#include<iostream>
using namespace std;

double countArray(int array[]){
    return sizeof(array) / sizeof(array[]);
}

int main(){
    int array[10];
    cout << countArray(array) << endl;
    return 0;
}