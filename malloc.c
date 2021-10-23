#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptri;
    int p = 100;
    ptri=(int *)malloc(p*sizeof(int));
    for(int i;i<p;i++){
        printf("Data %i= ",i);
        scanf("%d",ptri+i);
    }
        printf("data memory = ");
    for(int i=0;i<p;i++){
        printf("%d, ",*(ptri+i));
    }
return 0;
}
