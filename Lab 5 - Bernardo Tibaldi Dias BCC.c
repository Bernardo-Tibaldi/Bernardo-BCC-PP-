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

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
  srand(time(NULL));
  int matriz[4][4], i, j, k, l;
  printf ("Matriz original:\n");
  for (i = 0; i < 4; i++) { 
    for (j = 0; j < 4; j++) {
      matriz [i] [j] = rand () % 20;
      printf (" [ %d ] ", matriz [i] [j]);
      
    }
    printf("\n");
  }
  printf("Matriz transformada:\n");
  for (k = 0; k < 4; k++) {
    for (l = 0; l < 4; l++) {
      if ((k == 0 && (l == 1 || l == 2 || l == 3)) || (k == 1 && (l == 2 || l == 3)) || (k == 2 && l == 3)) {
        printf (" [ 0 ] "); 
      }
      else {
        matriz [k] [l] = rand () % 20;
        printf (" [ %d ] ", matriz [k] [l]);
      }
  }
    printf("\n");
  }
  return 0;
}

//EXERCÍCIO 7

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
  srand(time(NULL));
  int matriz [5] [5], i, j, contador = 74;
  matriz [0] [0] = rand () % 100;
  if (matriz [0][0] > 50) {
  for (i = 0; i < 5; i++) { 
    for (j = 0; j < 5; j++) {
      contador = contador + 1;
      matriz [i] [j] = contador;
      printf (" [ %d ] ", matriz [i] [j]);
    }
    printf("\n");
  }
  }
  else {
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
           matriz [0][0] = matriz [0][0] + 1;
           matriz [i][j] = matriz [0][0];
           printf (" [ %d ] ", matriz [i] [j]);
        }
      printf("\n");
    }
  }
  return 0;
}

//EXERCÍCIO 8

#include <stdio.h>

int main() {
  int M1[2][2], M2[2][2], i, j, k, l, m, n, o, p, resultado, constante;
  char opcao;
  printf("==================================\n");
  printf("ESCOLHA O COMANDO:\n");
  printf("a) somar as duas matrizes\n");
  printf("b) subtrair a primeira matriz da segunda\n");
  printf("c) adicionar uma constante às duas matrizes\n");
  printf("d) imprimir as matrizes\n");
  printf("==================================\n");
  scanf("%c", &opcao);

  printf("Apresente os valores para uma matriz:\n");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      scanf("%d", &M1[i][j]);
    }
  }
  printf("Apresente os valores para uma segunda matriz:\n");
  for (k = 0; k < 2; k++) {
    for (l = 0; l < 2; l++) {
      scanf("%d", &M2[k][l]);
    }
  }
  printf("\n==================================\n");
  switch (opcao) {
  case 'a':
    for (m = 0; m < 2; m++) {
      for (n = 0; n < 2; n++) {
        resultado = (M1[m][n]) + (M2[m][n]);
        printf(" [ %d ] ", resultado);
      }
      printf("\n");
    }
    break;
  case 'b':
    for (m = 0; m < 2; m++) {
      for (n = 0; n < 2; n++) {
        resultado = (M2[m][n]) - (M1[m][n]);
        printf(" [ %d ] ", resultado);
      }
      printf("\n");
    }
    break;
  case 'c':
    printf("Determine uma constante:\n");
    printf("==================================\n");
    scanf("%d", &constante);
    for (m = 0; m < 2; m++) {
      for (n = 0; n < 2; n++) {
        M1[m][n] = M1[m][n] + constante;
        printf(" [ %d ] ", M1[m][n]);
      }
      printf("\n");
    }
    printf("\n");
    for (o = 0; o < 2; o++) {
      for (p = 0; p < 2; p++) {
        M2[o][p] = M2[o][p] + constante;
        printf(" [ %d ] ", M2[o][p]);
      }
      printf("\n");
    }
    break;
  case 'd':
    for (m = 0; m < 2; m++) {
      for (n = 0; n < 2; n++) {
        printf(" [ %d ] ", M1[m][n]);
      }
      printf("\n");
    }
    printf("\n");
    for (o = 0; o < 2; o++) {
      for (p = 0; p < 2; p++) {
        printf(" [ %d ] ", M2[o][p]);
      }
      printf("\n");
    }
    break;
  default:
    printf("Nao eh uma opcao\n");
    break;
  }
  return 0;
}

//STRINGS

//EXERCÍCIO 1

#include <stdio.h>

int main() {
  char str [13] = "Hello World!";
  printf("%s\n", str);
  return 0;
}

//EXERCÍCIO 2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char str [10];
  int i, contador = 0;
  printf("Apresente uma sequência em binário:\n");
  fgets (str, 10, stdin);
  for (i = 0; i < 10; i++) {
    if (str [i] == '1') {
      contador++;
    }
  }
  printf ("Ha %d numeros 1's nesta string\n", contador);
  return 0;
}

//EXERCÍCIO 3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char str [11];
  int i;
  printf("Apresente uma string:\n");
  fgets (str, 11, stdin);
  for (i = 11; i > -1; i--){
    printf("%c", str[i]);
  }
  return 0;
}

//EXERCÍCIO 4

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  setbuf (stdin, NULL);
  char String[50], letra;
  int i, contador = 0, j;
  printf("Selecione uma letra:\n");
  scanf("%c", &letra);
  printf("Apresente uma string:\n");
  scanf("%s", String);
  for (i = 0; i < strlen(String); i++) {
    if ((String[i] == 'a') || (String[i] == 'e') || (String[i] == 'i') || (String[i] == 'o') || (String[i] == 'u') || (String[i] == 'A') || (String[i] == 'E') || (String[i] == 'I') || (String[i] == 'O') || (String[i] == 'U')) {
      contador++;
  }
}
  printf("Ha %d vogais\n", contador);
  for (j = 0; j < strlen(String); j++) {
    if ((String[j] == 'a') || (String[j] == 'e') || (String[j] == 'i') || (String[j] == 'o') || (String[j] == 'u')) {
      String[j] = letra;
  }
    else if ((String[j] == 'A') || (String[j] == 'E') || (String[j] == 'I') || (String[j] == 'O') || (String[j] == 'U')) {
      String[j] = letra - 32;
    }
  }
  printf("%s\n", String);
  return 0;
}

//EXERCÍCIO 5

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  setbuf (stdin, NULL);
  char String[100];
  int i;
  printf("Apresente uma palavra formada por letras maiusculas:\n");
  scanf("%s", String);
  for (i = 0; i < strlen(String); i++) {
    String[i] = String[i] + 32;
  }
  printf("%s\n", String);
  return 0;
}

//EXERCÍCIO 6

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  setbuf (stdin, NULL);
  char String[100];
  int i;
  printf("Apresente uma palavra formada por letras minusculas:\n");
  scanf("%s", String);
  for (i = 0; i < strlen(String); i++) {
    String[i] = String[i] - 32;
  }
  printf("%s\n", String);
  return 0;
}

//EXERCÍCIO 7

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  setbuf (stdin, NULL);
  char Vetor[100];
  int i;
  printf("Apresente uma frase:\n");
  fgets (Vetor, 100, stdin);
  for (i = 0; i < strlen(Vetor); i++) {
    if (Vetor[i] != ' ') {
      printf("%c", Vetor[i]);
    }
  }
  printf("\n");
  return 0;
}

//EXERCÍCIO 8

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  setbuf (stdin, NULL);
  char String[100], L1, L2;
  int i;
  printf("Digite uma letra L1 e uma L2:\n");
  scanf("%c %c", &L1, &L2);
  printf("Apresente uma palavra:\n");
  scanf ("%s", String);
  for (i = 0; i < strlen(String); i++) {
    if (String[i] == L1) {
      String [i] = L2;
    }
  }
  printf("%s\n", String);
  return 0;
}

//EXERCÍCIO 9


//EXERCÍCIO 10

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  setbuf (stdin, NULL);
  char String[100];
  float desconto, preco;
  printf("Indique o nome de uma mercadoria:\n");
  scanf ("%s", String);
  printf("Indique o preco de %s\n", String);
  scanf("%f", &preco);
  desconto = 1.1*preco;
  printf("O preco de %s a vista eh %.2f\n", String, desconto);
  return 0;
}

//EXERCÍCIO 11

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
  setbuf(stdin, NULL);
  int S[15];
  int i, j, count;
  printf("Indique uma string:\n");
  for (count = 0; count < 15; count++) {
    scanf ("%d", &S [count]);
  }
  printf ("Indique um valor i e um j:\n");
  scanf ("%d", &i);
  scanf ("%d", &j);
  if (i < j) {
    do {
      printf("%d ", S[i]);
      i++;
    } while (i < j);
  }
  else {
    printf("Valores Invalidos\n");
  }
  return 0;
}

//EXERCÍCIO 12

//EXERCÍCIO 13

//EXERCÍCIO 14

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
  setbuf (stdin, NULL);
  char str1 [101];
  char str2 [101];
  int N, i, j;
  printf("Digite os valores de uma string str1: ");
  fgets (str1, 100, stdin);
  printf("Digite os valores de uma string str2: ");
  fgets (str2, 100, stdin);
  str1[strcspn(str1, "\n")] = '\0';
  str2[strcspn(str2, "\n")] = '\0';
  printf("Digite um valor N:\n");
  scanf("%d", &N);
  for(i = 0; str1[i] != '\0'; i++);
   for (j = 0; (j < N + 2) && (str2[j] != '\0'); j++){
    str1[i++] = str2[j];
   }
  str1[i] = '\0';
  printf("%s", str1);
  return 0;
}

//EXERCÍCIO 15

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
int i, contador = 0, comeco, tamanho;
char S1 [100];
char S2 [100];
char opcao1, caractere, C1, C2;
printf("=================================================\n");
printf("MENU DE OPCOES:\n\n");
printf("a) Ler uma string S1 (tamanho máximo 20 caracteres);\n");
printf("b) Imprimir o tamanho da string S1;\n");
printf("c) Comparar a string S1 com uma nova string S2 fornecida pelo usuario "
       "e imprimir o resultado da comparacao;\n");
printf("d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o "
       "resultado da concatenacao;\n");
printf("e) Imprimir a string S1 de forma reversa;\n");
printf("f) Contar quantas vezes um dado caractere aparece na string S1. Esse "
       "caractere desse ser informado pelo usuario;\n");
printf("g) Substituir a primeira ocorrencia do caractere C1 da string S1 pelo "
       "caractere C2. Os caracteres C1 e C2 serao lidos pelo usuario;\n");
printf("h) Verificar se uma string S2 eh substring de S1. A string S2 deve ser "
       "informada pelo usuario;\n");
printf("i) Retornar uma substring da string S1. Para isso o usuario deve "
       "informar a partir de qual posicao deve ser criada a substring e qual eh "
       "o tamanho da substring.\n");
  printf("=================================================\n");
  scanf ("%c", &opcao1);

  if (opcao1 == 'a' || opcao1 == 'A') {
    setbuf (stdin, NULL);
    printf("Indique os valores de uma string:\n");
    fgets (S1, 20, stdin);
  }
  else if (opcao1 == 'b' || opcao1 == 'B') {
    setbuf (stdin, NULL);
    printf("Indique os valores de uma string:\n");
    fgets (S1, 20, stdin);
    printf("%d\n", strlen(S1));
  }
  else if (opcao1 == 'c' || opcao1 == 'C') {
    setbuf (stdin, NULL);
    printf("Indique os valores de uma string:\n");
    fgets (S1, 20, stdin);
    printf("Indique os valores de uma segunda string:\n");
    fgets (S2, 20, stdin);
    if (strcmp (S1, S2) == 0) {
      printf("Strings iguais\n");
    }
    else {
      printf ("Strings Diferentes\n");
    }
  }
  else if (opcao1 == 'd' || opcao1 == 'D') {
    setbuf (stdin, NULL);
    printf("Indique os valores de uma string:\n");
    fgets (S1, 20, stdin);
    printf("Indique os valores de uma segunda string:\n");
    fgets (S2, 20, stdin);
    strcat(S1, S2);
    printf("%s\n", S1);
  }
  else if (opcao1 == 'e' || opcao1 == 'E') {
    setbuf (stdin, NULL);
    printf("Indique os valores de uma string:\n");
    fgets (S1, 20, stdin);
    for (i = strlen (S1); i >= 0; i--) {
      printf ("%c ", S1[i]);
    }
  }
  else if (opcao1 == 'f' || opcao1 == 'F') {
    setbuf (stdin, NULL);
    printf("Indique os valores de uma string:\n");
    fgets (S1, 20, stdin);
    setbuf (stdin, NULL);
    printf("Informe um caractere:\n");
    scanf("%c", &caractere);
    for (i = 0; i < strlen (S1); i++) {
      if (S1[i] == caractere) {
        contador++;
      }
      }
      printf("Esse numero aparece %d vezes\n", contador);
    }
  else if (opcao1 == 'g' || opcao1 == 'G') {
    setbuf (stdin, NULL);
    printf("Indique os valores de uma string:\n");
    fgets (S1, 20, stdin);
    printf("Informe um caractere C1, seguido por um C2:\n");
    scanf("%c %c", &C1, &C2);
    for (i = 0; i < strlen (S1); i++) {
      if (S1[i] == C1) {
        S1[i] = C2;
      }
    }
    printf("%s\n", S1);
  }
  else if (opcao1 == 'h' || opcao1 == 'H') {
    setbuf (stdin, NULL);
    printf("Indique os valores de uma string:\n");
    fgets (S1, 20, stdin);
    setbuf (stdin, NULL);
    printf("Indique os valores de uma segunda string:\n");
    fgets (S2, 20, stdin);
    if (strstr(S1, S2) != NULL) {
      printf("S2 eh uma substring de S1\n");
   }
   else {
      printf("S2 nao eh uma substring de S1\n");
   }
    
  }
  else if (opcao1 == 'i' || opcao1 == 'I') {
    setbuf (stdin, NULL);
    printf("Indique os valores de uma string:\n");
    fgets (S1, 20, stdin);
    printf("Informar onde a substring ira comecar:\n");
    scanf ("%d", &comeco);
    printf("Indicar o tamanho da substring:\n");
    scanf("%d", &tamanho);
    for (i=comeco; i <= comeco + tamanho; i++) {
      printf("%c ", S1[i]);
    }
    printf("\n");
  }
  else {
    printf ("Erro!\n");
  }
  return 0;
}

//EXERCÍCIO 16

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
  char String [1001];
  char Sequencia [5];
  int i, j, maior = 0, I;
  printf ("Digite um numero para que seja encontrada a sequencia dos 5 numeros consecutivos que gera o maior resultado:\n");
  fgets (String, 1000, stdin);
  for (i = 0; i < strlen (String); i++) {
    if (((String [i])*(String [i+1])*(String [i+2])*(String [i+3])*(String [i+4])) > maior) {
     maior = (String [i])*(String [i+1])*(String [i+2])*(String [i+3])*(String [i+4]);
      I =i;
    }
  }
  printf ("A sequencia cujo produto eh o maior possivel esta nas posicoes: %d, %d, %d, %d, %d\n", I, I+1, I+2, I+3, I+4);
  
  return 0;
}
