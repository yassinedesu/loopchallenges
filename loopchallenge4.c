//......................... Challenge 4 : Affichage des N Premiers Nombres Impairs .........................//

#include <stdio.h>

int main(){
    int n,i,imp;
    printf("Veuillez entrez un nombre positif : ");
    scanf("%d",&n);
    while (n <= 0) {
        printf("Veuillez entrer un nombre un nombre positif : ");
        scanf("%d", &n);
    }
    imp = 1;
    for (i = 1; i <= n ; i++ ){
        printf("%d  ",imp);
        imp += 2;
    }
    return 0;
}

//......................... Challenge 4 : Affichage des N Premiers Nombres Impairs .........................//
