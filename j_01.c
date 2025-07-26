#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJogador, escolhaComputador;
    int jogarNovamente = 1; // controla o loop do jogo

    srand(time(0)); // inicializa a semente do rand uma vez

    while (jogarNovamente == 1) {
        printf("\n*** Jogo do Jokenpo ***\n");
        printf("Escolha a opcao:\n");
        printf("1. Pedra\n");
        printf("2. Papel\n");
        printf("3. Tesoura\n");
        printf("Escolha: ");
        scanf("%d", &escolhaJogador);

        // Gera a jogada do computador
        escolhaComputador = rand() % 3 + 1;

        // Mostra a escolha do jogador
        switch (escolhaJogador) {
            case 1: printf("Jogador: Pedra\n"); break;
            case 2: printf("Jogador: Papel\n"); break;
            case 3: printf("Jogador: Tesoura\n"); break;
            default: printf("Opcao invalida!\n"); continue;
        }

        // Mostra a escolha do computador
        switch (escolhaComputador) {
            case 1: printf("Computador: Pedra\n"); break;
            case 2: printf("Computador: Papel\n"); break;
            case 3: printf("Computador: Tesoura\n"); break;
        }

        // Lógica do resultado
        if (escolhaJogador == escolhaComputador) {
            printf("### Jogo empatou ###\n");
        } else if (
            (escolhaJogador == 1 && escolhaComputador == 3) ||
            (escolhaJogador == 2 && escolhaComputador == 1) ||
            (escolhaJogador == 3 && escolhaComputador == 2)) {
            printf("### Parabens, voce ganhou! ###\n");
        } else {
            printf("### Voce perdeu... ###\n");
        }

        // Pergunta se quer jogar de novo
        printf("\nDeseja jogar novamente? (1 = sim, 0 = nao): ");
        scanf("%d", &jogarNovamente);
    }

    printf("\nObrigado por jogar!\n");
    return 0;
}
