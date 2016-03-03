#include "Dice.h"
#include <cmath>
#include <iostream>
#include<ctime>

using namespace std;

Dice::Dice()
{
	srand(time(NULL));
}

int Dice::roll() {
	return rand() % 6 + 1;
}


double average(Dice dice, int numRolls) {
	double sum = 0;

	cout << "Rolls: " << endl;

	for (int i = 1; i <= numRolls; i++)
	{
		int rolls = dice.roll();
		cout << rolls << endl;
		sum += rolls;
	}
	return (sum / numRolls);
}


double average(int numArr[], int numInt)
 {
	 double sum = 0;
	 for (int i = 0; i < numInt; i++)
	 {
		 sum = sum + numArr[i];
	 }
	 return (sum / numInt);
}

Dice::~Dice()
{
}

