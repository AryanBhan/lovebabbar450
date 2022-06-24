#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {-1,3,4,-2,-5};
    int p = 0, l = 0,high=4;
    while (l<=high)
    {   
        if(arr[l]<0)
        {
            l++;
        }
        else if(arr[high]>0)
        {
            high--;
        }
        else
            swap(arr[l++],arr[high--]);
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}