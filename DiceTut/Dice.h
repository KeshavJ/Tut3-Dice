#pragma once
class Dice
{
public:
	Dice();
	~Dice();
	int roll();
	float average(Dice dice, int numInt);
	float average(int numArr[], int arrlength);
};

