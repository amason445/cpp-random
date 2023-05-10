// SumOfPrimesBetween.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdio>
#include "Header.h"

int main()
{
    int x;
    int endVal = 1000;
    for (x = 1; x <= endVal; x++) {
        int y = sumOfPrimesBetween(x);
        printf("%d, ", y);
    }
 
}
