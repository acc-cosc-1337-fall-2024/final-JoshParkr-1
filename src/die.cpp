//
#include "die.h"
#include <cstdlib>

int Die::roll()
{
    int face = rand() % 6 + 1;
    return face;
}