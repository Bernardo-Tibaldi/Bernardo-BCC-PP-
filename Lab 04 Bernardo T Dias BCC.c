//EXERCÍCIO 1

#include <stdio.h>

int dobro (int a) {
  return 2*a;
}
int main () {
  printf ("Digite um numero:\n");
  int a, resultado;
  scanf ("%d", &a);
  resultado = dobro(a);
  printf ("O dobro desse valor eh: %d\n", resultado);
  return 0;
}

//EXERCÍCIO 2

#include <stdio.h>
int Extenso (int dia, int mes, int ano) {
  if (mes == 1) {
    printf ("%d de Janeiro de %d", dia, ano);
  }
  if (mes == 2) {
    printf ("%d de Fevereiro de %d", dia, ano);
  }
  if (mes == 3) {
    printf ("%d de Marco de %d", dia, ano);
  }
  if (mes == 4) {
    printf ("%d de Abril de %d", dia, ano);
  }
  if (mes == 5) {
    printf ("%d de Maio de %d", dia, ano);
  }
  if (mes == 6) {
    printf ("%d de Junho de %d", dia, ano);
  }
  if (mes == 7) {
    printf ("%d de Julho de %d", dia, ano);
  }
  if (mes == 8) {
    printf ("%d de Agosto de %d", dia, ano);
  }
  if (mes == 9) {
    printf ("%d de Setembro de %d", dia, ano);
  }
  if (mes == 10) {
    printf ("%d de Outubro de %d", dia, ano);
  }
  if (mes == 11) {
    printf ("%d de Novembro de %d", dia, ano);
  }
  if (mes == 12) {
    printf ("%d de Dezembro de %d", dia, ano);
  }
}
 
int main () {
  printf ("Digite uma data:\n");
  
  int dia, mes, ano;
  scanf ("%d / %d / %d", &dia, &mes, &ano);
  Extenso (dia, mes, ano);
  return 0;
}

//EXERCÍCIO 3

#include <stdio.h>
int Valor (int a) {
  if (a > 0) {
    return 1;
  }
  if (a == 0) {
    return 0;
  }
  if (a < 0) {
    return -1;
  }
}
 
int main () {
  printf ("Digite um numero:\n");
  
  int a, Resultado;
  scanf ("%d", &a);
  Resultado = Valor (a);
  printf ("%d\n", Resultado);
  return 0;
}

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

//EXERCÍCIO 17

//EXERCÍCIO 18

//EXERCÍCIO 19

//EXERCÍCIO 20

//EXERCÍCIO 21

//EXERCÍCIO 23

//EXERCÍCIO 24
