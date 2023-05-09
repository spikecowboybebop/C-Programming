#include <stdio.h>

int main() {
    int A[100][100];

    int size;
    printf("Input size of square matrix: ");
    scanf("%d", &size);

    for(int i = 0; i < size; i++) {
        for(int k = 0; k < size; k++) {
            printf("Input array element A[%d][%d] - ", i, k);
            scanf("%d", &A[i][k]);
        }
    }

    int sum = 0;
    for(int i = (size - 1); i >= 0; i--) {
        sum = sum + A[i][(size-1)-i];
    }

    printf("The sum of right diagonal elements is: %d", sum);


    return 0;
}
