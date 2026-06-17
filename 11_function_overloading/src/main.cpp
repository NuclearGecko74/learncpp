/*
Write a function template named add() that allows the users
 to add 2 values of the same type
*/

#include <iostream>

template <typename T, typename U>
auto add(T x, U y)
{
    return x + y;
}

int main()
{
    std::cout << add(2, 3) << '\n';
	std::cout << add(1.2, 3.4) << '\n';

    return EXIT_SUCCESS;
}