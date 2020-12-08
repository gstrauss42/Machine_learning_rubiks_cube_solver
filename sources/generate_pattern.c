#include "../rubiks.h"

char    **generate_pattern(void)
{

    char    **possible_moves = (char **)malloc(sizeof(char **) * 19 + 1);
    int     reps = generate_random(10, 100);
    char    **pattern = (char **)malloc(sizeof(char **) * (reps + 1));
    int     count = 0;

    possible_moves[0] = strdup("A0");
    possible_moves[1] = strdup("A1");
    possible_moves[2] = strdup("B0");
    possible_moves[3] = strdup("B1");
    possible_moves[4] = strdup("C1");
    possible_moves[5] = strdup("C2");
    possible_moves[6] = strdup("D0");
    possible_moves[7] = strdup("D1");
    possible_moves[8] = strdup("E0");
    possible_moves[9] = strdup("E1");
    possible_moves[10] = strdup("F0");
    possible_moves[11] = strdup("F1");
    possible_moves[12] = strdup("H0");
    possible_moves[13] = strdup("H1");
    possible_moves[14] = strdup("I0");
    possible_moves[15] = strdup("I1");
    possible_moves[16] = strdup("J0");
    possible_moves[17] = strdup("J1");
    possible_moves[18] = NULL;
    while(count < reps)
    {
        pattern[count] = strdup(possible_moves[generate_random(0, 17)]);
        count++;;
    }
    pattern[count] = NULL;
    return(pattern);
}