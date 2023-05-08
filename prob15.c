#include <stdio.h>
void deleteElement(int arr[], int position, int size) {
    for(int i = 0; i < size; i++) {
        if(i == position) {
            continue;
        }
        else {
            printf("%d ", arr[i]);
        }
    }
}
int main() {
    int size;
    int position;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[100];

    for(int i = 0; i < size; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element's position you want to delete: ");
    scanf("%d", &position);

    deleteElement(arr, position, size);

    return 0;
}
