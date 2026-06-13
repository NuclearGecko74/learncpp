#include <iostream>

/*
Write a function named sumTo() that takes an integer 
parameter named value, and returns the sum of all the
 numbers from 1 to value.
*/

int sumTo(int x)
{
    int sum{};
    for(int i {1}; i <= x; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    std::cout << sumTo(5) << '\n';    
    return 0;
}