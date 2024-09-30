#include <stdio.h>

 {
    float longueur;
    float largeur;
}Rectangle;

float claire(struct Rectangle rectangle) {
    return rectangle.longueur * rectangle.largeur;}

int main() {
    Rectangle monrectangle;
    printf("entrer la longueur du rectangle : ");
    scanf("%f", &monrectangle.longueur);

    printf("entrer la largeur du rectangle : ");
    scanf("%f", &monrectangle.largeur);

    float aire = claire(monrectangle);

    printf("L aire du rectangle est : %.2f\n", aire);

    return 0;}