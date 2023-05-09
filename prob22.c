#include <stdio.h>

int main() {
    int A[100][100];
    int T[100][100];

    int rows, col;

    printf("Enter rows: ");
    scanf("%d", &rows);
    printf("Enter columns: ");
    scanf("%d", &col);


    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < col; j++) {
            printf("Enter element A[%d][%d] - ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    for(int i = 0; i < rows; i++) {
        for(int k =0; k < col; k++) {
            T[k][i] = A[i][k];
        }
    }
    printf("Matrix A: \n");
    for(int i = 0; i < rows; i++) {
        for(int k =0; k < col; k++) {
            printf("%d ", A[i][k]);
        }
        printf("\n");
    }

    printf("Transpose of A: \n");
    for(int i = 0; i < col; i++) {
        for(int k =0; k < rows; k++) {
            printf("%d ", T[i][k]);
        }
        printf("\n");
    }

    return 0;
}
