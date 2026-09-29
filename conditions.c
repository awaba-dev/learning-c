#include <stdio.h>

int main(void) {
    int note;
    printf("Entre ta note sur 20 : ");
    scanf("%d", &note);

    // if / else if / else
    if (note >= 16) {
        printf("Mention tres bien !\n");
    } else if (note >= 14) {
        printf("Mention bien.\n");
    } else if (note >= 12) {
        printf("Mention assez bien.\n");
    } else if (note >= 10) {
        printf("Admis(e), sans mention.\n");
    } else {
        printf("Non admis(e).\n");
    }

    // l'operateur ternaire : une version courte d'un if/else simple
    const char *resultat = (note >= 10) ? "Admis" : "Recale";
    printf("Resume : %s\n", resultat);

    // switch : utile quand on compare UNE variable a plusieurs valeurs precises
    int jour;
    printf("Entre un chiffre de jour (1 = lundi ... 7 = dimanche) : ");
    scanf("%d", &jour);

    switch (jour) {
        case 6:
        case 7:
            printf("C'est le week-end !\n");
            break; // break est indispensable, sinon l'execution continue dans les cas suivants
        default:
            printf("C'est un jour de semaine.\n");
            break;
    }

    return 0;
}
