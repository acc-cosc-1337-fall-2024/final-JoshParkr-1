//
#include "die.h"

#ifndef ROLL_H
#define Roll_H

class Roll
{

public:

    Roll(Die& die1, Die& die2);
    void roll_dice();
    int roll_value() const;

private:
    Die& die1;
    Die& die2;
    int rolled_value = 0;
    
};

#endif