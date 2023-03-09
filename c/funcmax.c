#include <stdio.h>

int max( int x, int y, int z);//prototipo da funcao

int main(void) {
  int num1;
  int num2;
  int num3;

  printf("digite tres numeros; \n");
  scanf("%d%d%d", &num1, &num2, &num3);

  printf("o maximo e %d\n", max(num1,num2,num3));
  
  return 0;
}

// Definicao da funcao
// x y e z sao parametros

int max(int x, int y, int z) {
  int maior =  x; // cobsidera x o maior
  if (y > maior) {
    maior = y;
  }
  if (z > maior) {
    maior = z;
  }
  return maior;
}
