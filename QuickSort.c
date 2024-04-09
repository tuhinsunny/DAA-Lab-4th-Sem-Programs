#include <stdio.h>
#include <stdlib.h>

int partition(int arr[], int start, int end) {
    int pivot = arr[start];
    int cnt = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            cnt++;
    }
    // Placing pivot at the right position
    int pivotIndex = start + cnt;
    int temp = arr[pivotIndex];
    arr[pivotIndex] = arr[start];
    arr[start] = temp;

    // Left and right part handling
    int i = start, j = end;
    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
            // Swapping elements
            int temp = arr[i];
            arr[i++] = arr[j];
            arr[j--] = temp;
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int start, int end) {
    if (start >= end) // base case
        return;
    int p = partition(arr, start, end); // finding the partition
    quickSort(arr, start, p - 1);       // sorting the 1st part recursively
    quickSort(arr, p + 1, end);         // sorting the 2nd part recursively
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    quickSort(arr, 0, n - 1);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // releasing the heap memory
    free(arr);

    return 0;
}
