#include <stdio.h>

int main() {
    int n, i, element, pos;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter %d elements of the array: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to insert the element (1 to %d): ", n);
    scanf("%d", &pos);
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }
    printf("Enter the element to insert at position %d: ", pos);
    scanf("%d", &element);
    for (i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = element;
    printf("Array after insertion: \n");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


