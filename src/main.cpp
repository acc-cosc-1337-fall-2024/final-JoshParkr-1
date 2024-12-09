#include <iostream>
#include "roll.h"

using std::cout;


int main() 
{
	Die die1, die2;
	Roll roll(die1, die2);

	for(int i = 0; i < 20; i++)
	{
		cout << die1.roll() << "\n";
		cout << die2.roll() << "\n";
		roll.roll_dice();
		cout << roll.roll_value() << "\n";
	}

}