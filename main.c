#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int escolhaComputador()
{
    return rand() % 3;
}

int main()
{
    int jogador, computador;
    int jogarNovamente = 1;
    char opcao;

    srand(time(NULL));

    printf("Bem-vindo ao jogo Pedra, Papel e Tesoura!\n");

    while (jogarNovamente)
    {
        printf("\nEscolha sua jogada:\n");
        printf("0 - Pedra\n");
        printf("1 - Papel\n");
        printf("2 - Tesoura\n");
        printf("Sua escolha: ");
        scanf("%d", &jogador);

        if (jogador < 0 || jogador > 2)
        {
            printf("Escolha inválida. Por favor, escolha 0, 1 ou 2.\n");
            continue;
        }

        computador = escolhaComputador();

        printf("\nVocê escolheu ");
        switch (jogador)
        {
        case 0:
            printf("Pedra.\n");
            break;
        case 1:
            printf("Papel.\n");
            break;
        case 2:
            printf("Tesoura.\n");
            break;
        }
        printf("O computador escolheu ");
        switch (computador)
        {
        case 0:
            printf("Pedra.\n");
            break;
        case 1:
            printf("Papel.\n");
            break;
        case 2:
            printf("Tesoura.\n");
            break;
        }

        if (jogador == computador)
        {
            printf("Empate!\n");
        }
        else if ((jogador == 0 && computador == 2) ||
                 (jogador == 1 && computador == 0) ||
                 (jogador == 2 && computador == 1))
        {
            printf("Você ganhou!\n");
        }
        else
        {
            printf("Você perdeu!\n");
        }

        printf("\nDeseja jogar novamente? (s/n): ");
        scanf(" %c", &opcao);
        if (opcao != 's' && opcao != 'S')
        {
            jogarNovamente = 0;
        }
    }

    printf("Obrigado por jogar! Até mais!\n");

    return 0;
}
