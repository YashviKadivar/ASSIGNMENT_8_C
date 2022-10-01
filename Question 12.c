/* Write a program to draw the following patterns:

    A B C D C B A
      A B C B A
        A B A
          A             */

#include<stdio.h>

int main()
{
    int i,j,k;

    for(i=1;i<=5;i++)
    {
        k='A' ;

        for(j=1;j<=9;j++)
        {
            if(j>=i && j<=8-i)
            {
                printf("%c",k);

                    if(j<4)
                        k++;
                    else
                        k--;
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

