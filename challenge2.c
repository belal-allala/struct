#include <stdio.h>
#include <string.h>
#define MAX_NOTES 5 

typedef struct {
    char nom[50];
    char prenom[50];
    int notes[MAX_NOTES];
}Etudiant;

int main() {
    Etudiant etudiant1;
    strcpy(etudiant1.nom, "ALLALA");
    strcpy(etudiant1.prenom, "Belal");
    etudiant1.notes[0] = 12;
    etudiant1.notes[1] = 15;
    etudiant1.notes[2] = 18;
    etudiant1.notes[3] = 14;
    etudiant1.notes[4] = 16;
    printf("Nom : %s\n", etudiant1.nom);
    printf("Prenom : %s\n", etudiant1.prenom);
    printf("Notes : ");
    for (int i = 0; i < MAX_NOTES; i++) {
        printf("%d ", etudiant1.notes[i]);}
    return 0;}