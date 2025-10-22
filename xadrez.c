#include <stdio.h>

void mover_bispo(int movimentos)
{
    for (int i = 0; i < movimentos; i++)
    {
        printf("diagonal\n");
    }
}

void mover_torre(int movimentos)
{
    int i = 0;
    do
    {
        printf("Frente\n");
        i++;
    } while (i < movimentos);
}

void mover_rainha(int movimentos)
{
    int rainha = 0;
    while (movimentos > 0)
    {
        printf("Frente\n");
        movimentos--;
    }
    
}

int main()
{
    // Movimento do bispo
    int movimentos;

    printf("Digite o número de movimentos do bispo: (1-5)\n");
    scanf("%d", &movimentos);
    printf("BISPO\n");
    mover_bispo(movimentos);

    printf("\n");

    // Movimento da torre
    printf("TORRE\n");
    mover_torre(5);

    printf("\n");

    // Movimento da rainha
    printf("RAINHA\n");
    mover_rainha(8);

    printf("\n");

    // Movimento do cavalo
    int cavalo = 1;

    printf("CAVALO\n");
    while (cavalo > 0)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Cima\n"); // imprime Cima 1 vez
        }
        printf("Direita\n");
        cavalo--;
    }

    return 0;
}
