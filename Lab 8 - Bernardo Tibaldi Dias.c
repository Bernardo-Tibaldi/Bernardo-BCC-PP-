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
#include <stdio.h>
#include <string.h>

int main () {
  int i, j, contador = 0;
  char S1[100], S2[100];
  printf("Digite uma string:\n");
  setbuf(stdin, NULL);
  fgets(S1, 100, stdin);
  printf("Digite uma segunda string:\n");
  setbuf(stdin, NULL);
  fgets(S2, 100, stdin);
  for (i = 0; i < strlen(S1); i++) {
    for (j = 0, contador=0; j < strlen(S2) - 1; j++) {
    if (S1[i+j] == S2[j]) {
      contador++;
      }
    }
    if (contador == strlen(S2) - 1) {  
      break;   
    }
  }
  if(contador==strlen(S2) - 1){
        printf("String 2 esta contida na String 1!\n");
  }
  else {
    printf("String 2 nao esta contida na String 1!\n");
  }
  return 0; 
}
//EXERCÍCIO 6

#include <stdio.h>

int main () {
  int V[20], valor, *p, i;
  p = &V[0];
  printf("Indique os valores de um array:\n");
    scanf("%d", &*p);
  for (i = 0; i < 4*5; i+=4) {
    V[i] = *p;
    printf("O valor %d eh igual a %d\n", *p, V[i]);
          //Demonstrando com e sem o uso de índices;
  }
  return 0;
}

//EXERCÍCIO 7

#include <stdio.h>

int main () {
  int V[10], i;
  int *p = V;
  printf("Indique o valor de 10 elementos:\n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &*(p+i));
  }
  int max = *p, min = *p;
  for (i = 0; i < 10; i++) {
    if (*(p+i) > max) {
      max = *(p+i);
    }
    if (*(p+i) < min) {
      min = *(p+i);
    }
  }
  printf("O maior elemento desse array eh %d e o menor eh %d\n", max, min);
  return 0;
}

//EXERCÍCIO 8

#include <stdio.h>

int main () {
  int A, *B, **C, ***D;
  printf("Digite um valor A:\n");
  scanf("%d", &A);
  B = &A;
  C = &B;
  D = &C;
  printf ("Dobro: %d\nTriplo: %d\nQuadruplo: %d\n", *B*2, **C*3, ***D*4);
  return 0;
}
