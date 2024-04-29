// program to sort the array 

#include<iostream>
using namespace std;

#define MAX_SIZE 20 // declare macro 

int main()
{
    int n;
    int arr[MAX_SIZE]; // initialize array 
    cout<<"enter the size of array : "<<endl;
    cin>>n;
    cout<<"enter the elements : "<<endl;
    for(int i=0;i<n;i++) // loop for taking input 
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++) // loop for printing the array elements 
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    
    int temp;

    for(int i=0;i<n;i++) // loop for comparision
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i] < arr[j]) // swaping condition
            {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
            }
        }
    }

    cout<<endl;
    cout<<"sorted array : "<<endl; // print the sorted array 

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}