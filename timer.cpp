#include <iostream>
#include <chrono>
#include "timer.hpp"
#include "iterativeFib.hpp"
#include "recursiveFib.hpp"

using namespace std::chrono;
using std::cout;
using std::endl;
using std::nano;

unsigned long long int iterativeTimer(int n)
{
    auto start = high_resolution_clock::now();
    iterativeFib(n);
    auto stop = high_resolution_clock::now();
    return duration<int, nano>(stop - start).count();
}

unsigned long long int recursiveTimer(int n)
{
    auto start = high_resolution_clock::now();
    recursiveFib(n);
    auto stop = high_resolution_clock::now();
    return duration<int, nano>(stop - start).count();
}