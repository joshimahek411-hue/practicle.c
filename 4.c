#include <stdio.h>

int main() {
    int arr[100], n, i;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid array size!\n");
        return 1;
    }

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    printf("Cubes of array elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d cubed = %d\n", *(ptr + i),
               (*(ptr + i)) * (*(ptr + i)) * (*(ptr + i)));
    }

    return 0;
}