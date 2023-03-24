//EXERCÍCIO 1:

#include <stdio.h>

int main(void) {
  printf ("Apresente dois valores:\n");
  int x, y;
  scanf("%d", &x);
  scanf("%d", &y);
  if (x>y) {
    printf ("O valor %d eh maior que %d\n", x, y);
  }
  if (y>x) {
    printf("O valor %d eh maior que %d\n", y, x);
  }
  return 0;
}

// EXERCÍCIO 2

#include <stdio.h>
#include <math.h>

int main(void) {
  printf ("Apresente um valor:\n");
  float x, raiz;
  scanf("%f", &x);
  if (x>=0) {
    raiz = sqrt (x);
    printf ("A raiz desse numero eh: %.2f\n", raiz);
  }
  else {
    printf("Valor invalido\n");
  }
  return 0;
}

// EXERCÍCIO 3

#include <stdio.h>
#include <math.h>

int main(void) {
  printf ("Apresente um valor real:\n");
  float x, raiz, quadrado;
  scanf("%f", &x);
  if (x>=0) {
    raiz = sqrt (x);
    printf ("A raiz desse numero eh: %.2f\n", raiz);
  }
  else {
    quadrado = pow(x, 2);
    printf("Valor ao quadrado desse numero eh: %.2f\n", quadrado);
  }
  return 0;
}

// EXERCÍCIO 4

#include <stdio.h>
#include <math.h>

int main(void) {
  printf ("Apresente um valor real:\n");
  float x, raiz, quadrado;
  scanf("%f", &x);
  if (x>=0) {
    raiz = sqrt (x);
    quadrado = pow(x, 2);
    printf ("A raiz desse numero e o seu quadrado sao, respectivamente: %.2f, %.2f \n", raiz, quadrado);
  }
  else {
    printf("Valor invalido\n");
  }
  return 0;
}

// EXERCÍCIO 5

#include <stdio.h>
#include <math.h>

int main(void) {
  printf ("Apresente um valor inteiro:\n");
  int x;
  scanf("%d", &x);
  if (x%2 == 0) {
    printf ("Esse valor eh par\n");
  }
  else {
    printf ("Esse valor eh impar\n");
  }
  return 0;
}

// EXERCÍCIO 6

#include <stdio.h>

int main(void) {
  printf ("Apresente dois valores:\n");
  int x, y, soma;
  scanf("%d", &x);
  scanf ("%d", &y);
  if (x>y) {
    printf ("O valor %d eh maior que %d\n", x, y);
    soma = x - y;
  printf ("A diferença desse valores eh: %d\n", soma);
  return 0;
  }
  if (x<y){
    printf ("O valor %d eh maior que %d\n", y, x);
    soma = y - x;
  printf ("A diferença desse valores eh: %d\n", soma);
  return 0;
  }
  
}

// EXERCÍCIO 7

#include <stdio.h>

int main(void) {
  printf ("Apresente dois valores:\n");
  float x, y;
  scanf("%f", &x);
  scanf ("%f", &y);
  if (x>y) {
    printf ("O valor %.2f eh maior que %.2f\n", x, y);
  return 0;
  }
  if (x<y){
    printf ("O valor %.2f eh maior que %.2f\n", y, x);
  
  }

  if (x == y) {
    printf ("Valores iguais\n");
  }

  return 0;
}

// EXERCÍCIO 8

#include <stdio.h>

int main(void) {
  printf ("Apresente duas notas:\n");
  float x, y, media;
  scanf("%f", &x);
  scanf ("%f", &y);
  if (x<0 || x>10 || y<0 || y>10) {
    printf ("Valores invalidos\n");
  }
  else {
    media = (x + y)/2;
    printf ("A media dessas notas eh: %.2f\n", media);
  }

  return 0;
}

// EXERCÍCIO 9

#include <stdio.h>

int main(void) {
  printf ("Apresente o salário de um trabalhador e o valor da prestacao de um emprestimo:\n");
  float s, p; 
  // s = salário; p = prestação .
  
  scanf("%f", &s);
  scanf ("%f", &p);
  if (p > 0.2*s) {
    printf ("Emprestimo nao concedido");
  }
  else {
    printf ("Emprestimo concedido");
    
  }
  return 0;
}

// EXERCÍCIO 10*****************

#include <stdio.h>
#include <math.h>

int main(void) {
  printf ("Apresente a altura e o sexo de uma pessoa, respectivamente:\n");
  float Homens, Mulheres, h;
  char c, H, M;
  scanf ("%f", &h);
  scanf ("%c", &c);
  if (c == H) {
  Homens: (72.7 * h) - 58.0;
    printf ("O peso ideal dessa pessoa eh: %f \n", Homens);
  }
  if (c == M) {
    Mulheres: (62.1 * h) - 44.7;
    printf ("O peso ideal dessa pessoa eh: %f \n", Mulheres);
  }
  return 0;
}

// EXERCÍCIO 11

// EXERCÍCIO 12

// EXERCÍCIO 13

// EXERCÍCIO 14

// EXERCÍCIO 15

// EXERCÍCIO 16

// EXERCÍCIO 17

// EXERCÍCIO 18

// EXERCÍCIO 19

// EXERCÍCIO 20

// EXERCÍCIO 21

// EXERCÍCIO 22

// EXERCÍCIO 23

//EXERCÍCIO 24

//EXERCÍCIO 25

//EXERCÍCIO 26

//EXERCÍCIO 27

//EXERCÍCIO 28

//EXERCÍCIO 29

//EXERCÍCIO 30

//EXERCÍCIO 31

//EXERCÍCIO 32

//EXERCÍCIO 33

//EXERCÍCIO 34

//EXERCÍCIO 35

//EXERCÍCIO 36

//EXERCÍCIO 37

//EXERCÍCIO 38

//EXERCÍCIO 39

//EXERCÍCIO 40
