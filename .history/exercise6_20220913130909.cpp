#include<iostream>
using namespace std;

boolean findElement(int* array, int n, int element){
    for (int i = 0; i < n;i++){
        if(*(array+i) == element){
            return true;
        }
    }
}

int main(){

    return 0;
}