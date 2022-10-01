/*  A B C D E F G F E D C B A
    A B C D E F   F E D C B A
    A B C D E       E D C B A
    A B C D           D C B A
    A B C               C B A
    A B                   B A
    A                       A   */

#include<stdio.h>

int main()
{

    for (int i = 1; i <= 7; i++)
    {
        int k = 'A';
        for (int j = 1; j <= 7 * 2 - 1; j++)
        {
            if (j <= (7 + 1) - i || j >= (7 - 1) + i)
            {
                printf("%c", k);
                j < 7 ? k++ : k--;
            }
            else
            {
                printf(" ");
                if (j == 4)
                    k--;
            }
        }
        printf("\n");
    }
    return 0;
}

