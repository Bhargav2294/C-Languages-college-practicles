#include <stdio.h>

int main()

{
    int no, i;

    printf("\n Enter No to check its prime or not :");
    scanf("%d", &no);

    for (i = 2; i < no; i++)
    {
        if (no % i == 0)
        {
            printf("\n %d is not prime", no);
            break;
        }
    }
    if (no == i)
    {
        printf("\n %d is prime", no);
    }
    return 0;
}