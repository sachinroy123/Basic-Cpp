// Print The Prime Numbers From 1 To N, Where N Is An Input


#include<iostream>
using namespace std;
bool isPrime(int);

int main()
{
    int n;
    cout << "Enter the Number For N: ";
    cin >> n;
    cout << "The Prime Numbers From 1 To""\t" << n << endl;
    for (int i = 1; i <= n; i++)
    {
        int isPrimeNumber = isPrime(i);
        if (isPrimeNumber == true)
        {
            cout << i <<"\t";
        }
        
    }
    
    return 0;
}

// This Function is identifying the number is prime or not

bool isPrime(int n)
{
    bool flag = false;
    for (int i = 2; i <= n/2; i++)
    {
        if (n%i == 0)
        {
            flag = true;
            break;
        }
        
    }
    if (flag == false && n > 1)
    {
        // Number is prime
        return true;
    }
    
    // Number is not a prime
    return false;
}