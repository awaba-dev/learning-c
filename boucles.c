#include <stdio.h>

int main(void) {
    // for : ideal quand on connait le nombre de repetitions a l'avance
    printf("Table de multiplication de 7 :\n");
    for (int i = 1; i <= 10; i++) {
        printf("7 x %d = %d\n", i, 7 * i);
    }

    // while : ideal quand on ne sait pas a l'avance combien de tours il faudra
    int nombre = 100;
    int compteur = 0;
    while (nombre > 1) {
        nombre = nombre / 2;
        compteur++;
    }
    printf("Il faut diviser 100 par 2, %d fois, pour arriver a 1 ou moins.\n", compteur);

    // do while : comme while, mais le bloc s'execute AU MOINS une fois avant de tester la condition
    int saisie;
    do {
        printf("Entre un nombre positif (0 pour arreter) : ");
        scanf("%d", &saisie);
    } while (saisie != 0);

    printf("Termine !\n");
    return 0;
}
