#include <stdio.h>
int main() {

    int movimento_cavalo;

    printf("Digite o movimento do cavalo do xadrez:(entre 1 e 5)\n"); // Solicita ao usuário o número de movimentos do cavalo
    scanf("%d", &movimento_cavalo);
    printf("CAVALO\n");

    for (int cavalo = 1; cavalo <= movimento_cavalo; cavalo++) { // Loop que imprime "Direita" de 1 a 5 vezes, dependendo do valor inserido pelo usuário
        printf("Direita \n"); //imprime Direita de 1 a 5 vezes
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


