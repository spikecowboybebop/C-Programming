#include <stdio.h>

int main() {
    int size;
    int mat1[100][100];
    int mat2[100][100];
    int matsum[100][100];

    printf("Input size of the square matrix (Less than 5): ");
    scanf("%d", &size);

    printf("Input Elements in the first matrix: \n");
    for(int i = 0; i < size; i++) {
        for(int k = 0; k < size; k++) {
            printf("Element [%d][%d]: ", i, k);
            scanf("%d", &mat1[i][k]);
        }
    }
    printf("Input Elements in the second matrix: \n");
    for(int i = 0; i < size; i++) {
        for(int k = 0; k < size; k++) {
            printf("Element [%d][%d]: ", i, k);
            scanf("%d", &mat2[i][k]);
        }
    }
    printf("The addition of two matrix is: \n");
    for(int i = 0; i < size; i++) {
        for(int k = 0; k < size; k++) {
            matsum[i][k] = mat1[i][k] + mat2[i][k];
            printf("%d ", matsum[i][k]);
        }
        printf("\n");
    }


    return 0;
}
