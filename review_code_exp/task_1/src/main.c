#include <stdio.h>
#include <stdlib.h>

int main() {

    int size;
    char enter;
    if (scanf("%d%c", &size, &enter) != 2 || enter != '\n')
      printf("n/a");

    int A[size][size];
    int B[size][size];

    for(int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (scanf("%d", &A[i][j]) != 1) {
                printf("n/a");
                exit(EXIT_FAILURE);
            }
        }
    }
    for(int k = 0; k < size; k++) {
        for (int l = 0; l < size; l++) {
            if (scanf("%d", &B[k][l]) != 1) {
                printf("n/a");
                exit(EXIT_FAILURE);
            }
        }
    }
    printf("\n");

    for(int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int res = A[i][j] * B[i][j];
            printf("%d", res); 
            if (j == (size - 1)) {
                printf("\n");
            } else printf(" ");
        }
    }
    return 0;
}