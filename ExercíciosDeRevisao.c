//  EXERCÍCIO 1

#include <stdio.h>

void funcao (int gol1, int gol2, int *t1, int *t2) {
  if (gol1 == gol2) {
    *t1 = *t1 + 1;
    *t2 = *t2 + 1;
  }
  else if (gol1 > gol2) {
    *t1 = *t1 + 2;
    *t2 = *t2 + 0;
  }
  else if (gol1 < gol2) {
    *t1 = *t1 + 0;
    *t2 = *t2 + 2;
  }
}

int main () {
  int t1, t2, gol1, gol2;
  printf("Indique a pontuacao inicial do time 1: ");
  scanf("%d", &(t1));
  printf("Indique a pontuacao inicial do time 2: ");
  scanf("%d", &(t2));
  printf("Indique o numero de gols que o time 1 fez: ");
  scanf("%d", &gol1);
  printf("Indique o numero de gols que o time 2 fez: ");
  scanf("%d", &gol2);
  funcao(gol1, gol2, &t1, &t2);
  printf("Pontuacao time 1: %d\nPontuacao time 2: %d\n", t1, t2);
  return 0;
}
