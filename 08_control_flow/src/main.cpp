#include <iostream>
#include "Random.h"

void playGame(int guesses=7, int min=1, int max=100);
bool playAgain();

int main()
{
    constexpr int guesses {7};
    constexpr int min {1};
    constexpr int max {100};
    do 
    {
        playGame(guesses, min, max);
    } while(playAgain());

    return EXIT_SUCCESS;
}

void playGame(int guesses, int min, int max)
{
    std::cout << "Let's play a game. I'm thinking of a number between " << min << " and " << max << ". You have " << guesses << " tries to guess what it is.\n";

    int randomNumber { Random::get(min, max) };
    int userGuess {};

    for (int guess {1}; guess <= guesses; guess++)
    {
        std::cout << "Guess #" << guess << ": ";
        std::cin >> userGuess;

        if (userGuess < randomNumber)
            std::cout << "Your guess is too low.\n";
        else if (userGuess > randomNumber)
            std::cout << "Your guess is too high.\n";
        else
            break;
    }

    if (userGuess == randomNumber)
        std::cout << "Correct! You win!\n";
    else
        std::cout << "Sorry, you lose. The correct number was " << randomNumber << ".\n";
}

bool playAgain()
{
    while (true)
	{
		char ch{};
		std::cout << "Would you like to play again (y/n)? ";
		std::cin >> ch;

		switch (ch)
		{
		case 'y': return true;
		case 'n': return false;
		}
	}
     

    
}