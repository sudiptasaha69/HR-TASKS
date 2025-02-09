#include <stdio.h>

void swapOddEven(int arr[], int n) {
   
    for (int i = 0; i < n - 1; i++) {
       
        if (i % 2 == 0 && (i + 1) < n) {
            // Swap arr[i] and arr[i+1]
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

   
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array: ");
    printArray(arr, n);

    swapOddEven(arr, n);

    printf("Array after swapping odd and even elements: ");
    printArray(arr, n);

    return 0;
}
