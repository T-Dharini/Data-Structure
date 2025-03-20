#include <stdio.h>

int main() {
    int n, i, element;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter %d elements of the array: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to insert at the end: ");
    scanf("%d", &element);
    arr[n] = element;
    printf("Array after insertion: \n");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
