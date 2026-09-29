#include <stdio.h>

// Prototype (declaration) des fonctions : annonce leur existence avant main
// pour que le compilateur les connaisse deja quand elles sont appelees plus bas dans le fichier
int estPair(int nombre);
int addition(int a, int b);
void direBonjour(char nom[]);

int main(void) {
    printf("7 est pair ? %d\n", estPair(7));   // affiche 0 (faux)
    printf("8 est pair ? %d\n", estPair(8));   // affiche 1 (vrai)

    int resultat = addition(4, 5);
    printf("4 + 5 = %d\n", resultat);

    direBonjour("Awa");

    return 0;
}

// Les definitions (le vrai code) peuvent venir apres main, grace aux prototypes ci-dessus
int estPair(int nombre) {
    if (nombre % 2 == 0) {
        return 1; // en C il n'y a pas de type booleen natif dans les vieux standards : 1 = vrai, 0 = faux
    } else {
        return 0;
    }
}

int addition(int a, int b) {
    return a + b;
}

// void = cette fonction ne renvoie rien, elle fait juste une action
void direBonjour(char nom[]) {
    printf("Bonjour, %s !\n", nom);
}
