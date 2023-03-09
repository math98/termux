#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i;
  unsigned seed;//numero usado como semente do gerador de numero aleatorio
  printf("digite a semente: \n");
  scanf("%u", &seed);
  srand(seed);

  for (i = 1; i <= 10; i++) {
   printf("%10d", 1 + (rand()% 6));
    if (i % 5 == 0) {
      printf("\n");
    }
  }
  return 0;
}
