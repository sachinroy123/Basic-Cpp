#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(a==0)
    return b;
    return gcd(b%a,a);
}

long long int lcm(long long int a, long long int b)
{
    return ((a*b)/gcd(a,b));
}
int main()
{
    cout<<"LCM : "<<lcm(25,15)<<endl;
}