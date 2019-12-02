/**************************************************************************************
** Program name: iterativeFib.hpp
** Author: Michael Nutt
** Date: 12/2/2019
** Description: Implementation file and definition for the iterativeFib function.
** Algorithm found @: https://dev.to/khalilsaboor/fibonacci-recursion-vs-iteration--474l
**************************************************************************************/
#include <iostream>
#include "IterativeFib.hpp"

using std::cout;
using std::endl;

unsigned long long int iterativeFib(int n)
{
    unsigned long long int nMinusTwo = 0;
    unsigned long long int nMinusOne = 0;
    unsigned long long int current = 1;

    for (int i = 1; i < n; i++)
    {
        nMinusTwo = nMinusOne;
        nMinusOne = current;
        current = nMinusOne + nMinusTwo;
    }

    return current;
}