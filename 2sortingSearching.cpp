#include<iostream>
using namespace std;
int main()
{
    int n,index;
    int arr[100];

    cout<<"enter the size of arr";
    cin>>n; 
    cout<<"enter the array element :";

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        
    }
        for(int i=0; i<n; i++)
        {
                cout<<arr[i]<<" ";
        }
    

     
}