#include <stdio.h>
#include <conio.h>
#include <string.h>

int main ()
{
    char palavra[100];
    scanf("%s", &palavra);
    int compare = strcmp(palavra, "fim");
        while (compare != 0) {
            printf("Palavra informada: %s\n", palavra);
            scanf("%s", &palavra);
            compare = strcmp(palavra, "fim");
        }
}

/*int main (){
    char nome[25];
    printf("Digite um nome: ");
    gets(nome);
    printf("O nome que voce digitou e: ");
    puts(nome);
    return 0;
}*/