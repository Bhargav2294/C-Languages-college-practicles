#include <stdio.h>

int main(void)

{
  int i, j, n;

  printf("enter number:");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      printf(" ");
    }
    for (j = 0; j <= i; j++) {
      printf(" *");
    }
    printf("\n");
  }
  return 0;
}