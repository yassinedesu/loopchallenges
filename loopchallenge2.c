//............................... Challenge 2 : Factorielle d'un Nombre ...............................//
    
#include <stdio.h>
int main(){
    int n,i;
    unsigned long long factor;
    printf("Entrez un nombre : ");
    scanf("%d",&n);
    factor = 1;
    // in case ila dkhel l'utilisateur --> n = 0
    while (n <= 0) {
        printf("Veuillez entrer un nombre supérieur à 0 : ");
        scanf("%d", &n);
    }

    for (i = 1; i <= n ; i++){
        factor *= i ;
    }
    printf("%d != %llu \n",n,factor);
}

//............................... Challenge 2 : Factorielle d'un Nombre ...............................//
