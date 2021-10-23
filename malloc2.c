#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr_i, i, n;

    printf("Masukkan ukuran array yang diinginkan: ");
    scanf("%d", &n);

    ptr_i = (int *) malloc(sizeof (int) * n);

    printf("Alamat memori yang dipesan\n");

    for (i = 0; i < n; ++i) {
        printf("%p\n", &ptr_i[i]);
    }

    printf("\n");

    printf("Masukkan ukuran BARU array yang diinginkan: ");
    scanf("%d", &n);

    ptr_i = realloc(ptr_i, n);

    printf("Alamat memori BARU yang dipesan\n");

    for (i = 0; i < n; ++i) {
        printf("%p\n", &ptr_i[i]);
    }

    return 0;
}
