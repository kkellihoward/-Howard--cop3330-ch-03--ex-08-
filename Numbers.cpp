/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Kelli Howard
 */

#include <iostream>
using namespace std;

int main() 
{
    int x;
    
    cout << "Enter a even or odd number:\n";
    cin >> x;
    if(x % 2== 0)
    {
        cout<< "The number " << x << " is even";
    }
    else
    {
        cout << "The number " << x << " is odd";
    } 
    return 0;
}