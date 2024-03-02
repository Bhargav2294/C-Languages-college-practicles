#include <stdio.h>

 int main()

 {
    float A, h, b;

    printf("\n Enter height :");
    scanf("%f", &h);

    printf("\n Enter base :");
    scanf("%f", &b);

    A = b * h * 0.5;

    printf("\n The Area of triangle = %.2f", A);
    return 0;
 }