#include "rubiks.h"

int     main(int argc, char **argv)
{
    char **pattern;
    char **moves;
    int i = 0;

    if(argv[1])
    {
        pattern = get_pattern(argv[1]);
        // moves = find_moves(pattern);
        // display(moves);
        more_free(pattern);
        // more_free(moves);
    }
    else
    {
        while(1 == 1)
        {
            pattern = generate_pattern();
            // moves = find_moves(pattern);
            // learn(moves, pattern);
            // more_free(moves);
            more_free(pattern);
        }
    }
    return(0);
}