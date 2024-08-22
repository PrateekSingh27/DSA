#include <stdio.h>

int binarySearch(int arr[], int left, int right, int key) 
{
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return mid;
        }

        if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    

    int n, key, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to search for: ");
    scanf("%d", &key);

    int result = binarySearch(arr, 0, n - 1, key);
    if (result == -1) {
        printf("Element is not present in the array");
    } else {
        printf("Element is present at index %d", result);
    }

    
    return 0;
}