#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main (){
    int matrix[10][10];
    int i, j;
    srand(time(NULL));

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            matrix[i][j] = rand() % 100;
        }
    }

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(i != j){
                printf("Linha: %d Coluna: %d\nNumero: %d \n", i + 1, j + 1, matrix[i][j]);
            }
        }
    }
    return 0;
}