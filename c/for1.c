#include <stdio.h>

int main(void) {
  
  int soma = 0;
  int numero;

  
  
  for (numero = 2; numero <= 10; numero += 2) {
    soma += numero;
  }// soma todos os numeros pares de 0 a 10
    
  printf("%d\n",soma);
  
  return 0;
  }
