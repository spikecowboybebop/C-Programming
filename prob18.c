#include <stdio.h>

int main () {
    int arr[100][100];

    for(int i = 0; i < 3; i++) {
        for(int k = 0; k < 3; k++) {
            printf("Element [%d][%d] - ", i, k);
            scanf("%d", &arr[i][k]);
        }
    }
    for(int i = 0; i < 3; i++) {
        for(int k = 0; k < 3; k++) {
            printf("%d ", arr[i][k]);
        }
        printf("\n");
    }

    return 0;
}
