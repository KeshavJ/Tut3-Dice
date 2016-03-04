#include "Dice.h"
#include <cmath>
#include <iostream>
#include<ctime>

using namespace std;

Dice::Dice()
{
}

int Dice::roll() {
	srand(time(NULL));
	return rand() % 6 + 1;
}

float average(Dice dice, int numRolls) {
	int sum = 0;

	cout << "Rolls: " << endl;

	for (int i = 1; i <= numRolls; i++)
	{
		int rolls = dice.roll();
		cout << rolls << endl;
		sum += rolls;
	}
	return (float)(sum / numRolls);
}


float average(int numArr[], int arrlength)
 {
	 double sum = 0;
	 for (int i = 0; i < arrlength; i++)
	 {
		 sum = sum + numArr[i];
	 }
	 return (float)(sum / arrlength);
}

Dice::~Dice()
{
}

int main() {
	int temp = 0;
	int rolls = 0;
	int *arrayPointer = new int[rolls];
	char stop = 'a';
	Dice dice;
	
	while (stop != 's') 
	{
		cout << "Enter any character to roll dice. Enter 's' to stop " << endl;
		cin >> stop;
		rolls++;

		temp = dice.roll();
		cout << "Average from Dice rolls : " << average(dice, rolls) << endl;

		arrayPointer[rolls - 1] = temp;
		cout << "Average from array integers: " << average(arrayPointer, rolls) << endl;
	} 
}

