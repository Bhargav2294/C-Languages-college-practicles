
#include <stdio.h>
#include <conio.h>

// fun() function containing static variable count
int fun()
{

    // Declaration of static variable count
    static int count = 0;
    count++;
    return count;
}

void main()
{
    clrscr();
    printf("\nCall to fun() %d times", fun());
    printf("\nCall to fun() %d times", fun());
    printf("\nCall to fun() %d times", fun());
    getch();
}