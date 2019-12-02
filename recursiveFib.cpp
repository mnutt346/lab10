#include "recursiveFib.hpp"

unsigned long long int recursiveFib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    return recursiveFib(n - 1) + recursiveFib(n - 2);
}