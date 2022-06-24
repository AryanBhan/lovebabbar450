#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 4;
    int k;
    cin >> k;
    set<int> a(arr, arr + n);
    set<int>::iterator itr = a.begin();
    advance(itr, k - 1);
    cout << "Min at Kth Position:" << *itr << "\n";
    itr = a.begin();
    advance(itr, 5 - k);
    cout << "Max at Kth Position:" << *itr;

    return 0;
}