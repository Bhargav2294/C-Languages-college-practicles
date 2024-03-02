#include <stdio.h>

int main()

{
    int num, i = 0, j = 1;

    printf("enter number:"); 
    scanf("%d",&num);

    printf(" %d %d", i, j);
    while (num > 0)
    {
        printf(" %d", i + j);
        j = i + j;
        i = j - i;
        num--;
    }
    return 0;
}