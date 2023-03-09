#include <stdio.h>

int main(void) {
  int num1;
  int num2;

  printf("entre com dois inteiros\n");
  printf("a relacao que eles satisfazem:\n");

  scanf("%d%d", &num1, &num2);

  if (num1 == num2) {
    printf("%d e igual a %d\n",num1, num2);
  }
  if (num1 != num2) {
    printf("%d e diferente de %d\n", num1,num2);
  }
  if (num1 < num2) {
    printf("%d e menor que %d\n",num1,num2);
  }
  if (num1 > num2) {
    printf("%d e maior que %d\n",num1,num2);
  }
  if (num1 <= num2) {
    printf("%d e menor ou igual a %d\n",num1,num2);
  }
  if (num1 >= num2) {
    printf("%d e maior ou igual a %d\n", num1, num2);
  }
  

    return 0;
  }
