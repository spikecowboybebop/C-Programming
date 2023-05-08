#include <stdio.h>
void insertKey(int arr[], int key, int size) {
    arr[size] = key;
    int s = 0;
    for(int i = 1; i < (size+1); i++) {
        s = s + (size + 1) - i;
    }
    for(int i = 0; i < s; i++) {
        for(int k = 0; k < size; k++) {
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
    for(int i = 0; i < (size+1); i++) {
        printf("%d ", arr[i]);
    }

}
int main() {
    int size;
    int key;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[100];

    printf("Insert every element in ascending order\n");
    for(int i = 0; i < size; i++) {
        printf("Enter array element %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter key to be inserted: ");
    scanf("%d", &key);

    printf("The array elements before inserting a new element are: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("The array elements after inserting a new element are: ");
    insertKey(arr, key, size);

}
