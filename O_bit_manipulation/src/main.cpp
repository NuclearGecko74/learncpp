#include <iostream>
#include <cstdint>

std::uint8_t getNumber()
{
	std::cout << "Enter a number (0-255): ";
	int x{};
	std::cin >> x;
	return static_cast<std::uint8_t>(x);
}

void printBit(int x, int pow)
{
	std::cout << ((x / pow) % 2);
}

void printBinary(std::uint8_t n)
{
	printBit(n, 128);
	printBit(n, 64);
	printBit(n, 32);
	printBit(n, 16);
	std::cout << ' ';
	printBit(n, 8);
	printBit(n, 4);
	printBit(n, 2);
	printBit(n, 1);
	std::cout << '\n';
}

int main()
{
    std::uint8_t number { getNumber() };
	printBinary(number);

    return EXIT_SUCCESS;
}