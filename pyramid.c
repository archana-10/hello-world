/*
Program to print half pyramid using *
*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *
*/



#include <stdio.h>
int main()
{
    int i, j, rows;

    //printf("Enter number of rows: ");
    //scanf("%d",&rows);
	
	rows = 7;

    for(i=1; i<=rows; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
