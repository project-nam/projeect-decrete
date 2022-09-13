#include<iostream>
using namespace std;

double countArray(double array[]){
    return sizeof(array) / sizeof(array[0]);
}

int main(){
    int array[10];
    cout << countArray(array) << endl;
    return 0;
}