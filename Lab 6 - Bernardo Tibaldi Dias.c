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

//EXERCICIO 5!!!!!!!!!!!!!!!!!!!!!!!



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

//EXERCICIO 8

//EXERCICIO 9

//EXERCICIO 10

//EXERCICIO 11

//EXERCICIO 12

//EXERCICIO 13

//EXERCICIO 14

//EXERCICIO 15

//EXERCICIO 16

//EXERCICIO 17

//EXERCICIO 18

//EXERCICIO 19

//EXERCICIO 20
