#include <stdio.h>

void doubler(int *nombre); // le * dans le prototype indique : ce parametre est un pointeur

int main(void) {
    int age = 21;

    // & donne l'ADRESSE memoire d'une variable (ou elle est stockee en memoire)
    printf("Valeur de age : %d\n", age);
    printf("Adresse de age : %p\n", (void *)&age); // %p affiche une adresse, format special

    // Un pointeur est une variable qui STOCKE une adresse
    int *pointeurAge = &age; // pointeurAge contient l'adresse de age

    printf("pointeurAge contient : %p\n", (void *)pointeurAge);
    printf("Valeur pointee par pointeurAge : %d\n", *pointeurAge); // *pointeurAge = "va lire la valeur a cette adresse"

    // Modifier la variable ORIGINALE via son pointeur
    *pointeurAge = 22;
    printf("Nouvelle valeur de age : %d\n", age); // affiche 22 ! age a vraiment change

    // Pourquoi c'est essentiel : ca permet a une fonction de modifier une variable de l'appelant
    int nombre = 5;
    doubler(&nombre); // on passe l'ADRESSE de nombre, pas sa valeur
    printf("nombre apres doubler() : %d\n", nombre); // affiche 10

    return 0;
}

void doubler(int *nombre) {
    *nombre = *nombre * 2; // modifie directement la valeur a l'adresse recue
}
