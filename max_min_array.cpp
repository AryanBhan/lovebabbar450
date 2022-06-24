#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=4;
    int min=INT_MAX;
    int max=INT_MIN;
    for (int  i = 0; i < n; i++)
    {
        if(arr[i]<min)
            min=arr[i];
        if(arr[i]>max)
            max=arr[i];
    }
    cout<<"Max Element:"<<max<<"\n"<<"Min element:"<<min;
    
    return 0;
}