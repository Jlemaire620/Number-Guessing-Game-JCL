#include <cstdlib>
#include <ctime>
#include <iostream>

int main()
{
	bool userReady;
	std::cout << "Hello there. Think of a number between 1 and 100." << std::endl;
	std::cout << "I will try and guess your number. When you're ready to begin, enter 'Ready'." << std::endl;
	std::cin >> userReady;
	srand((unsigned)time(0));
	int number = (rand() % 100) + 1;
	char choice;
	for (int input = 0; input < 1; input++)
	{
		std::cout << "My guess is.." << number << std::endl;
		std::cout << "Was my guess greater than, less than, or equal to your number?" << std::endl;
		std::cout << "Enter 'a' for greater than, 'b' for less than and 'c' for equal to." << std::endl;
		std::cin >> choice;
		if (choice == 'a')
		{
			std::cout << (rand() > number) + 1 << std::endl;
		}
		else if (choice == 'b')
		{
			std::cout << (rand() < number) + 1 << std::endl;
		}
		else if (choice == 'c')
		{
			std::cout << "I guessed correctly!" << std::endl;
		}
	}
	system("pause");
}