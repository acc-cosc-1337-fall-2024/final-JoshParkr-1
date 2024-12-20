//
#include "shooter.h"
#include <iostream>

Shooter::~Shooter() 
{
    for (Roll* roll : rolls) {delete roll;}
    rolls.clear();
}

Roll* Shooter::throw_dice(Die& die1, Die& die2) {
    Roll* roll = new Roll(die1, die2);
    roll->roll_dice();
    rolls.push_back(roll);

    return roll;
}

void Shooter::display_rolled_values()
{
    for (const Roll* roll : rolls) {
        std::cout << roll->roll_value() << "\n";
    }
}