#include <iostream>

int calculate(int x, int y, char op)
{
    switch (op)
    {
    case '+': return x + y;
    case '-': return x - y;
    case '*': return x * y;
    case '/': return x / y;
    case '%': return x % y;
    default:
        std::cerr << "calculate(): Invalid Operator!\n";
        return 0;
    }
}

int getInt()
{
    int x{};
    std::cin >> x;
    return x;
}

char getChar()
{
    char x{};
    std::cin >> x;
    return x;
}

int main()
{
    std::cout << "Enter an integer: ";
    int num1 { getInt() };

    std::cout << "Enter another integer: ";
    int num2 { getInt() };

    std::cout << "Enter operation (+,-,*,/,%): ";
    char op{ getChar() };

    int result { calculate(num1, num2, op) };
    std::cout << num1 << ' ' << op << ' ' << num2 << " = " << result << '\n';

    return EXIT_SUCCESS;
}