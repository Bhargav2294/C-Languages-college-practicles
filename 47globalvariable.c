#include <stdio.h>
#include <conio.h>

int count;

long int recursion(int n);

void main()
{
    int n;
    clrscr();

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    printf("Factorial of %d = %ld", n, recursion(n));

    printf("\nRecursion function called %d time to calculate factorial", count);
    getch();
}

long int recursion(int n)
{

    count++;
    if (n >= 1)
        return n * recursion(n - 1);
    else
        return 1;
}