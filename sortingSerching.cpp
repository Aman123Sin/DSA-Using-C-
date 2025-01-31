#include<iostream>
using namespace std;
int main()
{
    int index;
    int arr[100];
    int n;
    cout<<"enter the size of arr";
    cin>>n; 
    cout<<"enter the array element :";

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];   
    }
    for(int i=0; i<n; i++)
    {
        index=i;
        for(int j=i+1; j<=n; j++)
        {
            if(arr[j]<arr[index])
            index=j;
        }
        swap(arr[i],arr[index]);
    } 

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}