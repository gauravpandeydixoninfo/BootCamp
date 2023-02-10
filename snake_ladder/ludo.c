#include<stdio.h>
int main()
{
    int snake_start[5], snake_end[5], ladder_start[5], ladder_end[5], point=0, player=0;
    printf("\n Welcome to ludo\n");
    printf("\n Please enter the starting and ending point of 5 snakes and starting shuould be greater than ending of snake=");
    for(int i=0; i<5; i++)
    {
       scanf("%d", &snake_start[i]); 
       scanf("%d", &snake_end[i]);
    }

    printf("\n Please enter the starting and ending point of 5 ladders=");
    for(int i=0; i<5; i++)
    {
       scanf("%d", &ladder_start[i]); 
       scanf("%d", &ladder_end[i]);
    }
    alter: printf("\n You are at=%d",player);
    printf("\n enter the element between 1 to 6\n");
    scanf("%d", &point);
    if((player+point)==100)
    {
        printf("\n******You win*****");
    }
    else  if(player+point>100)
    { 
    printf("\n It is a bigger number to reach 100 now try with less number");
    }
    else
    {
    player=player+point;
    for(int i=0; i<5; i++)
    {
        if(snake_start[i]==player)
        {
        player=snake_end[i];
        break;
        }
    }
       
    for(int i=0; i<5; i++)
    {
        if(ladder_start[i]==player)
        {
        player=ladder_end[i];
        break;
        }
    }
    goto alter;
    }
    return 0;
}   

          


