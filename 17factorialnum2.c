#include <stdio.h>

int main()

{
    int no, fact = 1;
    
    printf("\n Enter No to find its Factorial : ");
    scanf("%d", &no);

    while (no > 1)
    {
        fact = fact * no;
        no = no - 1;
    }

    printf("\n Factorial of entered no is : %d", fact);
    return 0;
}