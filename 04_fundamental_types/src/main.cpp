#include <iostream>

static constexpr double GRAVITY { 9.8f };

double getTowerHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double  x {};
	std::cin >> x;
	return x;
}

double calculateBallHeight(double height, int seconds)
{
	double distance_fallen { GRAVITY * (seconds * seconds) / 2.0 };
	double currentHeight { height - distance_fallen };

	if (height < 0.0)
	{
		return 0.0;
	}

	return currentHeight;
}

void printBallHeight(double height, int seconds)
{
	if (height > 0)
	{
		std::cout << "At " << seconds << " seconds, the ball is at height: " << height << " meters\n";
	}
	else
	{
		std::cout << "At 5 seconds, the ball is on the ground.\n";
	}
}

void calculateAndPrintBallHeight(double height, int seconds)
{
	double ballHeight { calculateBallHeight(height, seconds) };
	printBallHeight(ballHeight, seconds);
}

int main()
{
	double towerHeight { getTowerHeight() };

	calculateAndPrintBallHeight(towerHeight, 0);
	calculateAndPrintBallHeight(towerHeight, 1);
	calculateAndPrintBallHeight(towerHeight, 2);
	calculateAndPrintBallHeight(towerHeight, 3);
	calculateAndPrintBallHeight(towerHeight, 4);
	calculateAndPrintBallHeight(towerHeight, 5);

	return EXIT_SUCCESS;
}