#include <stdio.h>

int main(void) {
    // Declaration avec une taille fixe, connue a la compilation
    int notes[5] = {12, 15, 8, 17, 10};

    // Parcourir un tableau avec un for : de 0 a taille - 1
    printf("Toutes les notes :\n");
    for (int i = 0; i < 5; i++) {
        printf("Note %d : %d\n", i, notes[i]);
    }

    // Calculer une somme et une moyenne
    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += notes[i]; // equivalent a total = total + notes[i];
    }
    float moyenne = (float)total / 5; // (float) force une division a virgule, sinon division entiere
    printf("Total : %d, Moyenne : %.2f\n", total, moyenne);

    // Trouver le maximum
    int maximum = notes[0];
    for (int i = 1; i < 5; i++) {
        if (notes[i] > maximum) {
            maximum = notes[i];
        }
    }
    printf("Meilleure note : %d\n", maximum);

    // Un tableau a deux dimensions (une grille)
    int grille[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    printf("Element ligne 1, colonne 2 : %d\n", grille[1][2]); // affiche 6

    return 0;
}
