/* Write a program to draw the following patterns:

        1 2 3 4 3 2 1
        1 2 3   3 2 1
        1 2       2 1
        1           1       */

#include<stdio.h>

int main()
{
    int i,j;

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j<=5-i || j>=3+i)
            {
                if(j==1 || j==7)
                    printf("%d",1);
                else    if(j==2 || j==6)
                    printf("%d",2);
                else    if(j==3 || j==5)
                    printf("%d",3);
                else
                    printf("%d",4);
            }
            else
            {
                 printf(" ");
            }

        }

        printf("\n");
    }

    return 0;
}

