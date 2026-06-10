#include <iostream>

int getInt()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    return x;
}

// Rewrite this function using operator! instead of operator==.
constexpr bool isEven(int x)
{
    return !(x % 2);
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