#include "../rubiks.h"

void    display(char **moves)
{
    int i = 0;
    
    while(moves && moves[i])
    {
        write(1, moves[i], strlen(moves[i]));
        i++;
        if(moves[i])
            write(1, ", ", 2);
    }
    write(1, "\n\n", 2);
}