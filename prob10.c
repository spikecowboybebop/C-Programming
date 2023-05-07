#include <stdio.h>
//Question 10

int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];
    int even[size];
    int odd[size];

    for(int i = 0; i < size; i++) {
        printf("Enter array element %d: ", i);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            odd[i] = 0;
            even[i] = arr[i];
        }
        else {
            even[i] = 0;
            odd[i] = arr[i];
        }
    }
    printf("The even elements are: ");
    for(int k = 0; k < size; k++) {
        if(even[k] != 0) {
            printf("%d ", even[k]);
        }
    }
    printf("\nThe odd elements are: ");
    for(int k = 0; k < size; k++) {
        if(odd[k] != 0) {
            printf("%d ", odd[k]);
        }
    }

    printf("\n");

    return 0;
}
