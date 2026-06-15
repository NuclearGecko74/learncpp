#include <iostream>
#include "Random.h"

// Forward declarations
void ignoreLine();
void playGame(int guesses, int min, int max);
bool playAgain();
bool handleFailedExtraction();
int getUserGuess(int guess, int min, int max);

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

// Discards remaining input in the buffer
void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

// Runs a single round of the guessing game
void playGame(int guesses, int min, int max)
{
    std::cout << "Let's play a game. I'm thinking of a number between " << min << " and " << max << ". You have " << guesses << " tries to guess what it is.\n";

    int randomNumber { Random::get(min, max) };
    int userGuess {};

    for (int guess {1}; guess <= guesses; guess++)
    {
        userGuess = getUserGuess(guess, min, max);

        if (userGuess < randomNumber)
            std::cout << "Your guess is too low.\n";
        else if (userGuess > randomNumber)
            std::cout << "Your guess is too high.\n";
        else
            break; // correct guess
    }

    if (userGuess == randomNumber)
        std::cout << "Correct! You win!\n";
    else
        std::cout << "Sorry, you lose. The correct number was " << randomNumber << ".\n";
}

// Asks the player if they want to play again, returns true if yes
bool playAgain()
{
    while (true)
    {
        char ch{};
        std::cout << "Would you like to play again (y/n)? ";
        std::cin >> ch;
        ignoreLine();

        switch (ch)
        {
        case 'y': return true;
        case 'n': return false;
        }
    }
    return false;
}

// Returns true if the extraction failed
bool handleFailedExtraction()
{
    if (std::cin.fail())
    {
        if (std::cin.eof())
            std::exit(0); // unrecoverable, exit program

        std::cin.clear();
        ignoreLine();
        return true;
    }
    return false;
}

// Prompts the user for a valid guess within [min, max]
int getUserGuess(int guess, int min, int max)
{
    while (true)
    {
        std::cout << "Guess #" << guess << ": ";
        int x{};
        std::cin >> x;

        if (handleFailedExtraction())
        {
            std::cout << "Invalid Input. Try Again.\n";
            continue;
        }
        if (x < min || x > max)
        {
            std::cout << "Guess out of bounds. Try Again\n";
            continue;
        }

        ignoreLine();
        return x;
    }
}