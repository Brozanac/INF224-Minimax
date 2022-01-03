#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "project.h"

int i;
int j;

void print_grid(int grid[9])
{
    for(i = 0;i<9;i++)
    {
       if(grid[i] == 1)
        {
            printf ("|X|");
        }
        else if (grid[i] == -1)
        {
            printf ("|O|");
        }
        else
        {
            printf ("| |");
        } 
        if(i == 2 || i== 5 || i == 8)
        {   
            printf("\n");
            printf("---------");
            printf("\n");
        }
    }

}

int win_con(int const grid[9])
{
    //MUST FIX
    unsigned wins[8][3] = {{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};
    int i;
    for(i = 0; i < 8; ++i) 
    {
        if(grid[wins[i][0]] != 0 && grid[wins[i][0]] == grid[wins[i][1]] && grid[wins[i][0]] == grid[wins[i][2]])
        {
            return grid[wins[i][2]];
        }
    }
    return 0;
}
