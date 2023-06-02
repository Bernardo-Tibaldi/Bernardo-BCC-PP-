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

/*Faça um programa que leia três valores inteiros e chame uma função que
receba estes 3 valores de entrada e retorne eles ordenados, ou seja, o
menor valor na primeira variável, o segundo menor valor na variável do
meio, e o maior valor na última variável. A função deve retornar o valor 1 se
os três valores forem iguais e 0 se existirem valores diferentes. Exibir os
valores ordenados na tela.
*/

#include <stdio.h>

int Funcao (int *A, int *B, int *C) {
  int comparacao, temporario1, temporario2;
  if (*A == *B && *B == *C && *A == *C) {
    comparacao = 1;
  }
  else {
    comparacao = 0;
    if (*A > *B && *B > *C) {
      *A = *A;
      *B = *B;
      *C = *C;
    }
    else if (*A > *C && *C > *B) {
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
      *C = *B;
    }
  }
}

int main () {
  int A, B, C;
  printf("Digite 3 valores:\n");
  scanf ("%d %d %d", &A, &B, &C);
  Funcao (&A, &B, &C);
  printf("Ordem: %d, %d, %d\n", A, B, C);
  return 0;
}

//EXERCICIO 5

//EXERCICIO 6

//EXERCICIO 7

//EXERCICIO 8

//EXERCICIO 9

//EXERCICIO 10

//EXERCICIO 11

//EXERCICIO 12

//EXERCICIO 13 

//EXERCICIO 14


