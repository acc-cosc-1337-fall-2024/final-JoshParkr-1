//
#include "roll.h"

Roll::Roll(Die& die1, Die& die2) : die1(die1), die2(die2) {}

void Roll::roll_dice() 
{
    rolled_value = die1.roll() + die2.roll();
}

int Roll::roll_value() const
{
    return rolled_value;
}