#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 10 // une constante : plus lisible qu'ecrire "10" partout dans le code

struct Contact {
    char nom[30];
    char telephone[15];
};

void afficherTous(struct Contact contacts[], int nombre);
int rechercherParNom(struct Contact contacts[], int nombre, char recherche[]);

int main(void) {
    struct Contact carnet[MAX_CONTACTS];
    int nombreContacts = 0;
    int choix;

    do {
        printf("\n--- Carnet de contacts ---\n");
        printf("1. Ajouter un contact\n");
        printf("2. Afficher tous les contacts\n");
        printf("3. Rechercher un contact\n");
        printf("0. Quitter\n");
        printf("Ton choix : ");
        scanf("%d", &choix);

        if (choix == 1) {
            if (nombreContacts < MAX_CONTACTS) {
                printf("Nom : ");
                scanf("%29s", carnet[nombreContacts].nom);
                printf("Telephone : ");
                scanf("%14s", carnet[nombreContacts].telephone);
                nombreContacts++;
                printf("Contact ajoute !\n");
            } else {
                printf("Carnet plein (max %d contacts).\n", MAX_CONTACTS);
            }
        } else if (choix == 2) {
            afficherTous(carnet, nombreContacts);
        } else if (choix == 3) {
            char recherche[30];
            printf("Nom a rechercher : ");
            scanf("%29s", recherche);
            int index = rechercherParNom(carnet, nombreContacts, recherche);
            if (index != -1) {
                printf("Trouve : %s - %s\n", carnet[index].nom, carnet[index].telephone);
            } else {
                printf("Contact introuvable.\n");
            }
        }
    } while (choix != 0);

    printf("Au revoir !\n");
    return 0;
}

void afficherTous(struct Contact contacts[], int nombre) {
    if (nombre == 0) {
        printf("Le carnet est vide.\n");
        return;
    }
    for (int i = 0; i < nombre; i++) {
        printf("%d. %s - %s\n", i + 1, contacts[i].nom, contacts[i].telephone);
    }
}

int rechercherParNom(struct Contact contacts[], int nombre, char recherche[]) {
    for (int i = 0; i < nombre; i++) {
        if (strcmp(contacts[i].nom, recherche) == 0) {
            return i; // renvoie la position du contact trouve
        }
    }
    return -1; // convention courante en C : -1 signifie "pas trouve"
}
