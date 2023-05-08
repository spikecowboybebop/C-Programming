#include <stdio.h>
void insertKey(int arr[], int key, int position, int size) {
    int c;
    for(int i = 0; i < size; i++) {
        if(i == position) {
            c = arr[i];
            arr[i] = key;
            for(int k = i + 1; k <= size; k++) {
                int m = arr[k];
                arr[k] = c;
                c = m;
            }
        }
        else {
            continue;
        }
    }

}
int main() {
    int size;
    int key;
    int position;
    int arr[100];

    printf("Enter array size: ");
    scanf("%d", &size);

    for(int i = 0; i < size; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter key to be added: ");
    scanf("%d", &key);
    printf("Enter position to be added: ");
    scanf("%d", &position);

    insertKey(arr, key, position, size);

    for(int i = 0; i <= size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
