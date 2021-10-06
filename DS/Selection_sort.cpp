//implementation of Selection sort

#include<iostream>
using namespace std; 

main()
{
    int a[100],i,n,p,k,min,loc,temp;
    cout<<"\n       Selection Sort       \n";
    cout<<"\n Enter no of Elements :\n";
    cin>>n;
    cout<<"\n Enter the Elements:\n";
    for (i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(p=1; p<=n-1; p++)
    {
        min=a[p];
        loc=p;
        for(k=p+1; k<=n; k++)
        {
            if (min>a[k])
            {
                min=a[k];
                loc=k;
            }
        }
        temp=a[p];
        a[p]=a[loc];
        a[loc]=temp;
        
    }
     cout<<"\n After Sorting: \n";
        for ( i = 1; i <= n; i++)
        {
            cout<<a[i]<<endl;
        }

}