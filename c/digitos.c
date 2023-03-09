#include<stdio.h>

int main(void) {
  int num1; 
  printf("digite um numero de 5 digitos\n");
  scanf("%d", &num1);
  
  int num2 = num1 % 10000;
  int num3 = num2 % 1000;
  int num4 = num3 % 100;
  int num5 = num4 % 10;

  
  printf("%d  ", num1 / 10000);
  printf("%d  ", num2 / 1000);
  printf("%d  ", num3 / 100);
  printf("%d  ", num4 / 10);
  printf("%d  ", num5);
  
  return 0;
}
