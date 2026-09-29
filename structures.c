#include <stdio.h>
#include <string.h>

// Une structure regroupe plusieurs informations liees sous un seul type personnalise
struct Etudiant {
    char nom[30];
    int age;
    float moyenne;
};

void afficherEtudiant(struct Etudiant e); // on peut passer une structure a une fonction comme une variable normale

int main(void) {
    // Creer et remplir une structure
    struct Etudiant awa;
    strcpy(awa.nom, "Awa");   // on utilise strcpy pour un champ char[], pas de "=" direct (rappel etape 7)
    awa.age = 21;
    awa.moyenne = 15.5;

    printf("%s a %d ans, moyenne %.1f\n", awa.nom, awa.age, awa.moyenne);

    // Autre facon de creer et remplir directement a la declaration
    struct Etudiant fatou = {"Fatou", 22, 17.2};

    afficherEtudiant(awa);
    afficherEtudiant(fatou);

    // Un tableau de structures : tres courant en pratique
    struct Etudiant classe[2] = { awa, fatou };
    printf("Premier etudiant de la classe : %s\n", classe[0].nom);

    return 0;
}

void afficherEtudiant(struct Etudiant e) {
    printf("Fiche - Nom : %s | Age : %d | Moyenne : %.1f\n", e.nom, e.age, e.moyenne);
}
