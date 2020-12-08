#include "rubiks.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

char    **find_moves(char **pattern);   //  
void    execute(char **moves);          // 
void    display(char **moves);          // ✓
char    **generate_pattern(void);       // ✓
char    **get_pattern(char *file);      // 
void    execute(char **moves);          // 
void    more_free(char **moves);        // 

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
            display(pattern);
            // display(generate_pattern());
            // execute(moves);
            // more_free(moves);
            write(1, "\n", 1);
            more_free(pattern);
            write(1, "\n", 1);
        }
    }
    return(0);
}

char    **find_moves(char **pattern)
{
    // open();
}

char    **get_pattern(char *file)
{
    // open(file, O_RDONLY);
}

void    execute(char **moves)
{

}

int     generate_random(int l, int r) //this will generate random number in range l and r
{
    return((rand() % (r - l + 1)) + l);
}


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
}

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