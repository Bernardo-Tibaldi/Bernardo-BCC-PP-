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

#include <stdio.h>

int main() {
  int V[50], i;
  for (i = 0; i < 50; i++) {
    V[i] = (i+5*i)%(i+1);
    printf("%d\n", V[i]);
  }
  return 0;
}

//EXERCÍCIO 6

#include <stdio.h>

int main() {
  int V [10], i, primo = 0, j;
  printf("Informe os valores nos vetores:\n");
  for (i = 0; i < 10; i++) {
    scanf ("%d", &V[i]);
  }
  for (j = 0; j < 10; j++) {
        if ((V [j] == 1) || (V [j] == 0)) {
            primo = primo + 0;
        }
        else if ((V [j] == 2) || (V [j] == 3) || (V [j] == 5) || (V [j] == 7)) {
            printf ("O numero %d na posicao %d eh primo\n", V[j], j);
        }
        else if ((V [j] % 2 == 0) || (V [j] % 3 == 0) || (V [j] % 5 == 0) || (V [j] % 7 == 0)) {
            primo = primo + 0;
        }
        else if ((V [j] % 2 != 0) || (V [j] % 3 != 0) || (V [j] % 5 != 0) || (V [j] % 7 != 0)) {
           printf ("O numero %d na posicao %d eh primo\n", V[j], j); 
    }
  }
  
  return 0;
}

//EXERCÍCIO 7

#include <stdio.h>

int main () {
  int V [6], i, j, k, soma = 0, impares = 0;
  printf ("Informe os valores para um vetor:\n");
  for (i = 0; i < 6; i++) {
    scanf ("%d", &V[i]);
  }
  printf("Numeros pares:\n");
  for (j = 0; j < 6; j++) {
    if (V[j] % 2 == 0) {
      printf ("%d ", V[j]);
      soma = soma + V[j];
    }
    }
  printf ("\n");
  printf ("A soma dos pares eh %d\n", soma);
  printf ("Numeros impares:\n");
  for (k = 0; k < 6; k++) {
    if (V[k] % 2 != 0) {
      printf ("%d ", V[k]);
      impares = impares + 1;
    }
  }
  printf("\n");
  printf("A quantidade de numeros impares eh: %d\n", impares);
  return 0;
}

//EXERCÍCIO 8

#include <stdio.h>

int main () {
  int V[10], i, j;
  printf ("Indique valores para um vetor:\n");
  for (i = 0; i < 10; i++) {
    scanf ("%d", &V[i]);
    if (V[i] == V[i-1] || V[i] == V [i-2] || V[i] == V[i-3] || V[i] == V [i-4] || V[i] == V [i-5] || V[i] == V[i-6] || V[i] == V [i-7] || V[i] == V[i-8] || V[i] == V [i-9]) {
      printf ("Valor repetido! Digite outro valor:\n");
      scanf ("%d", &V[i]);
    }
  }
  printf ("Os valores do vetor sao:\n");
  for (j = 0; j < 10; j++) {
    printf ("%d ", V[j]);
  }
  return 0;
}

//MATRIZES

//EXERCÍCIO 1

#include <stdio.h>

int main () {
  int matriz [3] [3];
  int i, j, contador = 0;
  printf ("Indique os valores de uma matriz:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf ("%d", &matriz [i] [j]);
      if (matriz [i] [j] > 10) {
        contador++;
      }
    }
  }
  printf ("Ha %d numeros maiores que 10 nesta matriz\n", contador);
  return 0;
}

//EXERCÍCIO 2

#include <stdio.h>

int main () {
  int matriz [5] [5];
  int i, j;
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      if (i == j) {
        printf(" [1] ");
      }
      else if (i != j) {
        printf (" [0] ");
      }
    }
    printf("\n");
  }
  return 0;
}

//EXERCÍCIO 3

#include <stdio.h>

int main () {
  int matriz [4] [4], i, j, maior, maiorX, maiorY;
  printf("Indique os valores para uma matriz:\n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      scanf ("%d", &matriz [i] [j]);
      maior = matriz [0] [0];
      if (matriz [i] [j] > maior) {
        maior = matriz [i] [j];
        maiorX = i;
        maiorY = j;
      }
    }
  }
  printf ("O maior valor encontra-se na linha %d e na coluna %d\n", maiorX, maiorY);
  return 0;
}

//EXERCÍCIO 4

#include <stdio.h>

int main () {
  int matriz [5] [5], i, j, X, k, l, contador = 0;
  /*
  ======================================================
  OBS: Usei duas variáveis a mais pois considerei a ordem do enunciado,
  primeiro indicar a matriz depois o X
  ======================================================
    */
  
  printf("Indique os valores para uma matriz:\n");
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      scanf ("%d", &matriz [i] [j]);
    }
  }
  printf ("Agora indique um valor X:\n");
  scanf ("%d", &X);
  for (k = 0; k < 5; k++) {
    for (l = 0; l < 5; l++) {
      if (matriz [k] [l] == X) {
        printf ("Esse valor esta na linha %d e coluna %d\n", k, l);
      }
      else {
        contador++;
      }
    }
  }
  if (contador == 25) {
    printf ("Nao Encontrado\n");
  }
  return 0;
}

//EXERCÍCIO 5

#include <stdio.h>
#include <math.h>

int main () {
  int A [10] [10], i, j;
  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      if (i < j) {
        A[i][j] = 2*i + 7*j - 2;
        printf("[%d", A [i] [j]);
        printf("%-6s", " ]");
      }
      else if (i == j) {
        A[i][j] = (3*(pow (i, 2))) - 1;
        printf("[%d", A [i] [j]);
        printf("%-6s", "]");
      }
      else if (i > j) {
        A[i][j] = (4*(pow(i, 3))) - (5*(pow(j, 2))) + 1;
        printf("[%d", A [i] [j]);
        printf("%-6s", "]");
      }
    }
    printf ("\n");
  }
  return 0;
}

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
