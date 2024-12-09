//
#include "die.h"
#include <cstdlib>

int Die::roll()
{
    int face = rand() % sides + 1;
    return face;
}