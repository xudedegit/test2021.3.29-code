#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int i, j;
    int input;
    scanf("%d", &input);
    for (i = 1; i <= input; i++)
    {
        static sum = 1;
        for (j = 1; j <= i; j++)
        {
            printf("%4d", sum);
            sum++;
        }
        printf("\n");
    }
    return 0;

}