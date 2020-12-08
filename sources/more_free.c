#include "../rubiks.h"

void    more_free(char **moves)
{
    int i = 0;
    if(!moves)
        return;
    while(moves[i] && moves[i] != NULL)
        free(moves[i++]);
    if(moves)
        free(moves);
}