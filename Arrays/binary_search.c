// binary search 

#include <stdio.h>

int main() {
    int n, i, key, low, high, mid, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Invalid array size");
        return 0;
    }

    int arr[n];

    printf("Enter %d elements (in sorted order):\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            printf("Element found at index %d", mid);
            found = 1;
            break;
        }
        else if(arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(found == 0) {
        printf("Element not found");
    }

    return 0;
}
