#include <iostream>
#include <string>

std::string getName()
{
    std::string fullName {};

    std::cout << "Enter your full name: ";
    std::getline(std::cin >> std::ws, fullName);

    return fullName;
}

int getAge()
{
    int age{};

    std::cout << "Enter your age: ";
    std::cin >> age;

    return age;
}

int main()
{
    std::string name { getName() };
    int age { getAge() };

    int nameLength { static_cast<int>(name.length()) };

    std::cout << "Your age + length of name is: " << age + nameLength << '\n'; 

    return EXIT_SUCCESS;
}