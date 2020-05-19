#include <random>
#include <iostream>
#include<string>
#include <math.h>


using namespace std;

int main() 
{
	std::random_device random_generator;
	std::uniform_int_distribution<int> distribution(1, 10);
	int random = distribution(random_generator);
	cout << random;

	return 0;
}

int liftoff()
{
	for (int i = 10; i > 0; i--)
	{
		cout << i << "\n";
		if (i == 1)
		{
			cout << "Liftoff!" << "\n";
		}
	}
	return 0;
}

int guessingGame()
{
	int choice;
	int guess = 0;
	int i = 0;

	cout << "EASY - 1, MEDIUM - 2, HARD - 3\n";
	cin >> choice;

	switch (choice)
	{
	case 1:

		while (i < 1)
		{
			std::random_device random_generator;
			std::uniform_int_distribution<int> distribution(1, 25);
			int random = distribution(random_generator);
			cout << "Would you like to play guessing game? YES - 1, NO - 2\n";
			cin >> choice;
			if (choice == 1)
			{
				int j = 0;
				while (j < 1)
				{
					cout << "Guess a number between 1 and 25\n";
					cin >> choice;
					if (choice < random)
					{
						cout << "Nope, it's higher\n";
						guess++;
					}
					else if (choice > random)
					{
						cout << "Nope, it's lower\n";
						guess++;
					}
					else
					{
						guess++;
						cout << "Correct! The number was " << random << "\n";
						cout << "It took you " << guess << " guesses.\n";
						j++;
					}
				}
			}
			else
			{
				i++;
			}
			break;

	case 2:

		while (i < 1)
		{
			std::random_device random_generator;
			std::uniform_int_distribution<int> distribution(1, 50);
			int random = distribution(random_generator);
			cout << "Would you like to play guessing game? YES - 1, NO - 2\n";
			cin >> choice;
			if (choice == 1)
			{
				int j = 0;
				while (j < 1)
				{
					cout << "Guess a number between 1 and 50\n";
					cin >> choice;
					if (choice < random)
					{
						cout << "Nope, it's higher\n";
						guess++;
					}
					else if (choice > random)
					{
						cout << "Nope, it's lower\n";
						guess++;
					}
					else
					{
						guess++;
						cout << "Correct! The number was " << random << "\n";
						cout << "It took you " << guess << " guesses.\n";
						j++;
					}
				}
			}
			else
			{
				i++;
			}
		}
			break;

	case 3 :

		while (i < 1)
		{
			std::random_device random_generator;
			std::uniform_int_distribution<int> distribution(1, 100);
			int random = distribution(random_generator);
			cout << "Would you like to play guessing game? YES - 1, NO - 2\n";
			cin >> choice;
			if (choice == 1)
			{
				int j = 0;
				while (j < 1)
				{
					cout << "Guess a number between 1 and 100\n";
					cin >> choice;
					if (choice < random)
					{
						cout << "Nope, it's higher\n";
						guess++;
					}
					else if (choice > random)
					{
						cout << "Nope, it's lower\n";
						guess++;
					}
					else
					{
						guess++;
						cout << "Correct! The number was " << random << "\n";
						cout << "It took you " << guess << " guesses.\n";
						j++;
					}
				}
			}
			else
			{
				i++;
			}
		}
			break;



	default:
		cout << "Invalid difficulty...\n";
		break;
		
		}
		return 0;	
	}	
}

int rockPaperScissors()
{
	int ties = 0;
	int wins = 0;
	int losses = 0;
	int i = 0;
	while (i < 1)
	{
		int choice;
		cout << "Would you like to play Ro, Sham, Bo? YES - 1, NO - 2\n";
		cin >> choice;
		if (choice == 1)
		{
			std::random_device random_generator;
			std::uniform_int_distribution<int> distribution(1, 3);
			int random = distribution(random_generator);

			cout << "ROCK - 1, PAPER - 2, SCISSORS - 3\n";
			cin >> choice;
			if (choice == random)
			{
				cout << "TIED!\n";
				ties++;
			}
			else if (choice == 1 && random == 2)
			{
				cout << "You lose, paper beats rock.\n";
				losses++;
			}
			else if (choice == 1 && random == 3)
			{
				cout << "You win, rock beats scissors!\n";
				wins++;
			}
			else if (choice == 2 && random == 1)
			{
				cout << "You win, paper beats rock!\n";
				wins++;
			}
			else if (choice == 2 && random == 3)
			{
				cout << "You lose, scissors beats paper.\n";
				losses++;
			}
			else if (choice == 3 && random == 1)
			{
				cout << "You lose, rock beats scissors.\n";
				losses++;
			}
			else if (choice == 3 && random == 2)
			{
				cout << "You win, scissors beats paper!\n";
				wins++;
			}
			
		}
		else
		{
			i++;
		}
	}
	cout << "Wins: " << wins << "\nLosses: " << losses << "\nTies: " << ties << endl;
	return 0;
}