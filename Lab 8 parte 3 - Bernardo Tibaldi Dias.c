//EXERCICIO 1

#include <stdio.h>

int * troca (int *A, int *B) {
  int temporario;
  temporario = *A;
  *A = *B;
  *B = temporario;
}


int main () {
  int A, B;
  printf("Indique dois valores:\nA: ");
  scanf("%d", &A);
  printf("B: ");
  scanf("%d", &B);
  printf("Inicio: A = %d, B = %d\n", A, B);
  troca(&A, &B);
  printf("Fim: A = %d, B = %d\n", A, B);
  return 0;
}

//EXERCICIO 2

#include <stdio.h>

int Funcao (int *A, int *B) {
  int temporario;
  if (*A < *B) {
    temporario = *A;
    *A = *B;
    *B = temporario;
  }
  else {
    *A = *A;
   *B = *B; 
  }
}

int main () {
  int A, B;
  printf("Digite dois valores:\n");
  scanf ("%d %d", &A, &B);
  Funcao(&A, &B);
  printf("Maior: %d\n Menor: %d\n", A, B);
  return 0;
}

//EXERCICIO 3

#include <stdio.h>

int Funcao (int *A, int *B) {
  *A = *A + *B;
}

int main () {
  int A, B;
  printf("Indique dois valores:\n");
  scanf("%d", &A);
  scanf("%d", &B);
  Funcao(&A, &B);
  printf("A = %d\nB = %d", A, B);
  return 0;
}

//EXERCICIO 4

#include <stdio.h>

int Funcao (int *A, int *B, int *C) {
  int temporario1, temporario2;
  if (*A == *B && *B == *C && *A == *C) {
    return printf("1\n");
  }
  else {
    if (*A > *B && *B > *C && *A > *C) {
      *A = *A;
      *B = *B;
      *C = *C;
    }
    else if (*A > *C && *C > *B && *A > *B) {
      *A = *A;
      temporario1 = *C;
      *C = *B;
      *B = temporario1;
    }
    else if (*B > *A && *A > *C) {
      temporario1 = *A;
      *A = *B;
      *B = temporario1;
      *C = *C;
    }
    else if (*C > *A && *A > *B) {
      temporario1 = *A;
      *A = *C;
      temporario2 = *B;
      *B = temporario1;
      *C = *B;
    }
   else if (*B > *C && *C > *A) {
     temporario1 = *A;
     *A = *B;
     *B = *C;
     *C = temporario1;
   }
  else if (*C > *B && *B > *A) {
    temporario1 = *A;
    *A = *C;
    *B = *B;
    *C = temporario1;
  }
    return printf("0\n");
  }
}

int main () {
  int A, B, C, comparacao;
  printf("Digite 3 valores:\n");
  scanf ("%d %d %d", &A, &B, &C);
  Funcao (&A, &B, &C);
  printf("Ordem: %d, %d, %d\n", C, B, A);
  return 0;
}

//EXERCICIO 5

#include <stdio.h>

void funcao (float num, int *inteiro, float *frac) {
  *inteiro = (int) num;
  *frac = num - *inteiro ;
}
int main () {
  float num, frac;
  int inteiro;
  printf("Apresente um numero real:\n");
  scanf("%f", &num);
  funcao (num, &inteiro, &frac);
  printf("Parte inteira: %d\n Parte fracionaria: %.4f\n", inteiro, frac);
  return 0;
}

//EXERCICIO 6

#include <stdio.h>
#include <math.h>
#define PI 3.14

void calc_esfera(float R, float *area, float *volume) {
  *area = 4 * PI * (pow(R, 2));
  *volume = (4/3) * PI* (pow(R, 3));
}

int main () {
  float R, area, volume;
  printf("Indique o valor de R para que seja calculada a area da superficie e o volume de uma esfera:\n");
  scanf("%f", &R);
  calc_esfera(R, &area, &volume);
  printf("Area da esfera: %.2f\nVolume da esfera: %.2f\n", area, volume);
  return 0;
}

//EXERCICIO 7

#include <stdio.h>
#include <stdlib.h>


void funcao (int *p, int n, int *contador, int *maior) {
  int i, j;
  *contador = 0;
  *maior = p[0];
  for (i = 0; i < n; i++) {
        if (p[i] > *maior) {
      *maior = p[i];
      }
  }
  for (i = 0; i < n; i++) {
    if (*maior == p[i]) {
      (*contador)++;
    }
  }
}

int main () {
  int n, *p, i, maior, contador;
  printf("Digite o numero de elementos do array:\n");
  scanf("%d", &n);
    p = (int *) malloc(n*(sizeof(int)));
  printf("Indique valores para um array:\n");
  for (i = 0; i < n; i++) {
    printf("Valor %d: ", i+1);
    scanf("%d", &p[i]);
  }
  funcao(p, n, &contador, &maior);
  printf("Maior: %d\n", maior);
  printf("Aparece %d vezes\n", contador);
  return 0;
}

//EXERCICIO 8

//EXERCICIO 9

//EXERCICIO 10

//EXERCICIO 11

//EXERCICIO 12

//EXERCICIO 13 

//EXERCICIO 14


