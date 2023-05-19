// EXERCICIO 1

// EXERCICIO 2

#include <stdio.h>

int main () {
    int a, *p1;
    float b, *p2;
    char c, *p3;
    p1 = &a;
    p2 = &b;
    p3 = &c;
    printf("Modifique os valores de 3 variaveis:\n");
    scanf("%i %f %c", &a, &b, &c);
    scanf("%i %f %c", p1, p2, p3);
    printf("Valor modificado: %i %.2f %c\n", a, b, c);
    return 0;
}

// EXERCICIO 3

#include <stdio.h>

int main () {
    int a, b, *p1, *p2;
    p1 = &a;
    p2 = &b;
    printf("Enderecos de memoria:\n %p\n%p\n", p1, p2);
    printf("Indique dois valores:\n");
    scanf ("%i %i", p1, p2);
    if (&a > &b) {
        printf("%p\n", p1);
    }
    if (&a < &b) {
        printf("%p\n", p2);
    }
    return 0;
}

// EXERCICIO 4



// EXERCICIO 5

// EXERCICIO 6

// EXERCICIO 7

// EXERCICIO 8

