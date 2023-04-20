#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,p,i;
    printf("Entrer la valeur de a:\n");
    scanf("%d",&a);
    printf("Entrer la valeur de b:\n");
    scanf("%d",&b);
    p=1;
    for(i=1; i<=b; i++){
     p=p*a;
    }


     printf("La multiplication successive de a par b est: %d\n ",p);


    return 0;
}
