#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    int l = arr[n - 1];
    for (int i = n - 1; i >= 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = l;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}