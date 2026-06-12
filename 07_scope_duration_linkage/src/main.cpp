#include <iostream>

/*
Write a program that asks the user to enter two integers, one named smaller,
the other named larger. If the user enters a smaller value for the second integer,
use a block and a temporary variable to swap the smaller and larger values. 
Then print the values of the smaller and larger variables. Add comments to your code 
indicating where each variable dies. Note: When you print the values, smaller should 
hold the smaller input and larger the larger input, no matter which order they were entered in.
*/

int getInt()
{
    int x{};
    std::cin >> x;
    return x;
}

void printSmallerLarger(int smaller, int larger)
{
    if (smaller > larger)
    {
        std::cout << "Swapping the values...\n";
        int temp {smaller};
        smaller = larger;
        larger = temp;
    }
    std::cout << "The smaller value is " << smaller << '\n';
    std::cout << "The larger value is " << larger << '\n';
}

int main() 
{
    std::cout << "Enter an integer: ";
    int smaller { getInt() };

    std::cout << "Enter a larger integer: ";
    int larger { getInt() };

    printSmallerLarger(smaller, larger);

    return 0;
}
