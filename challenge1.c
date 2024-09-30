#include <stdio.h>
#include <string.h>

struct Personne {
    char nom[50];
    char prenom[50];
    int age;};

int main() {
    struct Personne personne1;
    strcpy(personne1.nom, "ALLALA");
    strcpy(personne1.prenom, "Belal");
    personne1.age = 30;

    printf("Nom : %s\n", personne1.nom);
    printf("Prenom : %s\n", personne1.prenom);
    printf("age : %d ans\n", personne1.age);

    return 0;}