// EXERCICIO 1
/*Obs: Coloquei aqui pois não sabia se era para enviar a primeira
questão ou apenas deixá-la registrada no caderno.*/

#include <stdio.h>

int main () {
  int x = 10, y = 20, *p1, *p2;
  x = sizeof(int);
  p1 = &x;
  p2 = &y;
  (p1)++;

  printf("a) x\nb) y\nc) &x\nd) &y\ne) p1\nf) p2\ng) *p1 + *p2\nh) *(&x)\ni) &(*p2)\n");
  printf ("==========\nRESPOSTAS:\n==========\n");
  printf("a) 10\n");
  printf("b) 20\n");
  printf("c) 1000\n");
  printf("d) 1004\n");
  printf("e) 1000\n");
  printf("f) 1004\n");
  printf("g) 10 + 20 = 30\n");
  printf("h) *p1 = 10\n");
  printf("i) 1004\n");
  return 0;
}

// EXERCICIO 2

#include <stdio.h>

int main () {
    int a, *p1;
    float b, *p2;
    char c, *p3;
    p1 = &a;
    p2 = &b;
    p3 = &c;
    printf("Modifique os valores de 3 variaveis:\n");
    scanf("%i %f %c", &a, &b, &c);
    scanf("%i %f %c", p1, p2, p3);
    printf("Valor modificado: %i %.2f %c\n", a, b, c);
    return 0;
}

// EXERCICIO 3

#include <stdio.h>

int main () {
    int a, b, *p1, *p2;
    p1 = &a;
    p2 = &b;
    printf("Enderecos de memoria:\n %p\n%p\n", p1, p2);
    printf("Indique dois valores:\n");
    scanf ("%i %i", p1, p2);
    if (&a > &b) {
        printf("%p\n", p1);
    }
    if (&a < &b) {
        printf("%p\n", p2);
    }
    return 0;
}

// EXERCICIO 4

#include <stdio.h>

int main () {
    int a, b, *p1, *p2;
    p1 = &a;
    p2 = &b;
    printf ("Apresente duas variaveis:\n");
    scanf ("%d ", p1);
    scanf("%d", p2);
    if (&a > &b) {
        printf("O conteudo do maior endereco eh: %d\n", *p1);
    }
    if (&a < &b) {
        printf("O conteudo do maior endereco eh: %d\n",*p2);
    }
    return 0;
}

// EXERCICIO 5

#include <stdio.h>

int main () {
    int A, B, *p1, *p2;
    int soma, *p3;
    p1 = &A;
    p2 = &B;
    p3 = &soma;
    printf("Digite os valores de duas variaveis:\n");
    scanf("%d %d", &A, &B);
    printf("Digite os valores de dois ponteiros:\n");
    scanf("%d %d", p1, p2);
    soma = 2*(*p1) + 2*(*p2);
    printf("A soma do dobro desses valores eh: %d\n", *p3);
    return 0;
}

// EXERCICIO 6

#include <stdio.h>
#include <stdlib.h>

int main () {
  int A, B, *p1, *p2;
  char opcao;
  p1 = &A;
  p2 = &B;
  printf("Digite dois valores:\n");
  scanf("%d %d", p1, p2);
  printf("============\nOPERACOES\n============\n");
  printf("A) Soma;\nB)Subtracao;\nC)Multiplicacao;\nD)Divisao.\n");
  setbuf(stdin, NULL);
  scanf("%c", &opcao);
  switch (opcao) {
    case 'A':
      printf("Soma: %d\n", *p1+*p2);
      break;
    case 'B':
      printf("Subtracao:%d\n", *p1-*p2);
      break;
    case 'C':
      printf("Multiplicacao: %d\n", (*p1)*(*p2));
      break;
  case 'D':
      printf("Divisao: %d\n", (*p1)/(*p2));
      break;
  default:
    printf("Erro!\n");
  }
  return 0;
}

// EXERCICIO 7

#include <stdio.h>

int main () {
  int A, B, C, *p1, *p2, *p3;
  p1 = &A;
  p2 = &B;
  p3 = &C;
  printf("Digite o valor de 3 variaveis:\n");
  scanf ("%d %d %d", p1, p2, p3);
  if (*p1 < *p2 && *p2 < *p3) {
    printf("Valores: %d, %d, %d\n", *p1, *p2, *p3);
    printf("Endereco: %p, %p, %p\n", p1, p2, p3);
  }
  else if (*p1 < *p3 && *p3 < *p2) {
    printf("Valores: %d, %d, %d\n", *p1, *p3, *p2);
    printf("Endereco: %p, %p, %p\n", p1, p3, p2);
  }
  else if (*p2 < *p1 && *p1 < *p3) {
    printf("Valores: %d, %d, %d\n", *p2, *p1, *p3);
    printf("Endereco: %p, %p, %p\n", p2, p1, p3);
  }
  else if (*p2 < *p3 && *p3 < *p1) {
    printf("Valores: %d, %d, %d\n", *p2, *p3, *p1);
    printf("Endereco: %p, %p, %p\n", p2, p3, p1);
  }
  else if (*p3 < *p1 && *p1 < *p2) {
    printf("Valores: %d, %d, %d\n", *p3, *p1, *p2);
    printf("Endereco: %p, %p, %p\n", p3, p1, p2);
  }
  else if (*p3 < *p2 && *p2 < *p1) {
    printf("Valores: %d, %d, %d\n", *p3, *p2, *p1);
    printf("Endereco: %p, %p, %p\n", p3, p2, p1);
  }
  return 0;
}

// EXERCICIO 8

#include <stdio.h>

int main () {
  int v[6], *p = v, i;
  printf("Apresente os valores de um vetor:\n");
  for (i = 0; i < 6; i++) {
    scanf("%d", &v[i]);
  }
  printf("Valores desse Vetor:\n");
  for (i = 0; i < 6; i++) {
    printf("[%d]", *(p+i));
  }
  printf("\n");
  printf("Respectivos enderecos de memoria:\n");
  for (i = 0; i < 6; i++) {
    printf("Endereco de %d: %p\n", i, (p+i));
  }
  printf("\n");
  return 0;
}

