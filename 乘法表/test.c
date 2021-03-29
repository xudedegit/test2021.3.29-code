#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i < 10; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i == 1 || i == 2 || i == 3 || (i == 4 && j == 1) || (i == 4 && j == 2)
                || (i == 5 && j == 1) || (i == 6 && j == 1) || (i == 7 && j == 1) || (i == 8 && j == 1)
                || (i == 9 && j == 1))
            {
                printf("%d*%d= %d", j, i, j * i);
            }
            else {
                printf("%d*%d=%d", j, i, j * i);
            }

            printf(" ");
        }
        printf("\n");
    }
    return 0;
}