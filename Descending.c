#include <stdio.h>
// Descending Order Sorting
int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i < size; i++) {
        printf("Enter array element %d: ", i);
        scanf("%d", &arr[i]);
    }
    int s = 0;
    // Loop for calculating the maximum number of time the sorting loop would need to run.
    for(int i = 1; i < size; i++) {
            s = s + (size - i);
    }
    // Sorting Loop
    for(int i = 1; i <= s; i++) {
        for(int j = 0; j < (size-1); j++) {
            if(arr[j] < arr[j+1]) {
                int c = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = c;
        }
            else {
                continue;
            }
        }
    }
    //Printing the loop
    printf("The array elements are: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

