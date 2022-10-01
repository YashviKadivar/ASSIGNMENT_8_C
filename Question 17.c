/* Write a program to draw the following patterns:

*********
 *     *
  *   *
   * *
    *   */

#include<stdio.h>

int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<9;j++)
        {
            if( i==4+j || j==i || j==9-i ||i==5)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}


