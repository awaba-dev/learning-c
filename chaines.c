#include <stdio.h>
#include <string.h> // necessaire pour les fonctions de manipulation de texte

int main(void) {
    // En C, une "chaine" est en realite un tableau de caracteres termine par '\0' (le caractere nul)
    char prenom[20] = "Awa";
    char nom[20] = "Ba";

    printf("Prenom : %s\n", prenom);
    printf("Longueur du prenom : %lu\n", strlen(prenom)); // strlen = longueur, sans compter le '\0'

    // Concatener deux chaines
    char nomComplet[41]; // assez grand pour contenir prenom + espace + nom + '\0'
    strcpy(nomComplet, prenom);   // copie "Awa" dans nomComplet
    strcat(nomComplet, " ");       // ajoute un espace a la suite
    strcat(nomComplet, nom);       // ajoute "Ba" a la suite
    printf("Nom complet : %s\n", nomComplet);

    // Comparer deux chaines (JAMAIS avec == en C, qui compare des adresses memoire, pas le contenu)
    if (strcmp(prenom, "Awa") == 0) {
        printf("C'est bien Awa !\n");
    }

    // Parcourir une chaine caractere par caractere
    printf("Lettres du prenom : ");
    for (int i = 0; prenom[i] != '\0'; i++) {
        printf("%c-", prenom[i]);
    }
    printf("\n");

    return 0;
}
