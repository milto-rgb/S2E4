#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char choice;
    int score = 0;
    char playerName[50];

    printf("Benvenuto nel GIOCO!\n");

    do {
        printf("\nScegli un'opzione:\n");
        printf("A) Inizia partita\n");
        printf("B) Uscire dal gioco\n");
        printf("Scelta: ");
        scanf(" %c", &choice);

        if (choice == 'A' || choice == 'a') {
            printf("Inserisci il tuo nome: ");
            scanf("%s", playerName);
            score = 0;

            // Domande
            printf("\nDomanda 1: Chi è stato il fisico teorico noto per la teoria della relatività??\n");
            printf("A)  Isaac Newton\nB) Albert Einstein\nC) Galileo Galilei\nScelta: ");
            char answer1;
            scanf(" %c", &answer1);
            if (answer1 == 'B' || answer1 == 'b') {
                printf("Risposta corretta!\n");
                score++;
            } else {
                printf("Risposta errata.\n");
            }

            printf("\nDomanda 2: Qual è il biologo famoso per la teoria dell'evoluzione per selezione naturale?\n");
            printf("A) Gregor Mendel\nB) Charles Darwin\nC) Louis Pasteur\nScelta: ");
            char answer2;
            scanf(" %c", &answer2);
            if (answer2 == 'B' || answer2 == 'b') {
                printf("Risposta corretta!\n");
                score++;
            } else {
                printf("Risposta errata.\n");
            }

            printf("\nDomanda 3: Chi è stato un pioniere nell'ambito della fisica quantistica e vincitore di un premio Nobel?\n");
            printf("A) Max Planck\nB)  Niels Bohr\nC) Marie Curie\nScelta: ");
            char answer3;
            scanf(" %c", &answer3);
            if (answer3 == 'A' || answer3 == 'a') {
                printf("Risposta corretta!\n");
                score++;
            } else {
                printf("Risposta errata.\n");
            }

            printf("\nDomanda 4: Chi è stata una figura chiave nella scoperta della struttura del DNA?\n");
            printf("A) James Watson\nB)  Rosalind Franklin\nC)  Alexander Fleming\nScelta: ");
            char answer4;
            scanf(" %c", &answer4);
            if (answer4 == 'B' || answer4 == 'b') {
                printf("Risposta corretta!\n");
                score++;
            } else {
                printf("Risposta errata.\n");
            }

            printf("\nDomanda 5: Chi è stato un importante matematico e filosofo greco antico?\n");
            printf("A)  Euclide\nB) Archimede\nC) Aristotele\nScelta: ");
            char answer5;
            scanf(" %c", &answer5);
            if (answer5 == 'A' || answer5 == 'a') {
                printf("Risposta corretta!\n");
                score++;
            } else {
                printf("Risposta errata.\n");
            }

            printf("\nIl tuo punteggio finale è: %d\n", score);
        } else if (choice != 'B' && choice != 'b') {
            printf("Scelta non valida. Riprova.\n");
        }

    } while (choice != 'B' && choice != 'b');

    printf("Il GIOCO è terminato, %s! CIAO!\n", playerName);

    return 0;
}
