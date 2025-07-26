#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    int escolhaComputador;
    char *escolhaJogador = "";
    int jogarNovamente = 1; // controla o loop do jogo

    srand(time(0)); // inicializa a semente do rand uma vez

    while (jogarNovamente == 1) {
        printf("\n*** Jogo do Jokenpo ***\n");
        printf("Escolha a opcao:\n");
        printf("1. Pedra\n");
        printf("2. Papel\n");
        printf("3. Tesoura\n");
        printf("Escolha: ");
        scanf("%s", escolhaJogador);
        
        printf ("valor lido: %s", escolhaJogador);

        // // Gera a jogada do computador
         escolhaComputador = (rand() % 3); // sorteia numero de 0 a 2
         escolhaComputador ++; // incrementa para o numero ser de 1 a 3

        printf ("escolha do computador: %d", escolhaComputador);

        if (strcmp(escolhaJogador, "1")){
            printf ("Jogador: Pedra\n");
        }
        else if (strcmp(escolhaJogador, "2")){
            printf ("Jogador: Papel\n");
        }
        else if (strcmp(escolhaJogador, "3")){
            printf ("Jogador: Tesoura\n");
        }
        else { 
            printf ("opcao invalida\n");
        
        }
       
       // escolha do computador

        if (escolhaComputador == 1){
            printf ("Computador: Pedra\n");
        }
        else if (escolhaComputador == 2){
            printf ("Computador: Papel\n");

        }
        else if (escolhaComputador == 3){

            printf ("Computador: Tesoura\n");
        }

        // L�gica do resultado
        if (atoi(escolhaJogador) == escolhaComputador) {
            printf("### Jogo empatou ###\n");
        } else if (
            (atoi(escolhaJogador) == 1 && escolhaComputador == 3) ||
            (atoi(escolhaJogador) == 2 && escolhaComputador == 1) ||
            (atoi(escolhaJogador) == 3 && escolhaComputador == 2)) {
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
