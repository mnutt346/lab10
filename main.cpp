/**************************************************************************************
** Program name: main.cpp
** Author: Michael Nutt
** Date: 12/2/2019
** Description: Main function for Lab 10.
**************************************************************************************/
#include <iostream>
#include "timer.hpp"

using std::cout;
using std::endl;

int main()
{
    cout << "Iterative elapsed times for N inputs:" << endl
         // Get duration of nth number
         << "10: " << iterativeTimer(10) << " nanoseconds" << endl
         << "1000: " << iterativeTimer(1000) << " nanoseconds" << endl
         << "201000: " << iterativeTimer(201000) << " nanoseconds" << endl
         << "300000: " << iterativeTimer(300000) << " nanoseconds" << endl
         << "500000: " << iterativeTimer(500000) << " nanoseconds" << endl
         << "1000000: " << iterativeTimer(1000000) << " nanoseconds" << endl
         << endl

         << "Recursive elapsed times for N inputs:" << endl
         << "10: " << recursiveTimer(10) << endl
         << "20: " << recursiveTimer(20) << endl
         << "25: " << recursiveTimer(25) << endl
         << "30: " << recursiveTimer(30) << endl
         << "35: " << recursiveTimer(35) << endl
         << "40: " << recursiveTimer(40) << endl
         << endl;

    return 0;
}