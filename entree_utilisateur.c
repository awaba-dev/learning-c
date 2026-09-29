#include <stdio.h>

int main(void) {
    int age;
    char nom[50]; // un "tableau de caracteres" pour stocker du texte (vu en detail a l'etape 7)

    printf("Quel est ton prenom ? ");
    scanf("%49s", nom); // %49s : lit un mot (s'arrete a l'espace), max 49 caracteres pour rester dans le tableau

    printf("Quel est ton age ? ");
    scanf("%d", &age); // le & est indispensable : scanf a besoin de l'ADRESSE de la variable pour la remplir

    printf("Salut %s, tu as %d ans !\n", nom, age);

    if (age >= 18) {
        printf("Tu es majeur.\n");
    } else {
        printf("Tu es encore mineur, plus que %d an(s) a attendre.\n", 18 - age);
    }

    return 0;
}
