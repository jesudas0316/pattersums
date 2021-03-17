#include<iostream>
using namespace std;
int main()
{
    int n,i,j,var1=1,var2=1;
    cin>>n;
    for(i=0;i<n;i++)
    {
     for(j=n-1;j>i;j--)
     {
         cout<<" ";
     }
     for(int k=1;k<=var1;k++)
     {
         cout<<"*";
     }
     var1+=2;
     cout<<"\n";
    }
}
 
