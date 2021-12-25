// Euler_040_CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
// If dn represents the nth digit of the fractional part, find the value of the following expression.
// d1 × d10 × d100 × d1000 × d10000 × d100000 × d1000000

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string str;
    
    int n = 200000;
    for (int i = 1; i < n; i++)
    {
        string temp = to_string(i);
        str = str + temp;
    }
    
    int ans = 1;
    int numChar = 0;
    int arr[7] = {1, 10, 100, 1000, 10000, 100000, 1000000 };
    for (int j = 0; j < size(arr); j++)
    {
        numChar = str[arr[j] - 1] - '0';
        ans = ans*numChar;
        cout << str[arr[j] - 1] << endl;
    }
    cout << ans << endl;
    
}