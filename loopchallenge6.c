//......................... Challenge 6 : Affichage des N Premiers Nombres pair .........................//

#include <stdio.h>

int main(){
    int n,i,pair;
    printf("Veuillez entrez un nombre positif : ");
    scanf("%d",&n);
    while (n <= 0) {
        printf("Veuillez entrer un nombre un nombre positif : ");
        scanf("%d", &n);
    }
    pair = 2;
    for (i = 1; i <= n ; i++ ){
        printf("%d  ",pair);
        pair += 2;
    }
    return 0;
}

//......................... Challenge 6 : Affichage des N Premiers Nombres pair .........................//
