//VETORES

//EXERCÍCIO 1

#include <stdio.h>

int main () {
  int A [6] = {1, 0, 5, -2, -5, 7}, soma, i; //letra A
  soma = A[0] + A[1] + A[5]; 
  printf ("Soma: %d", soma); //letra B
  
  for (i = 0; i < 6; i++){
    printf("%d\n", A[i]); //letra D
  }
  return 0;
}

//letra C

#include <stdio.h>

int main () {
  int A [6] = {1, 0, 5, -2, -5, 7}, soma, i;
  A [4] = 100;
  printf ("%d\n", A [4]);
  return 0;
}

//EXERCÍCIO 2

#include <stdio.h>

int main () {
  int V [8], i, valor, X, Y, soma;
printf ("Informe os valores nos vetores:\n");
  for (i = 0; i < 8; i++) {
    scanf ("%d", &valor);
    V [i] = valor;
  }
  printf("Informe duas posicoes no vetor:\n");
  scanf ("%d", &X);
  scanf("%d", &Y);
  soma = V[X] + V[Y];
  printf("A soma dos valores %d e %d resulta em %d\n", V[X], V[Y], soma);
  return 0;
}

//EXERCÍCIO 3

#include <stdio.h>

int main () {
  int V [6], i, j, valor;
  printf ("Informe os valores nos vetores:\n");
  for (i = 0; i < 6; i++) {
    scanf ("%d", &valor);
    V [i] = valor;
  }
  for (j = 5; j>= 0; j--) {
    printf("%d ", V[j]);
  }
  return 0;
}


//EXERCÍCIO 4

#include <stdio.h>

int main () {
  int V [5], i, maior, menor, posicao_maior, posicao_menor;
  printf ("Informe os valores nos vetores:\n");
  for (i = 0; i < 5; i++) {
    scanf ("%d", &V[i]);
  }
  maior = V[0];
  menor = V[0];
  for (i = 0; i < 5; i++) {
   if ( V[i] > maior) {
      maior = V[i];
      posicao_maior = i;
    }
    else if (V[i] < menor) {
      menor = V[i];
      posicao_menor = i;
    }
    }
  printf ("O maior valor se encontra na posicao %d e o menor na posicao %d\n", posicao_maior, posicao_menor);
  return 0;
}


//EXERCÍCIO 5

//EXERCÍCIO 6

//EXERCÍCIO 7

//EXERCÍCIO 8

//MATRIZES

//EXERCÍCIO 1

//EXERCÍCIO 2

//EXERCÍCIO 3

//EXERCÍCIO 4

//EXERCÍCIO 5

//EXERCÍCIO 6

//EXERCÍCIO 7

//EXERCÍCIO 8

//STRINGS

//EXERCÍCIO 1

//EXERCÍCIO 2

//EXERCÍCIO 3

//EXERCÍCIO 4

//EXERCÍCIO 5

//EXERCÍCIO 6

//EXERCÍCIO 7

//EXERCÍCIO 8

//EXERCÍCIO 9

//EXERCÍCIO 10

//EXERCÍCIO 11

//EXERCÍCIO 12

//EXERCÍCIO 13

//EXERCÍCIO 14

//EXERCÍCIO 15

//EXERCÍCIO 16
