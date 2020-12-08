#include "../rubiks.h"

int     generate_random(int l, int r) //this will generate random number in range l and r
{
    return((rand() % (r - l + 1)) + l);
}