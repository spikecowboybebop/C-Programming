#include <stdio.h>
//Question 9
int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i < size; i++) {
        printf("Enter array element %d: ", i);
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(max > arr[i]) {
            continue;
        }
        else {
            max = arr[i];
        }
    }
    int min = arr[0];
    for(int i = 1; i < size; i++) {
        if(min < arr[i]) {
            continue;
        }
        else {
            min = arr[i];
        }
    }

    printf("The minimum element in the array is: %d\n", min);
    printf("The maximum element in the array is: %d", max);

    return 0;
}
