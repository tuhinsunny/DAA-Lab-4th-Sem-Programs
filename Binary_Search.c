#include <stdio.h>

int binarySearch(int arr[], int size, int key) {
    int start = 0, end = size - 1, mid;
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] > key) {
            end--;
        } else {
            start++;
        }
    }
    return -1;
}

int main() {
    int n, k;
    printf("Enter the size of the array : ");
    scanf("%d", &n);

    printf("Enter the elements of the Array : \n");
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the number to be searched : ");
    scanf("%d", &k);

    int result = binarySearch(arr, n, k);
    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at %dth index.\n", result);

    return 0;
}
