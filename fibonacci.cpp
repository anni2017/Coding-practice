// to find the fibonacci series from 0 to upto range

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the range of number "<<endl;
    cin>>n;
    int num1=0;
    int num2=1;
     cout<<num1<<" "<<num2<<" ";
    for (int i = 1; i <=n; i++)
    {
        int nextnum=num1+num2;
       
        cout<<nextnum<<" ";
        num1=num2;
        num2=nextnum;
    }
    
}