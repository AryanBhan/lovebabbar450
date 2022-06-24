#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {0, 1, 2, 0, 2};
    int l = 0, mid = 0, high = 4;
    for (int i = 0; i < 5; i++)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[l++], arr[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid], arr[high--]);
            break;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}