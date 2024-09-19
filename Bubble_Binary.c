#include<stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j]>arr[j+1]) {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

int binarySearch(int arr[], int n, int x) {
    int low = 0;
    int high = n-1;

    while (low <= high ) {
        int mid = (low + high)/2;
        if(arr[mid] == x) {
            return mid;
        }
        if(arr[mid] > x) {
            high = mid - 1;
        } else {
            low = mid +1;
        }
    }

    return -1;
}

int main() {
    int size;
    printf("Enter the number of elements you want in array: \n");
    scanf("%d",&size); 
    int arr[size];

    printf("Enter the elements of array: \n");
    for(int i=0; i<size; i++) {
        scanf("%d",&arr[i]);
    }

    printf("Enter choice: \n");
    printf("1 -> Bubble Sort: \n");
    printf("2 -> Binary Search: \n");
    printf("3 -> Exit : \n");

    int choice;
    scanf("%d",&choice);

    switch(choice) {
        case 1:
            bubbleSort(arr, size);
            printf("Array sorted using Bubble Sort.\n");
            for(int i=0; i<size; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;

        case 2:
            int x;
            printf("Enter the element you want to search: \n");
            scanf("%d",&x);
            int result = binarySearch(arr, size, x);
            if(result != -1) {
                printf("Element found at index %d.\n", result);
            } else {
                printf("Element not found.\n");
            }
            break;
        case 3: 
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice...\n");
    }

    return 0;
}
