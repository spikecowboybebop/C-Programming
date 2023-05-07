#include <stdio.h>
// Question 8
int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i < size; i++) {
        printf("Enter array element %d: ", i);
        scanf("%d", &arr[i]);
    }

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
        if(arr[i] != 0) {
            printf("%d happens %d times\n", arr[i], count+1);
        }
        else {
            continue;
        }
    }

    return 0;

}
