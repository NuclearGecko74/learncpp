#include <iostream>

double getValue()
{
	std::cout << "Enter a double value: ";
	double d {};
	std::cin >> d;
	return d;
}

char getOperation()
{
	std::cout << "Enter +, -, *, or /: ";
	char d {};
	std::cin >> d;
	return d;
}

void printResult(double x, char operation, double y)
{
	double result {};

	if (operation == '+')
		result = x + y;
	else if (operation == '-')
		result = x - y;
	else if (operation == '*')
		result = x * y;
	else if (operation == '*')
		result = x / y;
	else
		return;

	std::cout << x << ' ' << operation << ' ' << y << " is " << result << '\n';
}

int main()
{
	double num1 { getValue() };
	double num2 { getValue() };

	char operation { getOperation() };

	printResult(num1, operation, num2);

	return EXIT_SUCCESS;
}