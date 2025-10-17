#include <stdio.h>
int main() {

    
    int cavalo = 1;

    printf("CAVALO\n");
    while (cavalo--)
    {
        for ( int i = 0; i < 2; i++) {
            printf("Baixo\n"); //imprime Baixo 1 vez
        }
        printf("Esquerda\n");
    }
    
  
    printf("\n");

    printf("BISPO\n");
    int bispo = 0;
    while (bispo < 5) {
        printf("Diagonal\n"); //imprime Diagonal 5 vezes
        bispo++;
    }

    printf("\n");

    int torre = 0;
    printf("TORRE\n");
    do {
        printf("Frente\n"); //imprime Frente 5 vezes
        torre++;
    } while (torre < 5);









    return 0;
}


