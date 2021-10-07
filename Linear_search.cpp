//implementation of Linear search

#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n,item,s=0;
    cout<<"\n         Linear Search      \n";
    cout<<"\n Enter the Elements: \n";
    cin>>n;
    cout<<"\n Enter the Elements:";
    for ( i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    cout<<"\n Enter the Elements you want to search:";
    cin>>item;
    for ( i = 1; i <= n; i++)
    {
        if (a[i]==item)
        {
            cout<<"\n Data is found at location:"<<i;
            s=1;
            break;
        }
        
    }
    if (s==0)
    {
        cout<<"Data is not found";
    }
    
    
    
}
