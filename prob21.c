#include <stdio.h>

int main() {
    int A[100][100];
    int B[100][100];
    int arr_prod[2][2];

    printf("Enter elements for Matrix A: \n");
    for(int i = 0; i < 2; i++) {
        for(int k = 0; k < 2; k++) {
            printf("Enter element [%d][%d] - ", i, k);
            scanf("%d", &A[i][k]);
        }
    }

    printf("Enter elements for Matrix B: \n");
    for(int i = 0; i < 2; i++)
        for(int k = 0; k < 2; k++) {
            printf("Enter element [%d][%d] - ", i, k);
            scanf("%d", &B[i][k]);
        }

    int sum = 0;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                sum = sum + (A[i][k] * B[k][j]);
            }
            arr_prod[i][j] = sum;
            sum = 0;
        }
    }

    printf("A X B = \n");
    for(int i = 0; i < 2; i++) {
        for(int k = 0; k < 2; k++) {
            printf("%d ", arr_prod[i][k]);
        }
        printf("\n");
    }

    return 0;
}
