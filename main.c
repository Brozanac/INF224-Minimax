#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "project.h"


int main()
{
    
    int grid[9] = {-1,-1,1, 0,-1,0, 0,1,-1};

    char *winner;
    print_grid(grid);
    //printf("\n Winner %s \n",win_con(grid));
    
    if(win_con(grid) == 1)
    {
        winner = "Player";
    }
    else if(win_con(grid) == -1)
    {
        winner = "Computer";
    }
    else
    {
        printf("No Winner.");
        return 0;
    }
    printf("\n \n Winner : %s ",winner);
    
    return 0;
}