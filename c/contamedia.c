#include <stdio.h>

int main(void) {
  int contador;
  int nota;
  int total;
  int media;

  total = 0;
  contador = 1;

  while (contador <= 10) {
    printf("Digite a sua nota\n");
    scanf("%d", &nota);
    total = total + nota;
    contador = contador + 1;
    }
  printf("A media da turma e %d", total / contador );
  
    return 0;
  }
