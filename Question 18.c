/*
        *
       ***
      *****
     *******
    *********
     *******
      *****
       ***
        *       */

#include<stdio.h>

int main()
{
   int i, j,n=9;



    for (i = 1; i <= n; i++)
    {
        if (i <= n / 2 + 1)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j >= n/2+2 - i && j <= n/2 + i)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                if (j >= i-n/2 && j <=(n-(i-(n/2+1))))
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}
