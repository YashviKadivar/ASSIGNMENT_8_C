/* Write a program to draw the following patterns:

    **********
    ****  ****
    ***    ***
    **      **
    *        *          */

#include<stdio.h>

int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(i>1)
            {
                if(j>=7-i && j<=4+i)
                    printf(" ");
                else
                    printf("*");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;

}
