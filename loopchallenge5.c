//............................... Challenge 5 : Calcul de la Puissance...............................//

#include <stdio.h>
#include <math.h>
int main(){
    int base,exposant,i;
    long resultat;
    printf("Veuillez entrer la base ( un nombre ) : ");
    scanf("%d",&base);
    printf("Veuillez entrer l'exposant ( la puissance ) : ");
    scanf("%d",&exposant);
    resultat = 1;
    for (i = 1; i <=exposant; i++){
        resultat *= base ;      /* awla n9dro ndiro ---> resultat = pow(base,i);  */ 
    }
    printf("%d^%d = %ld ",base,exposant,resultat);
}

//............................... Challenge 5 : Calcul de la Puissance...............................//
