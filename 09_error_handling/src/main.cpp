#include <iostream>
#include <limits>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

bool clearFailedExtraction()
{
    if (std::cin.fail())
    {
        if (std::cin.eof())
        {
            std::exit(0);
        }
        std::cin.clear();
        ignoreLine();
        return true;
    }
    return false;
}

double getDouble()
{
    while (true)
    {
        std::cout << "Enter a decimal number: ";
        double x{};
        std::cin >> x;

        if (clearFailedExtraction())
        {
            std::cout << "Error: Invalid Input. Please Try again.\n";
            continue;
        }
        ignoreLine();
        return x;
    }
}

char getOperator()
{
    while (true)
    {
        std::cout << "Enter one of the following: +, -, *, or /: ";
        char op{};
        std::cin >> op;

        switch (op)
        {
        case '+':
        case '-':
        case '*':
        case '/':
            return op;
        default:
            std::cout << "Oops, that input is invalid.  Please try again.\n";
        }
    }
    
}

void printResult(double x, char operation, double y)
{
    std::cout << x << ' ' << operation << ' ' << y << " is ";

    switch (operation)
    {
    case '+':
        std::cout << x + y << '\n';
        return;
    case '-':
        std::cout << x - y << '\n';
        return;
    case '*':
        std::cout << x * y << '\n';
        return;
    case '/':
        std::cout << x / y << '\n';
        return;
    }
}

int main()
{
    double x{ getDouble() };
    char operation{ getOperator() };
    double y{ getDouble() };

    printResult(x, operation, y);

    return 0;
}