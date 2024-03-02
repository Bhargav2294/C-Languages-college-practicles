#include <stdio.h>

int main()

{
    int num;

    printf("\n Enter any number : ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("\n Entered Number is Zero");
    }
    else if (num> 0)
    {
        printf("\n Entered Number is Positive");
    }
    else
    {
        printf("\n Entered Number is Negative");
    }
    return 0;
}