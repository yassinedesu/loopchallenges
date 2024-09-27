//............................... Challenge 1 : Table de Multiplication ...............................//

#include <stdio.h>
int main(){
    int n,i;
    printf("Entrez le nombre a multiplier : ");
    scanf("%d",&n);
    // in case ila l user dkhl n = 0
    while(n==0)
       {
          printf("Veuillez entrer un nombre superieur a 0 : ");
          scanf("%d",&n);
       }

    for (i = 1; i <= 10 && n != 0 ; i++){
            
        printf("%d x %d = %d\n",n,i,n*i);
    }
    
}
