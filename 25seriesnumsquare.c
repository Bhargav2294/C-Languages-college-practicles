#include <stdio.h>

// series like 1^2+2^2+3^2+……+n^2

int main()

{
    int n, i, sum = 0;

    printf("\n Enter Value of n : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + (i * i);
    }
    printf("\n Sum of Series = %d", sum);
    return 0;
}