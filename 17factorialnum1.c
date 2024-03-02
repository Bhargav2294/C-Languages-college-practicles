#include <stdio.h>

int main()

{
    int i, fact=1, num;
    
    printf("enter value of number:");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    
    printf("your factorial is %d is:%d",num,fact);
}