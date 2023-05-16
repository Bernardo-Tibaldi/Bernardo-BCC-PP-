//EXERCICIO 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct horario {
    int hora, minutos, segundos;
};
struct data {
    int dia, mes, ano;
};

struct compromisso {
    struct horario h;
    struct data d;
    char texto[100];
};

int main () {
    struct compromisso c;
    printf ("Insira um horario:\n");
    setbuf(stdin, NULL);
    scanf("%d:%d:%d", &(c.h.hora), &(c.h.minutos), &(c.h.segundos));
    printf("Insira uma data:\n");
    setbuf(stdin, NULL);
    scanf("%d/%d/%d", &(c.d.dia), &(c.d.mes), &(c.d.ano));
    setbuf(stdin, NULL);
    printf("Descreva o compromisso:\n");
    fgets (c.texto, 100, stdin);
    printf("%s as %d:%d:%d em %d/%d/%d\n", c.texto, c.h.hora, c.h.minutos, c.h.segundos, c.d.dia, c.d.mes, c.d.ano);
    return 0;
}

//EXERCICIO 2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco {
    char rua[51], bairro[51], cidade[51];
};
struct dados {
    char nome[101];
    int idade;
    struct endereco e;
};

int main () {
    struct dados d;
    printf ("Digite seu nome:\n");
    setbuf (stdin, NULL);
    fgets (d.nome, 100, stdin);
    printf ("Digite sua idade:\n");
    setbuf (stdin, NULL);
    scanf("%d", &d.idade);
    printf("Indique seu endereco (rua, bairro e cidade, respectivamente):\n");
    setbuf(stdin, NULL);
    fgets (d.e.rua, 50, stdin);
    setbuf(stdin, NULL);
    fgets(d.e.bairro, 50, stdin);
    setbuf(stdin, NULL);
    fgets(d.e.cidade, 50, stdin);
    printf("NOME:%s IDADE: %d anos\n ENDERECO:\n RUA:%s BAIRRO: %s CIDADE:%s", d.nome, d.idade, d.e.rua, d.e.bairro, d.e.cidade);
    return 0;
}

//EXERCICIO 3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados {
    char nome[100];
    int matricula;
    char curso[100];
};

int main () {
    struct dados d[5];
    int i, j;
    for (i = 0; i < 5; i++) {
        printf("Indique os dados a respeito do aluno %d:\n", (i+1));
        printf("NOME: ");
        setbuf(stdin, NULL);
        fgets (d[i].nome, 99, stdin);
        printf("MATRICULA: ");
        setbuf(stdin, NULL);
        scanf("%d", &d[i].matricula);
        printf("CURSO: ");
        setbuf(stdin, NULL);
        fgets (d[i].curso, 99, stdin);
    }
    printf("\n\n");
    for (j = 0; j < 5; j++) {
        printf("NOME: %s MATRICULA: %d\n CURSO: %s", d[j].nome, d[j].matricula, d[j].curso);
    }
    return 0;
}

//EXERCICIO 4

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados {
    char nome[100];
    int matricula;
    float P1, P2, P3;
};

int main () {
    struct dados d[5];
    int i, j, MaiorNota = 0, MaiorMedia = 0, MenorMedia = 100;
    char AlunoMaior [100], AlunoMenor[100], AlunoP1[100];
    for (i = 0; i < 5; i++) {
        printf("Indique os dados a respeito do aluno %d:\n", (i+1));
        printf("NOME: ");
        setbuf(stdin, NULL);
        fgets (d[i].nome, 99, stdin);
        printf("MATRICULA: ");
        setbuf(stdin, NULL);
        scanf("%d", &d[i].matricula);
        printf("NOTAS (p1, p2 e p3, respectivamente):\n");
        setbuf(stdin, NULL);
        scanf("%f", &d[i].P1);
        scanf("%f", &d[i].P2);
        scanf("%f", &d[i].P3);
        if (d[i].P1 > MaiorNota) {
            MaiorNota = d[i].P1;
            strcpy (AlunoP1, d[i].nome);
        }
        if (((d[i].P1)+(d[i].P2)+(d[i].P3))/3 > MaiorMedia) {
            MaiorMedia = ((d[i].P1)*(d[i].P2)*(d[i].P3))/3;
            strcpy (AlunoMaior, d[i].nome);
        }
        if (((d[i].P1)+(d[i].P2)+(d[i].P3))/3 < MenorMedia) {
            MenorMedia = ((d[i].P1)*(d[i].P2)*(d[i].P3))/3;
            strcpy (AlunoMenor, d[i].nome);
        }
    }
    printf("\n\n");
    printf("O aluno com a maior nota na primeira prova foi %s", AlunoP1);
    printf("O aluno com a maior media foi %s", AlunoMaior);
    printf("O aluno com a menor media foi %s", AlunoMenor);
    for (j = 0; j < 5; j++) {
        printf("NOME: %s MATRICULA: %d\n P1: %.2f\n P2: %.2f\n P3: %.2f\n", d[j].nome, d[j].matricula, d[j].P1, d[j].P2, d[j].P3);
        if (((d[j].P1)+(d[j].P2)+(d[j].P3))/3 > 6 || ((d[j].P1)+(d[j].P2)+(d[j].P3))/3 == 6 ) {
            printf("Aluno Aprovado!\n");
        }
        else if (((d[j].P1)+(d[j].P2)+(d[j].P3))/3 < 6) {
            printf("Aluno Reprovado!\n");
        }
    }
    return 0;
}

//EXERCICIO 5

#include <stdio.h>

struct vetor {
float a;
float b;
float c;
};

int main () {
  struct vetor v1, v2;
  printf("Indique os valores a, b e c de um vetor:\n");
  scanf ("%f %f %f", &v1.a, &v1.b, &v1.c);
  printf("Indique os valores a, b e c de um segundo vetor:\n");
  scanf("%f %f %f", &v2.a, &v2.b, &v2.c);
  printf("O vetor resultante da soma desses outros dois eh: %.2f, %.2f, %.2f\n", v1.a + v2.a, v1.b + v2.b, v1.c + v2.c);
  return 0;
}


//EXERCICIO 6

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados {
    int matricula, Codigo_Disciplina;
    float nota1, nota2, media;
    char nome[51];
};

int main () {
    struct dados d[10];
    int i, j;
    for (i = 0; i < 10; i++) {
        printf("Indique os dados a respeito do aluno %d\n", i+1);
        printf("NOME: ");
        setbuf(stdin, NULL);
        fgets(d[i].nome, 50, stdin);
        printf("MATRICULA: ");
        setbuf(stdin, NULL);
        scanf("%d", &d[i].matricula);
        printf("CODIGO DA DISCIPLINA ");
        setbuf(stdin, NULL);
        scanf("%d", &d[i].Codigo_Disciplina);
        printf("PRIMEIRA NOTA: ");
        setbuf(stdin, NULL);
        scanf("%f", &d[i].nota1);
        printf("SEGUNDA NOTA: ");
        setbuf(stdin, NULL);
        scanf("%f", &d[i].nota2); 
    }
    for (j = 0; j < 10; j++) {
        d[i].media = (1*d[i].nota1 + 2*d[i].nota2)/(d[i].nota1+d[i].nota2); 
        printf("%s - MEDIA FINAL: %.2f\n", d[i].nome, d[i].media);
    }
    return 0;
}

//EXERCICIO 7

#include <stdio.h>
#include <string.h>
#include <math.h>
#define PI 3.1415

struct polar  {
  float raio;
  float argumento;
};

struct cartesiano {
  float x;
  float y;
};

int main () {
  struct polar p;
  struct cartesiano c;
  printf("Indique um raio e um argumento em radianos:\n");
  scanf("%f", &p.raio);
  scanf("%f", &p.argumento);
  c.x = p.raio * cos(p.argumento);
  c.y = p.raio * sin(p.argumento);
  printf("%.2f, %.2f\n", c.x, c.y);
  return 0;
}

//EXERCICIO 8

#include <stdio.h>
#include <string.h>

struct funcionario {
  char nome[100];
  int idade;
  char sexo;
  char CPF[11];
  int dia, mes, ano;
  int setor;
  char cargo[30];
  float salario;
};

int main () {
  struct funcionario f;
  
  printf("Indique o nome de um funcionario:\n");
  setbuf(stdin, NULL);
  fgets(f.nome, 100, stdin);
  
  printf("Indique a idade desse funcionario:\n");
  scanf("%d", &f.idade);
  printf("Indique o sexo desse funcionario:\n");
  setbuf(stdin, NULL);
  scanf("%c", &f.sexo);
  
  printf("Indique o CPF desse funcionario:\n");
  scanf("%s", &f.CPF);
  printf("Indique a data de nascimento desse funcionario:\n");
  scanf("%d %d %d", &f.dia, &f.mes, &f.ano);
  
  printf("Indique o setor que esse funcionario trabalha:\n");
  scanf("%d", &f.setor);
  
  printf("Indique o cargo desse funcionario:\n");
  setbuf(stdin, NULL);
  scanf("%s", &f.cargo);
  
  printf("Indique o salario desse funcionario:\n");
  scanf("%f", &f.salario);
  printf("\n\n===================================\n");
  printf("DADOS DO FUNCIONARIO:\n");
  printf("===================================\n");
  switch (f.sexo) {
    case 'M':
       printf("Nome: %s\n", f.nome);
       printf("Idade: %d\n", f.idade);
       printf("Sexo: %c\n", f.sexo);
       printf("CPF: %s\n", f.CPF);
       printf("Data de Nascimento: %d/%d/%d\n", f.dia, f.mes, f.ano);
       if (f.setor >= 0 && f.setor < 100) {
       printf("Setor: %d\n", f.setor);
       }
       else {
         printf("Setor: INVALIDO\n");
       }
       printf("Cargo: %s\n", f.cargo);
       printf("Salario: %.2f", f.salario); break;
    case 'F':
       printf("Nome: %s\n", f.nome);
       printf("Idade: %d\n", f.idade);
       printf("Sexo: %c\n", f.sexo);
       printf("CPF: %s\n", f.CPF);
       printf("Data de Nascimento: %d/%d/%d\n", f.dia, f.mes, f.ano);
       if (f.setor >= 0 && f.setor < 100) {
       printf("Setor: %d\n", f.setor);
       }
       else {
         printf("Setor: INVALIDO\n");
       }
       printf("Cargo: %s\n", f.cargo);
       printf("Salario: %.2f", f.salario); break;
    default:
    printf("Erro!\n"); break;
  }
  return 0;
}
//EXERCICIO 9!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

//EXERCICIO 10

#include <stdio.h>
#include <string.h>

typedef struct Dados {
char nome[100];
char rua[50];
int numero;
char bairro[50];
int telefone[11];
}dados;

int main () {
  int i, j;
  dados d[5], temporario;
  for (i = 0; i < 5; i++) {
    printf("Indique o nome da pessoa %d:\n", i+1);
    setbuf(stdin, NULL);
    scanf("%s", &d[i].nome);
    printf("Indique o endereco da pessoa %d:\n", i+1);
    printf("Indique a rua:\n");
    setbuf(stdin, NULL);
    scanf("%s", &d[i].rua);
    printf("Indique o numero:\n");
    scanf("%d", &d[i].numero);
    printf("Indique o bairro:\n");
    setbuf(stdin, NULL);
    scanf("%s", &d[i].bairro);
    printf("Indique o telefone da pessoa %d:\n", i+1);
    setbuf(stdin, NULL);
    scanf("%s", &d[i].telefone);
  }
  for (i = 0; i < 4; i++) {
    for (j= i+1; j < 5; j++) {
    if (strcmp(d[i].nome,d[j].nome) > 0 ) {
      strcpy(temporario.nome, d[i].nome);
      strcpy(d[i].nome, d[j].nome); 
      strcpy(d[j].nome, temporario.nome);
    }
  }
  }
  for (i = 0; i < 5; i++) {
  printf("Nome: %s\n Endereço\nRua: %s\nNumero: %d\nBairro: %s\nTelefone: %s\n", d[i].nome, d[i].rua, d[i].numero, d[i].bairro, d[i].telefone);
  }
  return 0;
}

//EXERCICIO 11

#include <stdio.h>
#include <string.h>

struct alunos {
 char nome[50];
 int matricula;
 float MediaFinal;
};

int main () {
  struct alunos a[10], aprovados[10], reprovados[10];
  int i, j = 0, k = 0;
  for (i = 0; i < 10; i++) {
    printf("Digite o nome do aluno: ");
    setbuf(stdin, NULL);
    fgets(a[i].nome, 50, stdin);
    printf("Digite o numero de matricula do aluno: ");
    scanf("%d", &a[i].matricula);
    printf("Informe a Media Final do aluno: ");
    scanf("%f", &a[i].MediaFinal);
    
    if (a[i].MediaFinal > 5) {
      strcpy(aprovados[j].nome, a[i].nome);
      j++;
    }
    else {
      strcpy(reprovados[k].nome, a[i].nome);
      k++;
    }
  }
  printf("APROVADOS:\n");
  for (i = 0; i < j; i++) {
    printf("%s", aprovados[i].nome);
    printf("\n");
  }
  printf("REPROVADOS:\n");
  for (i = 0; i < k; i++) {
    printf("%s", reprovados[i].nome);
    printf("\n");
  }
  return 0;
}

//EXERCICIO 12

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct jogador {
    int valor;
};

int main () {
    struct jogador j[2];
    int i, k;
    srand(time(NULL));

    for (i = 0; i < 2; i++) {
        printf("Jogador %d:\n", i+1);
        for (k = 0; k < 3; k++) {
        j[i].valor = rand() % 52;
        if (j[i].valor <= 13 && j[i].valor != 0) {
            if (j[i].valor == 11) {
                printf("Valete de Ouros\n");
            }
            else if (j[i].valor == 12) {
                printf("Rainha de Ouros\n");
            }
            else if (j[i].valor == 13) {
                printf("Rei de Ouros\n");
            }
            else if (j[i].valor == 1) {
                printf("As de Ouros\n");
            }
            else {
            printf("%d de Ouros\n", j[i].valor);
            }
        }
        else if (j[i].valor > 13 && j[i].valor <= 26) {
            if (j[i].valor - 13 == 11) {
                printf("Valete de Espadas\n");
            }
            else if (j[i].valor - 13 == 12) {
                printf("Rainha de Espadas\n");
            }
            else if (j[i].valor - 13 == 13) {
                printf("Rei de Espadas\n");
            }
            else if (j[i].valor - 13 == 1) {
                printf("As de Espadas\n");
            }
            else {
            printf("%d de Espadas\n", j[i].valor - 13);
            }
        }
        else if (j[i].valor > 26 && j[i].valor <= 39) {
            if (j[i].valor - 26 == 11) {
                printf("Valete de Copas\n");
            }
            else if (j[i].valor - 26 == 12) {
                printf("Rainha de Copas\n");
            }
            else if (j[i].valor - 26 == 13) {
                printf("Rei de Copas\n");
            }
            else if (j[i].valor - 26 == 1) {
                printf("As de Copas\n");
            }
            else {
            printf("%d de Copas\n", j[i].valor - 26);
            }
        }
        else if (j[i].valor > 39){
            if (j[i].valor - 39 == 11) {
                printf("Valete de Paus\n");
            }
            else if (j[i].valor - 39 == 12) {
                printf("Rainha de Paus\n");
            }
            else if (j[i].valor - 39 == 13) {
                printf("Rei de Paus\n");
            }
            else if (j[i].valor - 39 == 1) {
                printf("As de Paus\n");
            }
            else {
            printf("%d de Paus\n", j[i].valor - 39);
            }
        }
        }
    }
    return 0;
}

//EXERCICIO 13



//EXERCICIO 14

//EXERCICIO 15

//EXERCICIO 16

//EXERCICIO 17

//EXERCICIO 18

//EXERCICIO 19

//EXERCICIO 20
