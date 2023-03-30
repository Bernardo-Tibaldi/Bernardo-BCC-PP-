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

#include <math.h>
#include <stdio.h>

int main() {
  printf("Escolha a opcao:\n 1- Soma de 2 numeros.\n 2- Diferenca entre 2 numeros (maior pelo menor).\n 3- Produto entre 2 numeros.\n 4- divisao entre 2 numeros (o denominador nao pode ser zero).\n");
  int opcao;
  float a, b, resultado;
  scanf ("%d", &opcao);
  switch (opcao) {
    case 1:
    printf ("Digite 2 valores:\n");
    scanf ("%f", &a);
    scanf ("%f", &b);
    resultado = a + b;
    printf ("O resultado dessa soma eh: %.2f", resultado); break;
    case 2:
    printf ("Digite 2 valores:\n");
    scanf ("%f", &a);
    scanf ("%f", &b);
    resultado = a - b;
    printf ("O resultado dessa diferenca eh: %.2f", resultado); break;
    case 3:
    printf ("Digite 2 valores:\n");
    scanf ("%f", &a);
    scanf ("%f", &b);
    resultado = a * b;
    printf ("O resultado dessa multiplicacao eh: %.2f", resultado); break;
    case 4:
    printf ("Digite 2 valores:\n");
    scanf ("%f", &a);
    scanf ("%f", &b);
    resultado = a/b;
    printf ("O resultado dessa divisao eh: %.2f", resultado); break;
    
    default:
    printf ("Erro, opcao invalida.");
  }
  
  return 0;
}

// EXERCÍCIO 22

#include <math.h>
#include <stdio.h>

int main() {
  printf("Informe sua idade e o tempo de servico:\n");
  int idade, tempo;
 
  scanf ("%d", &idade);
  scanf ("%d", &tempo);
  if (idade >= 65 || tempo >= 30 || (idade >= 60 && tempo >= 25)) {
    printf ("Voce ja pode se aposentar");
  }
  else {
    printf ("Voce nao pode se aposentar ainda");
  }
  
  return 0;
}

// EXERCÍCIO 23

#include <math.h>
#include <stdio.h>

int main() {
  printf("Informe o ano em questao:\n");
  int ano;
 
  scanf ("%d", &ano);
  if (ano%400 == 0 || (ano%4 == 0 && ano%100 != 0)) {
    printf ("Esse ano eh bissexto\n");
  }
  else {
    printf ("Esse ano nao eh bissexto\n");
  }
  
  return 0;
}

//EXERCÍCIO 24

#include <math.h>
#include <stdio.h>

int main() {
  int estado;
  float valor, PrecoFinal;
  printf("Apresente o valor e um dos estados destinos de um produto: \n 1- Minas Gerais;\n 2- Sao Paulo; \n 3- Rio de Janeiro;\n 4-Mato Grosso do Sul\n");
  scanf ("%f", &valor);
  scanf ("%d", &estado);
  switch (estado) {
    case 1:
    PrecoFinal = valor * 0.07;
    printf ("O preco final com imposto desse produto sera: %.2f reais \n", PrecoFinal); break;
    case 2:
    PrecoFinal = valor * 0.12;
    printf ("O preco final com imposto desse produto sera: %.2f reais \n", PrecoFinal); break;
    case 3:
    PrecoFinal = valor * 0.15;
    printf ("O preco final com imposto desse produto sera: %.2f reais \n", PrecoFinal); break;
    case 4:
    PrecoFinal = valor * 0.08;
    printf ("O preco final com imposto desse produto sera: %.2f reais \n", PrecoFinal); break;
    
    default:
    printf ("Nao eh um estado da lista\n");
  }
   
  return 0;
}

//EXERCÍCIO 25

#include <math.h>
#include <stdio.h>

int main() {
  printf("Informe os valores de a, b e c:\n");
  float a, b, c, delta, x1,x2;
  scanf ("%f", &a);
  scanf ("%f", &b);
  scanf ("%f", &c);
  delta = b*b - 4*a*c;
  x1 = (-b + sqrt (delta))/ 2*a;
  x2 = (-b - sqrt (delta))/ 2*a;
  if (delta < 0) {
    printf ("Nao existe raiz real\n");
  }
  else if (delta == 0) {
    printf ("Raiz unica\n");
  }
  else if (delta > 0){
    printf ("Suas raizes sao: %.2f e %.2f\n", x1, x2);
  }
  return 0;
}

//EXERCÍCIO 26

#include <math.h>
#include <stdio.h>

int main() {
  printf("Informe a distancia, em km, e a quantidade de litros de gasolina consumidos por um carro:\n");
  float distancia, litros, consumo;
  scanf ("%f", &distancia);
  scanf ("%f", &litros);
  consumo = distancia / litros;
  if (consumo < 8) {
    printf ("Venda o carro! \n");
  }
  else if ( consumo >= 8 && consumo <= 14) {
    printf ("Economico! \n");
  }
  else if (consumo > 14) {
    printf ("Super Economico! \n");
  }
  return 0;
}

//EXERCÍCIO 27

#include <math.h>
#include <stdio.h>

int main() {
  printf("Informe a idade de um nadador\n");
  int idade;
  scanf ("%d", &idade);
  if (5 <= idade && idade <= 7) {
    printf ("Infantil A \n");
  }
  else if ( idade >= 8 && idade <= 10) {
    printf ("Infanil B \n");
  }
  else if (idade >= 11 && idade <= 13) {
    printf ("Juvenil A \n");
  }
  else if (idade >= 14 && idade <= 17) {
    printf ("Juvenil B \n");
  }
  else if (idade >= 18) {
    printf ("Senior \n");
  }
  return 0;
}

//EXERCÍCIO 28

#include <math.h>
#include <stdio.h>

int main() {
  printf("Leia 3 numeros inteiros e execute uma media: \n");
  printf ("Escolha uma das medias:\n A-Geometrica\n B-Ponderada \n C-Harmonica \n D-Aritmetica\n");
  int x, y, z, media;
  char opcao;
  scanf (" %d\n", &x);
  scanf (" %d\n", &y);
  scanf (" %d\n", &z);
  scanf (" %c", &opcao);
  switch (opcao) {
    case 'A':
    media = cbrt (x*y*z);
    printf ("A media geometrica desses valores eh: %d \n", media); break;
    case 'B':
    media = ((1*x)+(2*y)+(3*z))/3;
    printf ("A media ponderada desses valores eh: %d \n", media); break;
    case 'C':
    media = 1/ (1/x+1/y+1/z);
    printf ("A media harmonica desses valores eh: %d \n", media); break;
    case 'D':
    media = (x+y+z)/3;
    printf ("A media aritmetica desses valores eh: %d \n", media); break;
    default:
    printf ("Nao eh uma opcao\n");
  }
  return 0;
}

//EXERCÍCIO 29

#include <math.h>
#include <stdio.h>

int main() {
  int a, b, resposta, soma, questao =0, acertos = 0;
  printf("====Prova==== \n");
  do {
    srand(time(NULL));
    a = (rand() % 100) + 1;
    b = (rand() % 100) + 1;
    printf ("Qual a soma de %d + %d\?\n", a, b);
    soma = a + b;
    resposta = soma;
    scanf ("%d", &resposta);
    printf ("\n");
    if (resposta != soma) {
      printf ("Resposta Errada! A resposta correta eh: %d\n", soma);
    }
    else if (resposta == soma)
    {
      printf ("Resposta Correta!\n");
      acertos ++;
    }
    questao ++;
  } while (questao < 5);
  
    printf ("Voce acertou %d questoes!\n", acertos);
  
  
  return 0;
}

//EXERCÍCIO 30

#include <math.h>
#include <stdio.h>

int main() {
  int x, y, z;
  printf("Apresente 3 numeros distintos: \n");
  scanf("%d", &x);
  scanf("%d", &y);
  scanf("%d", &z);

  if (x < y && x < z && y < z){
    printf ("%d, %d, %d\n", x, y, z);
  }
  if (x < y && x < z && y > z){
    printf ("%d, %d, %d\n", x, z, y);
  }
  if (x > y && x < z && y < z){
    printf ("%d, %d, %d\n", y, x, z);
  }
  if (x < y && x > z && y > z){
    printf ("%d, %d, %d\n", z, x, y);
  }
  if (x > y && x > z && y < z){
    printf ("%d, %d, %d\n", y, z, x);
  }
  if (x > y && x > z && y > z){
    printf ("%d, %d, %d\n", z, y, x);
  }
   
  return 0;
}

//EXERCÍCIO 31

#include <math.h>
#include <stdio.h>

int main() {
  printf("Informe a altura e o peso:\n");
  float altura, peso;
  scanf ("%f", &altura);
  scanf ("%f", &peso);
  if (altura < 1.20 && peso <= 60) {
    printf ("A\n");
  }
  if (altura < 1.20 && (peso > 60 && peso <= 90)) {
    printf ("D\n");
  }
  if (altura < 1.20 && ( peso > 90)) {
    printf ("G\n");
  }
  if ((altura > 1.2 && altura < 1.70) && (peso <= 60)) {
    printf ("B\n");
  }
  if ((altura > 1.2 && altura < 1.70) && (peso > 60 && peso <= 90)) {
    printf ("E\n");
  }
  if ((altura > 1.2 && altura < 1.70) && (peso > 90)) {
    printf ("H\n");
  }
  if ((altura > 1.7) && (peso <= 60)) {
    printf ("C\n");
  }
  
  if (altura > 1.7 && (peso > 60 && peso <= 90)) {
    printf ("F\n");
  }
  if (altura > 1.7 && (peso > 90)) {
    printf ("I\n");
  }
          
  return 0;
}

//EXERCÍCIO 32

//EXERCÍCIO 33

//EXERCÍCIO 34

//EXERCÍCIO 35

#include <math.h>
#include <stdio.h>

int main() {
   int dia, mes;
  printf("Insira uma data\n");
  scanf ("%d/%d", &dia, &mes);
  if (mes == 1){
    if (dia <= 31) {
      printf ("Data Valida\n");
    }
    else {
      printf("Data Invalida\n");
    }
  }
  if (mes == 2){
    if (dia <= 28){
      printf ("Data Valida\n");
    }
    else {
      printf("Data Invalida\n");
    }
  }
  if (mes == 3){
    if (dia <= 31) {
      printf ("Data Valida\n");
    }
    else {
      printf("Data Invalida\n");
    }
  }
  if (mes == 4){
    if (dia <= 30) {
      printf ("Data Valida\n");
    }
    else {
      printf("Data Invalida\n");
    }
  }
  if (mes == 5){
    if (dia <= 31) {
      printf ("Data Valida\n");
    }
    else {
      printf("Data Invalida\n");
    }
  }
  if (mes == 6){
    if (dia <= 30) {
      printf ("Data Valida\n");
    }
    else {
      printf("Data Invalida\n");
    }
  }
  if (mes == 7){
    if (dia <= 31) {
      printf ("Data Valida\n");
    }
    else {
      printf("Data Invalida\n");
    }
  }
  if (mes == 8){
    if (dia <= 31) {
      printf ("Data Valida\n");
    }
    else {
      printf("Data Invalida\n");
    }
  }
  if (mes == 9){
    if (dia <= 30) {
      printf ("Data Valida\n");
    }
    else {
      printf("Data Invalida\n");
    }
  }
  if (mes == 10){
    if (dia <= 31) {
      printf ("Data Valida\n");
    }
    else {
      printf("Data Invalida\n");
    }
  }
  if (mes == 11){
    if (dia <= 30) {
      printf ("Data Valida\n");
    }
    else {
      printf("Data Invalida\n");
    }
  }
  if (mes == 12){
    if (dia <= 31) {
      printf ("Data Valida\n");
    }
    else {
      printf("Data Invalida\n");
    }  
  }
  if (mes <= 13) {
    printf("Data Invalida\n");
  }
  return 0;
}

//EXERCÍCIO 36

//EXERCÍCIO 37

//EXERCÍCIO 38

#include <math.h>
#include <stdio.h>

int main() {
   int dia, mes, ano;
  printf("Insira a sua data de nascimento: \n");
  scanf ("%d/%d/%d", &dia, &mes, &ano);
    if (ano >= 2022) {
    printf ("Ano invalido\n");
  } 
  else {
   if (mes == 1){
    if (dia <= 31) {
      printf ("Data Valida\n");
    }
    else {
      printf("Data Invalida\n");
    }
  }
  if (mes == 2){
    if (dia <= 28){
      printf ("Data Valida\n");
    }
    else {
      printf("Data Invalida\n");
    }
  }
  if (mes == 3){
    if (dia <= 31) {
      printf ("Data Valida\n");
    }
    else {
      printf("Data Invalida\n");
    }
  }
  if (mes == 4){
    if (dia <= 30) {
      printf ("Data Valida\n");
    }
    else {
      printf("Data Invalida\n");
    }
  }
  if (mes == 5){
    if (dia <= 31) {
      printf ("Data Valida\n");
    }
    else {
      printf("Data Invalida\n");
    }
  }
  if (mes == 6){
    if (dia <= 30) {
      printf ("Data Valida\n");
    }
    else {
      printf("Data Invalida\n");
    }
  }
  if (mes == 7){
    if (dia <= 31) {
      printf ("Data Valida\n");
    }
    else {
      printf("Data Invalida\n");
    }
  }
  if (mes == 8){
    if (dia <= 31) {
      printf ("Data Valida\n");
    }
    else {
      printf("Data Invalida\n");
    }
  }
  if (mes == 9){
    if (dia <= 30) {
      printf ("Data Valida\n");
    }
    else {
      printf("Data Invalida\n");
    }
  }
  if (mes == 10){
    if (dia <= 31) {
      printf ("Data Valida\n");
    }
    else {
      printf("Data Invalida\n");
    }
  }
  if (mes == 11){
    if (dia <= 30) {
      printf ("Data Valida\n");
    }
    else {
      printf("Data Invalida\n");
    }
  }
  if (mes == 12){
    if (dia <= 31) {
      printf ("Data Valida\n");
    }
    else {
      printf("Data Invalida\n");
    }  
  }
  if (mes >= 13) {
    printf("Data Invalida\n");
  }
  return 0;
  }
}

//EXERCÍCIO 39

//EXERCÍCIO 40
