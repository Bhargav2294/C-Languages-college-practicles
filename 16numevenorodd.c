#include <stdio.h>

int main()

{

    int i;

    printf("\n Enter any Number : ");
    scanf("%d", &i)
    ;
    if ((i % 10) % 2 == 0)
    {
        printf("\n Last Digit of Number is Even");
    }
    else
    {
        printf("\n Last Digit of Number is Odd");
    }
    return 0;
}