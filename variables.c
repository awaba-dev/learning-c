#include <stdio.h>

int main(void) {
    // Les types de base en C
    int age = 21;                  // nombre entier
    float taille = 1.65;           // nombre a virgule (simple precision)
    char initiale = 'A';           // un seul caractere (entre guillemets simples)

    // affichage avec printf : %d pour un int, %f pour un float, %c pour un char
    printf("J'ai %d ans\n", age);
    printf("Je mesure %.2f m\n", taille);   // %.2f = 2 chiffres apres la virgule
    printf("Mon initiale est %c\n", initiale);

    // Les operateurs arithmetiques
    int a = 10;
    int b = 3;
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);   // division ENTIERE : donne 3, pas 3.33
    printf("%d %% %d = %d\n", a, b, a % b);  // modulo : le reste de la division, donne 1

    return 0;
}
