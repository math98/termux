#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// constantes de enumeracao representam status do jogo
enum Status { CONTINUE, WON, LOST };
int rolldice(void); // prototipo da funcao

int main(void) {
  int sum;     // soma dos pontos do jogo
  int myPoint; // pontos ganhos

  enum Status gameStatus;
  /*randomiza gerador de numero aleatorio usando a hora do sistema*/
  
  srand(time(NULL));
  sum = rolldice(); //primeiro lancamentos
  switch (sum) {
  case 7:
  case 11:
    gameStatus = WON;
    break;
  case 2:
  case 3:
  case 12:
    gameStatus = LOST;
    break;
  default:
    gameStatus = CONTINUE;
    myPoint = sum;
    printf("Ponto e %d\n", myPoint);
    break;
  }
  while (gameStatus == CONTINUE) {
    sum = rolldice();
    if (sum == myPoint) {
      gameStatus = WON;
    } else {
      if (sum == 7) {
	gameStatus = LOST;
      }
    }
  }

 // continua o jogo
  if (gameStatus == WON) {
    printf("%d o jogador venceu!\n", sum);
  } else {
    printf("%d o jogador perdeu!\n", sum);
  }
  return 0;
}
int rolldice(void) {
  int dice1;
  int dice2;
  int workSum;

  dice1 = 1 + (rand() % 6);
  dice2 = 1 + (rand() % 6);
  workSum = dice1 + dice2;

  printf("o jogador jogou %d + %d = %d\n", dice1, dice2, workSum);
  return workSum;
}
