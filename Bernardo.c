# Bernardo-BCC-PP-

//Exercício 1

#include <stdio.h>

    int main () {
int x = 19;
printf("%d\n", x);
return 0;

}

//Exercício 2

#include <stdio.h>
int main(){
    float x = 23.56;
    printf("%.2f\n", x);
    return 0;
}

//Exercício 3

#include <stdio.h>
int main() {
  printf("Digite 3 valores para a soma deles \n");
  int x, y, z, w;
  scanf("%d", &x);
  scanf("%d", &y);
  scanf("%d", &z);
  w = x + y + z;
  printf("A soma desses valores resulta em: %d\n", w);
  return 0;
}

//Exercício 4

#include <stdio.h>
int main (){
    float y;
    y = 6.5*6.5;
    printf ("O quadrado desse valor eh: %.2f\n", y);
    return 0;

}

//Exercício 5

#include <stdio.h>
int main () {
    printf ("Digite um valor: \n");
    float x, y;
    scanf ("%f", &x);
    
    y = x/5;
    printf ("A quinta parte desse valor resulta em: %.2f\n", y);
    return 0;
}

//Exercício 6

#include <stdio.h>
int main () {
  printf ("Digite a temperatura: \n");
  float c, f;
  scanf ("%f", &c);
  f = c*(9.0/5.0)+32.0;
  printf ("Essa temperatura em Fahrenheit eh: %.2f\n", f);
  return 0;
}

//Exercício 7

#include <stdio.h>
int main () {
  printf ("Digite a temperatura em Fahrenheit: \n");
  float F, C;
  scanf ("%f", &F);
  C = 5.0*(F- 32.0)/9.0;
  printf ("A temperatura dada, eh de %.2f em Celsius\n", C);
  return 0;
}

//Exercício 8

#include <stdio.h>
int main () {
  printf ("Digite a temperatura em Kelvin: \n");
  float K, C;
  scanf ("%f", &K);
  C = K-273.15;
  printf ("A temperatura dada, eh de %.2f em Celsius\n", C);
  return 0;
}

//Exercício 9

#include <stdio.h>
int main () {
  printf ("Digite a temperatura em Celsius: \n");
  float K, C;
  scanf ("%f", &C);
  K = C+273.15;
  printf ("A temperatura dada, eh de %.2f em Kelvin\n", K);
  return 0;
}

//Exercício 10

#include <stdio.h>
int main () {
  printf ("Apresente a velocidade em km/h: \n");
  float K, M;
  scanf ("%f", &K);
  M = K/3.6;
  printf ("Essa velocidade eh equivalente a %.2f m/s\n", M);
  return 0;
}

//Exercício 11

#include <stdio.h>
int main () {
    printf ("Apresente uma velocidade em m/s: \n");
    float K, M;
    scanf ("%f", &M);
    K = M*3.6;
    printf ("Essa velocidade convertida equivale a %.2f m/s\n", K);
    return 0;
}

//Exercício 12

#include <stdio.h>
int main () {
    printf ("Apresente uma distancia em milhas: \n");
    float M, K;
    scanf ("%f", &M);
    K = 1.61*M;
    printf ("Essa distancia equivale a %.2f km\n", K);
    return 0;
}

//Exercício 13

#include <stdio.h>
int main () {
    printf ("Apresente um valor em quilometros: \n");
    float K, M;
    scanf ("%f", &K);
    M = K/1.61;
    printf ("Esse valor equivale a %.2f milhas\n", M);
    return 0;
}

//Exercício 14

#define PI 3,141592
#include <stdio.h>
int main(){
    printf ("Apresente um angulo em graus: \n");
    float G, R;
    scanf ("%f", &G);
    R = G*PI/180;
    printf ("Esse valor equivale a %.2f em radianos\n", R);
    return 0;

}

//Exercício 15

#include <stdio.h>
#define PI 3.141592
int main () {
    printf("Defina um valor em radianos: \n");
    float R, G;
    scanf ("%f", &R);
    G = R*180/PI;
    printf ("Esse valor equivale a %.2f graus\n", G);
    return 0;
}

//Exercício 16

#include <stdio.h>
int main () {
    printf ("Digite um valor de comprimento em polegadas: \n");
    float C, P;
    scanf("%f", &P);
     C = P*2.54;
     printf("Esse valor corresponde a %.2f\n", C);
     return 0;
}

//Exercício 17

#include <stdio.h>
int main() {
  printf("Digite um valor de comprimento em centimetros: \n");
  float P, C;
  scanf("%f", &C);
  P = C / 2.54;
  printf("Esse valor corresponde a %.2f polegadas\n", P);
  return 0;
}

//Exercício 18

#include <stdio.h>
int main () {
    printf ("Apresente um valor de volume em metros cubicos: \n");
    float L, M;
    scanf ("%f", &M);
    L = 1000*M;
    printf ("Esse volume em litros equivale a: %.2f\n", L);
    return 0;
}

//Exercício 19

#include <stdio.h>
int main () {
    printf ("Apresente um valor de volume em litros: \n");
    float M, L;
    scanf ("%f", &L);
    M = L /1000;
    printf ("Esse valor equivale a %.2f metros cubicos\n", M);
}

//Exercício 20

#include <stdio.h>
int main () {
    printf ("Apresente uma massa em quilogramas: \n");
    float L, K;
    scanf ("%f", &K);
    L = K/0.45;
    printf ("Essa massa equivale a %.2f libras\n", L);
    return 0;

}

//Exercício 21

#include <stdio.h>
int main () {
    printf ("Apresente uma massa em libras: \n");
    float K, L;
    scanf ("%f", &L);
    K = L*0.45;
    printf ("Essa massa equivale a %2.f Kg\n", K);
    return 0;
}

//Exercício 22

#include <stdio.h>
int main () {
    printf ("Digite um comprimento em jardas: \n");
    float M, J;
    scanf ("%f", &J);
    M = 0.91*J;
    printf ("Esse comprimento equivale a %.2f metros\n", M);
    return 0;
}

//Exercício 23

#include <stdio.h>
int main () {
    printf ("Digite um comprimento em metros: \n");
    float M, J;
    scanf ("%f", &M);
    J = M/0.91;
    printf ("Esse comprimento equivale a %.2f jardas\n", J);
    return 0;
}

//Exercício 24

#include <stdio.h>
int main () {
    printf ("Digite um comprimento em metros quadrados: \n");
    float M, A;
    scanf ("%f", &M);
     A = M*0.000247;
    printf ("Esse comprimento equivale a %.2f acres\n", A);
    return 0;
}

//Exercício 25

#include <stdio.h>
int main () {
    printf ("Digite um comprimento em acres: \n");
    float M, A;
    scanf ("%f", &A);
    M = A*4048.58;
    printf ("Esse comprimento equivale a %.2f metros quadrados\n", M);
    return 0;
}

//Exercício 26

#include <stdio.h>
int main () {
    printf ("Digite um comprimento em metros quadrados: \n");
    float H, M;
    scanf ("%f", &M);
    H = M*0.0001;
    printf ("Esse comprimento equivale a %f hectares\n", H);
    return 0;
}

//Exercício 27

#include <stdio.h>
int main () {
    printf ("Digite um comprimento em hectares: \n");
    float H, M;
    scanf ("%f", &H);
    M = H*10000;
    printf ("Esse comprimento equivale a %.2f metros quadrados\n", M);
    return 0;
}

//Exercício 28

#include <stdio.h>
int main () {
    printf ("Digite 3 valores: \n");
    float w, x, y, z;
    scanf ("%f", &x);
    scanf ("%f", &y);
    scanf ("%f", &z);
    w = x*x + y*y + z*z;
    printf ("A soma dos quadrados desses valores resulta em: %.2f\n", w);
    return 0;
}

//Exercício 29

#include <stdio.h>
int main () {
    printf ("Apresente 4 notas: \n");
    float M, w, x, y, z;
    scanf ("%f", &w);
    scanf ("%f", &x);
    scanf ("%f", &y);
    scanf ("%f", &z);
    M = (w + x + y + z)/4;
    printf ("A media aritmetica desses valores eh: %.2f\n", M);
    return 0;
    }

//Exercício 30

#include <stdio.h>
#define D 5.25
int main () {
    printf ("Digite uma quantia em real: \n");
    float V, R;
    scanf ("%f", &R);
    V = R*D; //V de Valor
    printf ("Essa quantia equivale a %.2f dolares\n", V);
    return 0;
}

//Exercício 31

#include <stdio.h>
int main () {
    printf ("Digite um numero: \n");
    int x, y, z;
    scanf ("%d", &x);
    y = x - 1;
    z = x + 1;
    printf ("O antecessor desse numero eh %d e o seu sucessor eh %d\n", y, z);
    return 0;
}

//Exercício 32

#include <stdio.h>
int main () {
    printf ("Digite um numero inteiro: \n");
    int x, y;
    scanf ("%d", &x);
    y = (3*x + 1) + (2*x -1);
    printf ("A soma do sucessor de seu triplo com o antecessor de seu dobro eh: %d\n", y);
    return 0;
}

//Exercício 33

#include <stdio.h>
int main () {
    printf ("Defina o valor do lado de um quadrado: \n");
    float A, L;
    scanf ("%f", &L);
    A = L*L;  //A= area do quadrado, L= lado do quadrado
    printf ("A area desse quadrado eh: %.2f\n", A);
    return 0;
}

//Exercício 34

#include <stdio.h>
#define PI 3.141592
int main() {
  printf("Defina o valor do raio de um circulo: \n");
  float R, A;
  scanf("%f", &R);
  A = PI * R * R;
  printf("A area desse circulo eh: %.2f\n", A);
  return 0;
}

//Exercício 35

#include <stdio.h>
#include <math.h>
int main () {
    printf ("Informe os valores de dois catetos: \n");
    int H, a, b;
    scanf ("%d", &a);
    scanf ("%d", &b);
    H = sqrt(a*a + b*b);
    printf ("A hipotenusa desse triangulo retangulo eh igual a %d\n", H);
    return 0;
}

//Exercício 36

#include <stdio.h>
#define PI 3.141592
int main () {
    printf ("Defina, respectivamente, a altura e o raio de um cilindro circular: \n");
    float V, R, H;
    scanf ("%f", &H);
    scanf ("%f", &R);
    V = PI*R*R*H;
    printf ("O volume desse cilindro circular equivale a %.2f\n", V);
    return 0;
}

//Exercício 37

#include <stdio.h>

int main () {
    printf ("Indique o valor de um produto: \n");
    float P, D; //D = valor com desconto
    scanf ("%f", &P);
    D = P - 0.12*P;
    printf (" O valor com desconto sera de %.2f reais\n", D);
    return 0;
}

//Exercício 38

#include <stdio.h>

int main () {
    printf ("Indique o salario de um funcionario : \n");
    float S, A; //S= salário, A= salário com aumento.
    scanf ("%f", &S);
    A = 1.35*S;
    printf (" O salário com aumento sera de %.2f reais\n", A);
    return 0;
}

//Exercício 39

#include <stdio.h>

int main o() {
    float P, S, T;
    P = 0.46*780000.00;
    S = 0.32*780000.00;
    T = 0.22*780000.00;
    printf ("A quantia em dinheiro que o primeiro, segundo e terceiro colocados ganharam foi, respectivamente, de: %.2f, %.2f e %.2f\n", P, S, T);
    return 0;
}

//Exercício 40

#include <stdio.h>

int main () {
  printf ("Informe o numero de dias para o serviço: \n");
  float d, v; //d = dias; v =valor 
  scanf ("%f", &d);
  v = 30*d*0.92;// 92% = valor descontado do imposto de renda
  printf ("O valor desse trabalho saira por %.2f reais\n", v);
  return 0;
}

//Exercício 41

#include <stdio.h>

int main () {
  printf ("Informe o valor da hora de trabalho e o numero de horas trabalhadas por mes, respectivamente: \n");
  float h, m, s;
  scanf ("%f", &h);
  scanf ("%f", &m);
  s = 1.1*(h*m);
  printf ("O salario desse funcionario equivale a: %.2f reais\n", s);
  return 0;
}

//Exercício 42

#include <stdio.h>

int main () {
  printf ("Informe o salario base de um funcionario: \n");
  float b, r; //b = salário base; r = salário real.
  scanf ("%f", &b);
  r = 1.05*b - 0.07*b;
  printf ("O salario real desse funcionario equivale a: %.2f reais\n", r);
  return 0;
}

//Exercício 43

#include <stdio.h>

int main () {
  printf ("Apresente o valor total do produto: \n");
  float d, x, p,c, C; //d = desconto; x = valor do produto; p = parcelado; c = comissão a vista; C = comissão venda parcelada.
  scanf ("%f", &x);
  d = 0.9*x;
  p = x/3;
  c = 0.05*d;
  C = 0.05*x;
  printf ("Valor com desconto: %.2f reais \n Valor de cada uma das 3 parcelas, se parcelado: %.2f reais \n Comissao do vendedor caso venda a vista: %.2f reais \n Comissao do vendedor caso venda seja parcelada: %.2f reais \n", d, p, c, C);
  return 0;
}

//Exercício 44
/*
OBS!!!: sei que, caso o valor dê quebrado, o programa terá que arredondar pra cima, por exemplo se a altura que ele deseja subir for 2.5, o usuário terá
que subir até o 3º degrau, porém, não soube fazer o programa interpretar esse tipo de situação.
*/

#include <stdio.h>

int main () {
  printf ("Apresente altura do degrau de uma escada e a altura que o usuario deseja alcancar subindo a escada: \n");
  float h, u;
  int d;
  scanf ("%f", &h);
  scanf ("%f", &u);
  d = u/h;
  printf ("Numero de degraus que o usuario devera subir eh: %d\n", d);
  return 0;
}

//Exercício 45

#include <stdio.h>
#include <stdlib.h>

int main () {
  printf ("Escreva uma letra maiuscula: \n");
  int M, m;
  scanf ("%c", &M);
  m = M + 32;
  printf ("%c\n", m);
  return 0;
}

//Exercício 46

#include <stdio.h>
int main () {
  printf ("Digite um numero inteiro de 3 algarismos: \n");
  int n, N1, N2, n1, n2, n3;
  /*
  n = valor normal;
  n1 = primeiro algarismo/primeiro resto; n2 = segundo algarismo/segundo resto; n3 = terceiro algarismo/terceiro resto; 
  N1 = primeiro quociente; N2 = segundo quociente;
  */
  scanf ("%d", &n);
  n1 = n%10;
  N1 = n/10;
  printf ("%d", n1);
  n2 = N1%10;
  N2 = N1/10;
  printf ("%d", n2);
  n3 = N2%10;
  printf ("%d\n", n3);
  return 0;
}

//Exercício 47

#include <stdio.h>
int main () {
  printf ("Apresente um numero inteiro de 4 digitos: \n");
  int n, n1, N1, n2, N2, n3, N3, n4;
  /*n = valor inicial; 
  n1 = nº da 1ª linha; N1 = 1º resto; 
  n2 = nº da 2ª linha; N2 = 2º resto; 
  n3 = nº da 3ª linha; N3 = 3º resto; 
  n4 = nº da 4ª linha.
  */
  scanf ("%d", &n);
  n1 = n/1000;
  N1 = n -n1*1000;
  printf ("%d\n", n1);
  n2 = N1/100;
  N2 = N1 - n2*100;
  printf ("%d\n", n2);
  n3 = N2/10;
  N3 = N2 - n3*10;
    printf ("%d\n", n3);
  n4 = N3/1;
  printf ("%d\n", n4);
  return 0;
}

//Exercício 48

#include <stdio.h>
int main () {
  printf ("Apresente um valor em segundos: \n");
  int n, h, m, s, r1, r2; // r1 = resto 1, para os minutos; r2 = resto 2, para os segundos;
  scanf ("%d", &n);
  h = n/3600;
  r1 = n%3600;
  printf ("%d:", h);
  m = r1/60;
  r2 = r1%60;
  printf ("%d:", m);
  s = r2;
  printf ("%d\n", s);
  return 0;
}

//Exercício 49

#include <stdio.h>
int main () {
  printf ("Apresente o horario do inicio do evento: \n");
  int hi, mi, si, d, hf, mf, sf, r1, r2; 
  /*
  hi = hora inicial; mi = minutos iniciais; si = segundos iniciais; 
  d = duração; 
  hf = hora final; mf = minutos finais; sf = segundos finais; 
  r1 = resto 1 para minutos; r2 = resto 2 para segundos.
  */ 
  scanf ("%d:", &hi);
  scanf ("%d:", &mi);
  scanf ("%d", &si);
  printf ("Indique quanto tempo, em segundos, esse experimento tera: \n");
  scanf ("%d", &d);
  hf = hi + d/3600;
  r1 = d%3600;
  printf ("%d:", hf);
  mf = mi + r1/60;
  r2 = r1%60;
  printf ("%d:", mf);
  sf = si + r2;
  printf ("%d\n", sf);
  return 0;
}

//Exercício 50

#include <stdio.h>
#define A 2023
// A = ano atual
int main () {
  printf ("Digite sua idade: \n");
  int I, N;
  scanf ("%d", &I);
  N = A - I;
  printf ("Essa pessoa nasceu em %d\n",N);
  return 0;
}

//Exercício 51

#include <stdio.h>
#include <math.h>
int main () {
  printf ("Digite as coordenadas de um ponto qualquer: \n");
  int x, y;
  float d; //d = distancia, hipotenusa.
  scanf ("%d", &x);
  scanf ("%d", &y);
  d = sqrt(x*x + y*y);
  printf ("A distancia desse ponto a origem eh: %.2f\n", d);
  return 0;
}

//Exercício 52

#include <stdio.h>

int main () {
  printf ("Digite o valor do premio e o quanto cada um dos apostadores investiu: \n");
  float v, a, b, c, A, B, C;
  scanf ("%f", &v);
  scanf ("%f", &a);
  scanf ("%f", &b);
  scanf ("%f", &c);
  A = (a*v)/(a+b+c);
  B = (b*v)/(a+b+c);
  C = (c*v)/(a+b+c);
  printf ("Caso eles ganhassem, o primeiro ganharia %.2f, o segundo %.2f e o terceiro %.2f\n", A, B, C);
  return 0;
}

//Exercício 53

#include <stdio.h>
//Obs.: como a ideia é cercar o terreno, será necessário calcular o preço considerando o perímetro do terreno, e não sua área.
int main () {
  printf ("Indique o comprimento, a largura e o preço por metro de uma tela para um terreno, respectivamente: \n");
  float p, c, l, t; //t = terreno; p = preço; c = comprimento; l = largura.
  scanf ("%f", &c);
  scanf ("%f", &l);
  scanf ("%f", &p);
  t = p*(2*c) + p*(2*l);
  printf ("O custo para cercar esse terreno sera de: %.2f\n", t);
  return 0;
}
