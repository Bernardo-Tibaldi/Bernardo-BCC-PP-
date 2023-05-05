#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char String [101];
    int i, tamanho, j;
    printf("Digite uma frase para ser cebolizada:\n");
    setbuf (stdin, NULL);
    fgets (String, 100, stdin);
    tamanho = strlen (String);
    for (i=0; i < tamanho; i++) {
        if (String[i] == 'r' && String [i+1] != ' ') {
            String[i] = 'l';
            if (String[i+1] == '\n') {
                String[i] = 'r';
            }
            if (String [i+1] == 'r') {
                for(j = i+1; j < tamanho -1; j++) {
                    String[j] = String[j+1];
                }
            }
            
        }
        if (String[i] == 'R' && i != tamanho) {
            String [i] = 'L';
        }
    }
    printf("%s\n", String);
    
    return 0;
}
