//EXERCÍCIO 1

#include <stdio.h>

int main () {
  float V[10];
  void *p;
  int i;
  p = &V[0];
  for (i = 0; i < 10; i++) {
    p = &V[i];
    printf("%p\n", p);
  }  
  return 0;
}

//EXERCÍCIO 2

#include <stdio.h>

int main () {
  int i, j, M[3][3];
  void *p;
  p = &M[0][0];
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      p = &M[i][j];
      printf("%p\n", p);
    }
  }
  
  return 0;
}

//EXERCÍCIO 3

#include <stdio.h>

int main () {
  int i, V[5], *p;
  p = &V[0];
  for (i = 0; i < 5; i++) {
    printf("Indique o valor da posicao %d:\n", i+1);
    scanf("%d", &V[i]);
  }
  printf("Resultado:\n");
  for (i = 0; i < 5; i++) {
    p = &V[i];
    printf("%d\n", 2*(*p));
  }
  return 0;
}

//EXERCÍCIO 4

#include <stdio.h>

int main () {
  int i, V[5], *p;
  p = &V[0];
  printf("Apresente 5 valores:\n");
  for (i = 0; i < 5; i++) {
    printf("Valor %d:\n", i + 1);
    scanf("%d", &V[i]);
  }
  printf("Os valores pares estao nos enderecos:\n");
  for (i = 0; i < 5; i++) {
    p = &V[i];
    if ((*p)%2 == 0) {
      printf("%p\n", p);
    }
  }
  return 0;
}

//EXERCÍCIO 5

//EXERCÍCIO 6

//EXERCÍCIO 7

//EXERCÍCIO 8
