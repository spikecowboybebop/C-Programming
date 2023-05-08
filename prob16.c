#include <stdio.h>
void findSecondLargest(int arr[], int size) {
    int s = 0;
    for(int i = 1; i < size; i++) {
        s = s + size - i;
    }
    for(int i = 0; i < s; i++) {
        for(int k = 0; k < size-1; k++) {
            if(arr[k] > arr[k+1]) {
                int c = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = c;
            }
            else {
                continue;
            }
        }
    }
    printf("The second largest element is %d", arr[size - 2]);
}
int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[100];
    for(int i = 0; i < size; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    findSecondLargest(arr, size);

    return 0;
}
