//implementation of Bubble sort

#include<iostream>
using namespace std;

main()
{
    int a[100],i,n,p,j,temp;
    cout<<"\n        Bubble Sort      \n";
    cout<<"\n Enter the no. of Elements: \n";
    cin>>n;
    cout<<"\n Enter the elements: \n";
    for ( i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    for ( p = 1; p <= n-1; p++)
    {
        for ( j = 1; j <= n-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
        
    }
    cout<<"\n After Sorting: \n";
    for ( i = 1; i <= n; i++)
    {
        cout<<a[i]<<"\t";
    }
    
    
    
}