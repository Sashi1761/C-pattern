#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int originaln = n;
    int sum = 0;
    while (n>0)

    {
   
           int lastdigit = n%10;
             sum = sum+ pow(lastdigit , 3);
             n = n/10;
    }
    
    if(sum = originaln)
    {
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not Armstrong number"<<endl;
    }
}