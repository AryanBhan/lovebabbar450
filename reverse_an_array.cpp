#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int h=4,l=0;
    while (l<=h)
    {
        swap(arr[l],arr[h]);
        l++;
        h--;
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}