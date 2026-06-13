#include <iostream>

int main()
{
    int i { 1 };
    while (i <= 5)
    {
        int spaces {};
        while (spaces < (5-i))
        {
            std::cout << "  ";
            spaces++;
        }
        

        int j { i };
        while (j >= 1)
        {
            std::cout << j-- << ' ';
        }
        std::cout << '\n';
        i++;
    }
    
    return 0;
}