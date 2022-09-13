#include <iostream>
//#include <vector>
using namespace std;

void output(int arr[][], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}
int main()
{
    int n = 2, m = 3;
    int arr[2][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    return 0;
}