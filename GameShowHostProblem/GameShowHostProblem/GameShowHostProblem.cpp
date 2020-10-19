#include <iostream>
#include <stdlib.h>
#include <time.h>

float iterations = 1000;

void RunRandomSecondChoice()
{
	float door1CarCount = 0;
	float door2CarCount = 0;
	float door3CarCount = 0;
	float correctChoices = 0;
	float switchs = 0;
	std::cout << "Random Switch" << std::endl;

	for (int i = 0; i < iterations; i++)
	{
		//Put car behind door
		int doorWithCarBehind = rand() % 3 + 1;
		if (doorWithCarBehind == 1)
			door1CarCount++;
		if (doorWithCarBehind == 2)
			door2CarCount++;
		if (doorWithCarBehind == 3)
			door3CarCount++;

		//Choice Door
		int firstDoorChoice = rand() % 3 + 1;

		//Switch or stay
		int choice = rand() % 2 + 1;

		if (choice == 1)
		{
			switchs++;
			//Remove Door and Switch
			int doorRemoved = 0;
			int newDoor = 0;
			if (doorWithCarBehind == 1 && firstDoorChoice == 1)
			{
				doorRemoved = 2;
				newDoor = 3;
			}
			if (doorWithCarBehind == 1 && firstDoorChoice == 2)
			{
				doorRemoved = 3;
				newDoor = 1;
			}
			if (doorWithCarBehind == 1 && firstDoorChoice == 3)
			{
				doorRemoved = 2;
				newDoor = 1;
			}

			if (doorWithCarBehind == 2 && firstDoorChoice == 1)
			{
				doorRemoved = 3;
				newDoor = 2;
			}
			if (doorWithCarBehind == 2 && firstDoorChoice == 2)
			{
				doorRemoved = 1;
				newDoor = 3;
			}
			if (doorWithCarBehind == 2 && firstDoorChoice == 3)
			{
				doorRemoved = 1;
				newDoor = 2;
			}

			if (doorWithCarBehind == 3 && firstDoorChoice == 1)
			{
				doorRemoved = 2;
				newDoor = 3;
			}
			if (doorWithCarBehind == 3 && firstDoorChoice == 2)
			{
				doorRemoved = 1;
				newDoor = 3;
			}
			if (doorWithCarBehind == 3 && firstDoorChoice == 3)
			{
				doorRemoved = 1;
				newDoor = 2;
			}
			//Check if right
			if (newDoor == doorWithCarBehind)
				correctChoices++;
		}
		else
		{
			//Check if right
			if (firstDoorChoice == doorWithCarBehind)
				correctChoices++;
		}

	}
	std::cout << "Iteraions: " << iterations << std::endl;
	std::cout << "Door 1 Car Count: " << door1CarCount / iterations * 100 << "%" << std::endl;
	std::cout << "Door 2 Car Count: " << door2CarCount / iterations * 100 << "%" << std::endl;
	std::cout << "Door 3 Car Count: " << door3CarCount / iterations * 100 << "%" << std::endl;
	std::cout << "Switchs: " << switchs << std::endl;
	std::cout << "Correct Choices:" << correctChoices << std::endl;
	std::cout << std::endl;
}

void RunAlwaysStay()
{
	float door1CarCount = 0;
	float door2CarCount = 0;
	float door3CarCount = 0;
	float correctChoices = 0;
	std::cout << "Always Stay" << std::endl;
	srand(time(NULL));

	for (int i = 0; i < iterations; i++)
	{
		//Put car behind door
		int doorWithCarBehind = rand() % 3 + 1;
		if (doorWithCarBehind == 1)
			door1CarCount++;
		if (doorWithCarBehind == 2)
			door2CarCount++;
		if (doorWithCarBehind == 3)
			door3CarCount++;

		//Choice Door
		int firstDoorChoice = rand() % 3 + 1;

		//Check if right
		if (firstDoorChoice == doorWithCarBehind)
			correctChoices++;
	}
	std::cout << "Iteraions: " << iterations << std::endl;
	std::cout << "Door 1 Car Count: " << door1CarCount / iterations * 100 << "%" << std::endl;
	std::cout << "Door 2 Car Count: " << door2CarCount / iterations * 100 << "%" << std::endl;
	std::cout << "Door 3 Car Count: " << door3CarCount / iterations * 100 << "%" << std::endl;
	std::cout << "Correct Choices:" << correctChoices << std::endl;
	std::cout << std::endl;
}

void RunAlwaysSwitch()
{
	float door1CarCount = 0;
	float door2CarCount = 0;
	float door3CarCount = 0;
	float correctChoices = 0;
	std::cout << "Always Switch" << std::endl;

	for (int i = 0; i < iterations; i++)
	{
		//Put car behind door
		int doorWithCarBehind = rand() % 3 + 1;
		if (doorWithCarBehind == 1)
			door1CarCount++;
		if (doorWithCarBehind == 2)
			door2CarCount++;
		if (doorWithCarBehind == 3)
			door3CarCount++;

		//Choice Door
		int firstDoorChoice = rand() % 3 + 1;

		//Remove Door and Switch
		int doorRemoved = 0;
		int newDoor = 0;
		if (doorWithCarBehind == 1 && firstDoorChoice == 1)
		{
			doorRemoved = 2;
			newDoor = 3;
		}
		if (doorWithCarBehind == 1 && firstDoorChoice == 2)
		{
			doorRemoved = 3;
			newDoor = 1;
		}
		if (doorWithCarBehind == 1 && firstDoorChoice == 3)
		{
			doorRemoved = 2;
			newDoor = 1;
		}

		if (doorWithCarBehind == 2 && firstDoorChoice == 1)
		{
			doorRemoved = 3;
			newDoor = 2;
		}
		if (doorWithCarBehind == 2 && firstDoorChoice == 2)
		{
			doorRemoved = 1;
			newDoor = 3;
		}
		if (doorWithCarBehind == 2 && firstDoorChoice == 3)
		{
			doorRemoved = 1;
			newDoor = 2;
		}

		if (doorWithCarBehind == 3 && firstDoorChoice == 1)
		{
			doorRemoved = 2;
			newDoor = 3;
		}
		if (doorWithCarBehind == 3 && firstDoorChoice == 2)
		{
			doorRemoved = 1;
			newDoor = 3;
		}
		if (doorWithCarBehind == 3 && firstDoorChoice == 3)
		{
			doorRemoved = 1;
			newDoor = 2;
		}

		//Check if right
		if (newDoor == doorWithCarBehind)
			correctChoices++;
	}
	std::cout << "Iteraions: " << iterations << std::endl;
	std::cout << "Door 1 Car Count: " << door1CarCount / iterations * 100 << "%" << std::endl;
	std::cout << "Door 2 Car Count: " << door2CarCount / iterations * 100 << "%" << std::endl;
	std::cout << "Door 3 Car Count: " << door3CarCount / iterations * 100 << "%" << std::endl;
	std::cout << "Correct Choices:" << correctChoices << std::endl;
	std::cout << std::endl;
}

int main()
{
	srand(time(NULL));

	RunAlwaysStay();
	RunAlwaysSwitch();
	RunRandomSecondChoice();
}
