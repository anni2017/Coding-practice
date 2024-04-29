#include<iostream>
using namespace std;

#define MAX_SIZE 50  // deine macros


int Sortarr(int arr[],int n) // function for sort array
{
    int temp;

    for(int i=0;i<n;i++) // loops for comparing
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]<arr[j]) // swaping condition
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    
  return 0;
}

int print(int arr[],int n) // function to print array
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}



int main()
{
    int arr[MAX_SIZE]; // initialize array
    int size;

    cout<<"enter the size of array : "<<endl;
    cin>>size;

    for(int i=0;i<size;i++) // take inpuy array elements
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++) // print array elements
    {
        cout<<arr[i]<<" ";
    }
     
    cout<<endl; 
    cout<<"sorted array "<<endl;
    Sortarr(arr,size); // call sortarray function
    print(arr,size);   // call print function
    return 0;

}