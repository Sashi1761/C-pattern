#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j;
    for (i = 1; i <=n; i++)
    {
        for(int k=n-1; k>0;k--)
        {
               cout<<" ";
        }
    for ( j=1;j<=i; j++)
    {
        /* code */
        cout<<"*";
    }
    cout<<endl;
    }
    
}