#include <stdio.h>

int main()
{
    printf("example sur pointer\n");
    int f;
    f=10;
    printf("F valeur: %d\n",f);

    int *ptr;
    *ptr= f;

    int *ptr2;
    *ptr2=*ptr;

    printf("1. *ptr valeur: %d\n",*ptr);
    printf("1. *ptr2 valeur: %d\n",*ptr2);

    *ptr = 2500;

    printf("2. *ptr valeur: %d\n",*ptr);
    printf("2. *ptr2 valeur: %d\n",*ptr2);

    free(ptr);
    free(ptr2);

    // TD pointers exe 01: solution 2. trace b)
    int N;
    N = 100;
    int *q ,*p;
    q=malloc(sizeof(int));
    p=NULL;
    *q=7;
    N=(*q%26)+4;
    q=NULL;
    printf("ecrire(N+1) = %d\n",N+1);
    return 0;
}
