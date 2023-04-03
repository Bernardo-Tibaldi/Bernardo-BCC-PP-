//Exercício 1

#include <math.h>
#include <stdio.h>

int main() {
  int x = 0, y, w = 1;
  do {
    y= 3*w;
    w++;
    printf ("%d\n",y);
    x++;
  } while (x < 5);
  return 0;
}

//Exercício 2

#include <math.h>
#include <stdio.h>

int main() {
  int x, y=0, z=0;
  for (x=1; x<=100; x++) {
    printf ("%d ", x);
  }
  printf ("\n");
  printf ("\n");
  printf ("\n");
  while (y < 100) {
    y++;
    printf ("%d ", y);
  }
  printf ("\n");
  printf ("\n");
  printf ("\n");
  do {
    z++;
    printf ("%d ", z);
  } while (z <100);
  return 0;
}

//Exercício 3

#include <math.h>
#include <stdio.h>

int main() {
  int x=11;
  while (x>0) {
    x--;
    printf ("%d\n",x);
  }
  printf ("FIM!\n");
  return 0;
}

//Exercício 4

#include <math.h>
#include <stdio.h>

int main() {
  int x, y=0;
  for (x=0; x < 100; x++) {
    y = y+1000;
    printf ("%d ", y);
  }
  return 0;
}

//Exercício 5

#include <math.h>
#include <stdio.h>

int main() {
  int x, soma = 0, y=0;
  printf ("Escreva numeros para uma soma:\n");
  do {
    scanf ("%d", &x);
    soma = soma+x;
    y++;
  } while (y<10);
  printf (" A soma desses valores eh: %d ", soma);
  return 0;
}

//Exercício 6

#include <math.h>
#include <stdio.h>

int main() {
  int x, y=1;
  float media = 0;
  printf ("Escreva numeros para uma media:\n");
  do {
    scanf ("%d", &x);
    media = (media+x);
    y++;
  } while (y<=10);
  media = media/10;
  printf (" A media desses valores eh: %.2f ", media);
  return 0;
}

//Exercício 7

#include <math.h>
#include <stdio.h>

int main() {
  int x, y;
  float media = 0;
  printf ("Escreva numeros para uma media:\n");
  for (y=1; y<=10; y++) {
    scanf ("%d", &x);
    if (x >= 0) {
    media = (media+x);
    }
    else {
      printf ("Nao eh um valor reconhecido\n");
        y--;
    }
  }
  media = media/10;
  printf (" A media desses valores eh: %.2f ", media);
  return 0;
}

//Exercício 8

#include <stdio.h>
#include <math.h>

int main () {
  int y, maior, menor, numero;
  printf ("Digite 10 valores quaisquer:\n");
  scanf ("%d", &numero);
  maior = numero;
  menor = numero;
  for (y=1; y<10; y++) {
    scanf ("%d", &numero);
    if (numero>maior) {
      maior = numero;
    }
    else if (numero<menor) {
      menor = numero;
    }
  }
  printf ("O maior numero dentre esses eh %d\n", maior);
  printf ("O menor numero dentre esses eh %d\n", menor);
  return 0;
}

//Exercício 9

#include <stdio.h>
#include <math.h>

int main () {
  int y, n;
  printf ("Digite um valor n qualquer:\n");
  scanf ("%d", &n);
  printf ("Os numeros impares ate %d sao:\n", n);
  for (y=0; y<=n; y++) {
    if (y%2 != 0) {
      printf ("%d ", y);
    }
  }
  return 0;
}

//Exercício 10

#include <stdio.h>
#include <math.h>

int main () {
  int y, soma = 0;
  for (y=1; y<=50; y++) {
    if (y%2 == 0) {
    soma = soma+y;
    }
  }
  printf ("\n");
  printf ("a soma desses valores: %d", soma);
  return 0;
}

//Exercício 11

#include <stdio.h>
#include <math.h>

int main () {
  int y, n = 0;
  printf ("Digite um valor n qualquer:\n");
  scanf ("%d", &n);
  for (y=0; y<=n; y++) {
    printf ("%d ", y);
  }
  return 0;
}

//Exercício 12

#include <stdio.h>
#include <math.h>

int main () {
  int y, n = 0, soma = 0;
  printf ("Digite um valor n qualquer:\n");
  scanf ("%d", &n);
  for (y=1; y<=n; y++) {
    if (n%y == 0) {
      soma = soma + y;
    }
  }
  printf ("A soma de seus divisores eh %d", soma);
  return 0;
}

//Exercício 13

#include <stdio.h>
#include <math.h>

int main () {
  int y, soma = 0;
  for (y=1; y<=1000; y++) {
    if ((y%5 == 0) && (y%3 == 0)) {
    soma = soma+y;
    }
  }
  printf ("\n");
  printf ("a soma desses valores: %d", soma);
  return 0;
}

//Exercício 14

//Exercício 15

//Exercício 16

//Exercício 17

//Exercício 18

//Exercício 19

//Exercício 20

//Exercício 21

//Exercício 22

//Exercício 23
