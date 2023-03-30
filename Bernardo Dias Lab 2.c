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

// EXERCÍCIO 10
#include <stdio.h>
#include <math.h>

int main () {
  printf ("Apresente a altura e o sexo de uma pessoa, respectivamente:\n");
  float h, Homens, Mulheres;
  char c, H, M;
  scanf ("%f", &h);
  scanf (" %c", &c);
  if (c == 'H') {
  Homens = 72.7 * h - 58.0;
    printf ("O peso ideal dessa pessoa eh: %.2f \n", Homens);
  }
  if (c == 'M') {
    Mulheres = 62.1 * h - 44.7;
    printf ("O peso ideal dessa pessoa eh: %.2f \n", Mulheres);
  }
  return 0;
}

// EXERCÍCIO 11

#include <stdio.h>
#include <math.h>

int main () {
  printf ("Apresente um numero maior que zero:\n");
  int soma, n, a1, a2, a3, a4, a5;
  //n = número; a1= algarismo 1; a2 = algarismo 2; a3 = algarismo 3; a4 - algarismo 4; a5 = algarismo 5.
  scanf("%d", &n);
  if (n < 0) {
    printf ("Numero invalido\n");
  }
  else {
    a1 = n/10000;
    a2 = (n -a1*10000)/1000;
    a3 = (n - a1*10000 - a2*1000)/100;
    a4 = (n - a1*10000 - a2*1000 -a3*100)/10;
    a5 = (n - a1*10000 - a2*1000 - a3*100 - a4*10)/1;
    soma = a1 + a2 + a3 + a4 + a5;
    printf ("A soma dos algarismos desse numero equivale a %d \n", soma);
  }
  return 0;
}

// EXERCÍCIO 12

#include <stdio.h>
#include <math.h>

int main () {
  printf ("Apresente um numero maior que zero:\n");
  float logaritmo, n;
  scanf("%f", &n);
  if (n < 0) {
    printf ("Numero invalido\n");
  }
  else {
    logaritmo = log10(n);
    printf ("O logaritmo desse numero equivale a: %.3f \n", logaritmo);
  }
  return 0;
}

// EXERCÍCIO 13

#include <stdio.h>
#include <math.h>

int main () {
  printf ("Apresente as notas das 3 provas feitas pelo estudante: \n");
  float media, nota1, nota2, nota3;
  scanf("%f", &nota1);
  scanf("%f", &nota2);
  scanf("%f", &nota3);
  media = (nota1*1 +nota2*1 + nota3*2)/4; 
  if (media > 60 || media == 60) {
    printf ("Estudante aprovado\n");
  }
  else {
  printf ("Estudante reprovado\n");
  }
  return 0;
}

// EXERCÍCIO 14

#include <stdio.h>
#include <math.h>

int main () {
  printf ("Apresente as 3 notas do estudante: \n");
  float Nota_Final, TL, AS, EF;
  //TL = trab de laboratorio; AS = avaliação semestral; EF = exame final.
  scanf("%f", &TL);
  scanf("%f", &AS);
  scanf("%f", &EF);
  Nota_Final = (TL*2 + AS*3 + EF*5)/10;
  if (TL < 0 || TL >10 || AS < 0 || AS >10 || EF < 0 || EF >10) {
    printf ("Nota invalida\n");
  }
  else if (0 < Nota_Final && Nota_Final <2.9){
        printf ("Estudante reprovado\n");
  }
  else if (3 < Nota_Final && Nota_Final < 4.9) {
    printf ("Estudante de recuperacao\n");
  }
  else {
    printf ("Estudante aprovado\n");
  }

  return 0;
}


// EXERCÍCIO 15

#include <stdio.h>
#include <math.h>

int main () {
  printf ("Digite um numero: \n");
  int dia;
  scanf ("%d", &dia);
  switch (dia) {
    case 1:
    printf ("Domingo\n"); break;
    case 2:
    printf ("Segunda\n"); break;
    case 3:
    printf ("Terça\n"); break;
    case 4:
    printf ("Quarta\n"); break;
    case 5:
    printf ("Quinta"); break;
    case 6:
    printf ("Sexta\n"); break;
    case 7:
    printf ("Sabado\n"); break;
    default:
    printf ("Nao eh um dia da semana\n");
       
  }
  return 0;
}

// EXERCÍCIO 16

#include <stdio.h>
#include <math.h>

int main () {
  printf ("Digite um numero: \n");
  int mes;
  scanf ("%d", &mes);
  switch (mes) {
    case 1:
    printf ("Janeiro\n"); break;
    case 2:
    printf ("Fevereiro\n"); break;
    case 3:
    printf ("Março\n"); break;
    case 4:
    printf ("Abril\n"); break;
    case 5:
    printf ("Maio"); break;
    case 6:
    printf ("Junho\n"); break;
    case 7:
    printf ("Julho\n"); break;
    case 8:
    printf ("Agosto\n"); break;
    case 9:
    printf ("Setembro\n"); break;
    case 10:
    printf ("Outubro\n"); break;
    case 11:
    printf ("Novembro\n"); break;
    case 12:
    printf ("Dezembro\n"); break;
    default:
    printf ("Nao eh um mes do ano\n");
       
  }
  return 0;
}

// EXERCÍCIO 17

#include <stdio.h>
#include <math.h>

int main () {
  printf ("Apresente os valores das bases maiores e menores de um trapezio, assim como sua altura: \n");
  float basemaior, basemenor, altura, A;
  //TL = trab de laboratorio; AS = avaliação semestral; EF = exame final.
  scanf("%f", &basemaior);
  scanf("%f", &basemenor);
  scanf("%f", &altura);
  A = altura * (basemaior + basemenor)/2;
  printf ("A area desse trapezio equivale a: %.2f\n", A);
  return 0;
}

// EXERCÍCIO 18

#include <math.h>
#include <stdio.h>

int main() {
  printf("Escolha uma das opções a seguir: \n");
  printf("A- Adicao \n B-Subtracao \n C-Multiplicacao \n D- Divisao \n");
  char opcao;
  float a, b, Resultado;
  scanf("%c", &opcao);
  switch (opcao)
  {
    case 'A':
    printf ("Escolha dois numeros:\n");
    scanf ("%f\n %f",&a, &b);
    Resultado = a + b;
    printf ("O resultado dessa adicao eh: %.2f", Resultado); break;
    case 'B':
    printf ("Escolha dois numeros:\n");
    scanf ("%f\n %f",&a, &b);
    Resultado = a - b;
      printf ("O resultado dessa subtracao eh: %.2f", Resultado); break;
    printf ("");
    case 'C':
    printf ("Escolha dois numeros:\n");
    scanf ("%f\n %f",&a, &b);
    Resultado = a * b;
    printf ("O resultado dessa multiplicacao eh: %.2f", Resultado); break;
    printf ("");
    case 'D':
    printf ("Escolha dois numeros:\n");
    scanf ("%f\n %f",&a, &b);
    Resultado = a/b;
    printf ("O resultado dessa divisao eh: %.2f", Resultado); break;
    default:
    printf ("Nao eh uma das alternativas\n");
    
  }  
  return 0;
}

// EXERCÍCIO 19

#include <math.h>
#include <stdio.h>

int main() {
  printf("Digite um valor: \n");
  int n;
  scanf("%d", &n);
  if (n%3 == 0 && n%15 != 0) {
    printf ("Esse numero eh divisivel por 3\n");
  }
  else if (n%5 == 0 && n%15 !=0) {
    printf ("Esse numero eh divisivel por 5\n");
  }
  else if (n%15 == 0){
    printf ("Esse numero eh divisivel por 5 e 3 ao mesmo tempo\n");
  }
  else {
    printf ("Esse numero nao pode ser divisivel pelos dois\n");
  }
  return 0;
}

// EXERCÍCIO 20

#include <math.h>
#include <stdio.h>

int main() {
  printf("Digite 3 valores: \n");
  float A, B, C;
  scanf ("%f", &A);
  scanf ("%f", &B);
  scanf ("%f", &C);
  if (A > 0 && B > 0 && C> 0 && A < B + C && B < C + A && C < A + B) {
    if (A == B && A == C && B == C) {
    printf ("Este eh um triangulo equilatero\n");
    }
    if ((A == B && A != C)|| (A == C && A != B) || (B == C && B != A)){
    printf ("Este eh um triangulo isoceles\n");
    }
    if (A != B && A != C && B != C) {
    printf ("Este eh um triangulo escaleno\n");
    }
    
  }
  if (A < 0 || B < 0 || C < 0 || A > B + C || B > A + C || C > B + A) {
    printf ("Nao podem ser valores dos lados de um triangulo\n");
  }
  return 0;
}

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
