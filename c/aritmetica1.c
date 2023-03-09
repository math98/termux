#include <stdio.h>

int main(void) {
  int val1, val2, val3;
  printf("Digite tres inteiros diferentes\n");
  scanf("%d%d%d", &val1,&val2,&val3);

  printf("a soma e %d\n", val1 + val2 + val3);
  printf("a media e %d\n",(val1 + val2 + val3) / 3 );
  printf("o produto e %d\n", val1 * val2 * val3 );

  if (val1 > val2 && val1 > val3) {
    printf("o maior e %d\n", val1);
  }

  if (val2 > val1 && val2 > val3) {
    printf("o maior e %d\n", val2);
    }

  if (val3 > val2 && val3 > val1) {
    printf("o maior e %d\n", val3);
    }
    return 0;
    }
