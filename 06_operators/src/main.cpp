/*
Write a program that asks the user to input an integer, and tells the user whether the number is even or odd. Write a constexpr function called isEven() that returns true if an integer passed to it is even, and false otherwise. Use the remainder operator to test whether the integer parameter is even. Make sure isEven() works with both positive and negative numbers.
*/

#include <iostream>

int getInt()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    return x;
}

constexpr bool isEven(int x)
{
    return x % 2 == 0;
}

int main()
{
	int x { getInt() };

    if (isEven(x))
        std::cout << x << " is even\n";
    else
        std::cout << x << " is odd\n";

    return EXIT_SUCCESS;
}