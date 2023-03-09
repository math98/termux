#include <stdio.h>

int main(void) {
  float massa;
  float altura;

  printf("Programa para calcular o IMC\n");
  printf("Digite a sua altura\n");
  scanf("%f", &altura);
  printf("digite o seu peso\n");
  scanf("%f", &massa);
  int imc = massa / (altura * altura);
  if (imc <= 18.5) {
    printf("Abaixo do peso\n");
  }
  if (imc > 18.5 && imc <= 24.9) {
    printf("Peso normal\n");
  }
  if (imc > 24.9 && imc <= 29.9) {
    printf("Acima do peso\n");
  }
  if (imc > 30) {
    printf("Voce esta obeso\n");
  }

  return 0;
}
