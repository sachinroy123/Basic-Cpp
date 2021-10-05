// Program To Print The Sum Of Digit Of The given number

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char n[20];
    cout << "Enter the Number: ";
    cin >> n;
    cout << "The sum of digit of the given number is: ";
    int len = strlen(n);
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += n[i] - '0';    // This line converts and seperate the string to number
    }
    
    cout << sum;
    return 0;
}