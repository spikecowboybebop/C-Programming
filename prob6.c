#include <stdio.h>
// Question 6
int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i < size; i++) {
        printf("Enter array element %d: ", i);
        scanf("%d", &arr[i]);
    }

    int c = 0;

    for(int i = 0; i < size; i++) {
        int count = 0;
        for(int k = 0; k < size; k++) {
            if(arr[i] == arr[k] && i!=k) {
                count = count + 1;
                arr[k] = 0;
            }
            else {
                continue;
            }
        }
        if(count + 1 == 2 && arr[i] != 0) {
            c = c + 1;
        }
        else {
            continue;
        }
    }
    printf("The total number of duplicate elements are: %d", c);

    return 0;

}
