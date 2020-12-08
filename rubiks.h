#ifndef RUBIKS_H
# define RUBIKS_H

#include "rubiks.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

char    **find_moves(char **pattern);   //  
void    learn(char **moves);          // 
void    display(char **moves);          // ✓
char    **generate_pattern(void);       // ✓
char    **get_pattern(char *file);      // 
void    learn(char **moves);          // 
void    more_free(char **moves);        // 
int     generate_random(int l, int r);  // ✓
#endif