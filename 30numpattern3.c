#include <stdio.h>

int main()

{
    int i, j, n;

    printf("enter number:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            printf("%d", n - i);
        }
        printf("\n");
    }
    return 0;
}