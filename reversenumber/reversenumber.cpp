// reversenumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int number, resto   ;
    cout << "insert number ";
    cin >> number ;
     
    resto=0;
    while (number!=0) {
        resto *= 10;
        
        resto = resto + number % 10;
        number = number / 10;
        
    }
    cout << resto;


}
