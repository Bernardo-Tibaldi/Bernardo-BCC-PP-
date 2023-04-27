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

#include <stdio.h>
#include <math.h>
float Verifica (float a) {
  float b;
  b = sqrt (a);
  if (pow((b), 2) == a) {
    printf ("Eh um quadrado perfeito\n");
  }
  else {
    printf ("Nao eh um quadrado perfeito\n");
  }
}

int main () {
  printf ("Digite um numero:\n");
  float a;
  scanf ("%f", &a);
  Verifica (a);
  return 0;
}

//EXERCÍCIO 5

#include <stdio.h>
#include <math.h>
#define PI 3.14
float raio, esfera;
float Volume (float raio) {
  esfera = (4 * PI * (pow (raio, 3)))/3;
  printf ("O Volume de uma esfera com esse raio eh: %.2f\n", esfera);
}

int main () {
  printf ("Apresente um raio:\n");
  scanf ("%f", &raio);
  Volume (raio);
  return 0;
}

//EXERCÍCIO 6

#include <stdio.h>
int horas, minutos, segundos, Tempo;

int Conversao (int horas, int minutos, int segundos) {
  Tempo = (horas*3600) + (minutos*60) + segundos;
  printf ("Esse tempo equivale a %d segundos\n", Tempo);
}

int main () {
  printf ("Apresente as horas, minutos e segundos:\n");
  scanf ("%d : %d : %d", &horas, &minutos, &segundos);
  Conversao (horas, minutos, segundos);
  return 0;
}


//EXERCÍCIO 7

#include <stdio.h>
float Celsius, Conversao;
float Fahrenheit (float Celsius) {
  return ((Celsius*9)/5) + 32;  
}

int main () {
  printf ("Apresente uma temperatura em Celsius:\n");
  scanf ("%f", &Celsius);
  Conversao = Fahrenheit (Celsius);
  printf ("Esse valor em Fahrenheit eh: %.2f", Conversao);
  return 0;
}


//EXERCÍCIO 8

#include <stdio.h>
#include <math.h>
float a, b, resultado;
float hipotenusa (float a, float b) {
  return sqrt(pow(a, 2) + pow(b, 2));
}

int main () {
  printf ("Apresente dois catetos de um triangulo:\n");
  scanf ("%f", &a);
  scanf ("%f", &b);
  resultado = hipotenusa(a, b);
  printf ("A hipotenusa desse triangulo eh: %.2f\n", resultado);
  return 0;
}


//EXERCÍCIO 9

#include <stdio.h>
#include <math.h>
#define PI 3.141592
float altura, raio, cilindro;

float volume (float raio, float altura) {
  return PI * altura * (pow(raio, 2));
}

int main () {
  printf ("Apresente o raio e a altura de um cilindro, respectivamente:\n");
  scanf ("%f", &raio);
  scanf ("%f", &altura);
  cilindro = volume (raio, altura);
  printf ("O volume desse cilindro eh: %.3f \n", cilindro);
  return 0;
}

//EXERCÍCIO 10

#include <stdio.h>
int a, b, resultado;
int comparacao (int a, int b) {
  if (a > b) {
    return a;
  }
  else if (a < b) {
    return b;
  }
  else {
    printf ("Os dois valores são iguais\n");
    return 0;
  }
}
int main () {
  printf ("Indique dois valores:\n");
  scanf ("%d", &a);
  scanf ("%d", &b);
  resultado = comparacao (a, b);
  if (a - b != 0) {
  printf ("%d eh maior\n", resultado);
  }
  else if (a - b == 0) {
    printf ("\n");
  }
  return 0;
}

//EXERCÍCIO 11

#include <stdio.h>
float n1, n2, n3, resultado;
char media, A, P;
float calculo (float media) {
  if (media == 'A') {
    return (n1+n2+n3)/3;
  }
  else if (media == 'P') {
    return ((n1*5) + (n2*3) + (n3*2))/ (n1+n2+n3); 
  }
  else {
    printf ("Erro!\n");
  }
} 

int main () {
  printf ("Apresente qual media sera aplicada:\n");
  scanf ("%c", &media);
  if (media == 'A') {
    printf ("Indique as notas:\n");
    scanf ("%f %f %f", &n1, &n2, &n3);
    resultado = calculo ('A');
    printf ("A media aritmetica dessas notas eh: %.2f\n", resultado);
  }
  else if (media == 'P') {
    printf ("Indique as notas:\n");
    scanf ("%f %f %f", &n1, &n2, &n3);
    resultado = calculo ('P');
    printf ("A media ponderada dessas notas eh: %.2f\n", resultado);
  }
  return 0;
}

//EXERCÍCIO 12

#include <stdio.h>
int numero, soma, a, b, c, d, n1, n2, n3;

int calculo (int numero) {
  a = numero/1000;
  n1 = numero%1000;
  b = n1/100;
  n2 = n1%100;
  c = n2/10;
  d = n2%10;
  return a + b + c + d;
}

int main () {
  printf ("Apresente um numero de 4 algarismos:\n");
  scanf ("%d", &numero);
  if (numero > 0) {
    soma = calculo (numero);
    printf ("A soma dos algarismos desse numero eh %d\n", soma);
  }
  else {
    printf ("Numero Invalido\n");
  }
  return 0;
}

//EXERCÍCIO 13

#include <stdio.h>
int n1, n2, resultado;
char simbolo;

int operacao (char simbolo) {
  if (simbolo == '+') {
    return n1+n2;
  }
  else if (simbolo == '-') {
    return n1-n2;
  }
  else if (simbolo == '*') {
    return n1*n2;
  }
  else if (simbolo == '/') {
    return n1/n2;
  }
  else {
    printf ("Erro!\n");
    return 0;
  }
}

int main() {
  printf("Escolha uma operacao matematica:\n");
  printf (" adicao: +\n subtracao: -\n multiplicacao: *\n divisao: /\n");
  scanf ("%c", &simbolo);
  if (simbolo == '+') {
    printf ("Apresente dois valores para a adicao:\n");
    scanf("%d %d", &n1, &n2);
    resultado = operacao ('+');
    printf ("%d + %d = %d", n1, n2, resultado);
  }
  else if (simbolo == '-'){
    printf ("Apresente dois valores para a subtracao:\n");
    scanf("%d  %d", &n1, &n2);
    resultado = operacao ('-');
    printf ("%d - %d = %d", n1, n2, resultado);
  }
  else if (simbolo == '*') {
    printf ("Apresente dois valores para a multiplicacao:\n");
    scanf("%d %d", &n1, &n2);
    resultado = operacao ('*');
    printf ("%d * %d = %d", n1, n2, resultado);
  }
  else if (simbolo == '/') {
    printf ("Apresente dois valores para a divisao:\n");
    scanf("%d %d", &n1, &n2);
    resultado = operacao('/');
    printf ("%d / %d = %d", n1, n2, resultado);
  }
  else {
    printf ("Erro!\n");
  }
  return 0;
}

//EXERCÍCIO 14

#include <stdio.h>

float consumo, Km, litros;

float calculo (float Km, float litros) {
  consumo = Km/litros;
  if (consumo < 8) {
    printf ("Venda o carro!\n");
    return 0;
  }
  else if (consumo >= 8 && consumo <= 14) {
    printf ("Econômico!\n");
    return 0;
  }
  else if (consumo > 14) {
    printf ("Super econômico!\n");
    return 0;
  }
}

int main () {
  printf ("Indique a distancia e a quantidade de litros gasta por um carro em um determinado percurso para que o carro seja avaliado com base no seu consumo:\n");
  scanf ("%f", &Km);
  scanf ("%f", &litros);
  calculo (Km, litros);
  return 0;
}

//EXERCÍCIO 15

#include <stdio.h>

float a, b, c;

float triangulo (float a, float b, float c) {
  if (a == b && b == c) {
    printf ("Triangulo Equilatero\n");
  }
  else if ((a == b && a != c && b != c) || (a == c && a != b && c != b) || (b == c &&  b != a && c != a)) {
   printf ("Triangulo Isoceles\n"); 
  }
  else if (a != b && b != c && a != c) {
    printf ("Triangulo Escaleno\n");
  }
  return 0;
}

float verifica (float a, float b, float c) {
  if (a < (b+c) && b < (a+c) && c < (b+a)) {
    triangulo (a, b, c);
  }
  else {
    printf ("Nao eh um triangulo\n");
    return 0;
  }
}

int main () {
  printf ("Determine 3 lados de um triangulo:\n");
  scanf ("%f %f %f", &a, &b, &c);
  verifica (a, b, c);
  return 0;
}

//EXERCÍCIO 16

#include <stdio.h>
int a, i;
int desenha_linha (int a) {
  for (i = 0; i <= a; i++) {
    printf("=");
  }
  return 0;
}

int main () {
  printf ("Informe uma quantidade:\n");
  scanf ("%d", &a);
  desenha_linha (a);
  return 0;
}

//EXERCÍCIO 17

#include <stdio.h>
int a, b, soma = 0, c;
int calculo (int a, int b) {
  c = a+1;
  do {
    soma = soma+c;
    c++;
  } while (c < b);
  printf ("A soma dos valores entre esses numeros eh: %d\n", soma);
  return 0;
}

int main () {
  printf ("Informe dois numeros:\n");
  scanf ("%d %d", &a, &b);
  calculo (a, b);
  return 0;
}

//EXERCÍCIO 18

#include <stdio.h>
int x, z, i, resultado = 1;
int potencia (int x, int z) {
  for (i = 0; i<z;i++) {
    resultado = resultado *x;
  }
  printf("%d\n", resultado);
  return 0;
}

int main () {
  printf ("Apresente dois valores para uma funcao exponencial:\n");
  scanf ("%d %d", &x, &z);
  potencia (x, z);
  return 0;
}

//EXERCÍCIO 19

#include <stdio.h>
int x, i, resultado = 1;

int fatorial (int x) {
  for (i = 1; i <= x; i++) {
    resultado = resultado * i;
  }
  printf ("%d\n", resultado);
  return 0;
}

int main () {
  printf ("Digite um numero para o seu fatorial\n");
  scanf ("%d", &x);
  fatorial (x);
  return 0;
}

//EXERCÍCIO 20

#include <stdio.h>
#include <math.h>

int numero, contador = 1, i, j, Contador_primo; //Contador já considera o 2.

int primo (int numero) {
  for (i = 3; i < numero; i += 2) {
    Contador_primo = 1;
    for (j = 3; j <= sqrt(numero); j +=2) {
      if (i % j == 0) {
        Contador_primo = 0;
        break;
      }
    }
      if (Contador_primo == 1)
      {
        contador = contador + 1;
      }
  }
  return contador;
}

int main () {
  printf ("Indique um numero:\n");
  scanf ("%d", &numero);
  primo (numero);
  printf ("O numero de primos entre 0 e %d eh %d", numero, contador);
  return 0;
}

//EXERCÍCIO 21

#include <stdio.h>
int x, i, j;

int fatorial (int x) {
  for (i = 0; i < x; i++) {
      for (j = 0; j < i; j++) {
      printf("!");
      }
  printf("\n");
    }
  return 0;
}

int main () {
  printf ("Digite um numero:\n");
  scanf ("%d", &x);
  fatorial (x);
  return 0;
}

//EXERCÍCIO 23

#include <stdio.h>
int n, i, j;

int fatorial (int n) {
  for (i = 0; i < n; i++) {
      for (j = 0; j < i; j++) {
      printf("*");
      }
  printf("\n");
    }
  for (i = n; i > 0; i--) {
      for (j = 0; j < i; j++) {
      printf("*");
      }
  printf("\n");
  }
  return 0;
}

int main () {
  printf ("Digite um numero:\n");
  scanf ("%d", &n);
  fatorial (n);
  return 0;
}

//EXERCÍCIO 24

#include <stdio.h>
int n, i, j, k;
int piramide(int n) {
  for (i = 0; i < n; i++) {
    for (j = 0; j < n - i; j++) {
      printf(" ");
    }
    for (k = 1; k <= (2 * i - 1); k++) {
      printf("!");
    }
    printf("\n");
  }
}

int main() {
  printf("Digite um numero:\n");
  scanf("%d", &n);
  piramide(n);
  return 0;
}
