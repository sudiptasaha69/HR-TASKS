#include <stdio.h>

void reverseArray(int *arr, int n) {
    int *start = arr;        
    int *end = arr + n - 1;   
    int temp;
    
    
    while (start < end) {
       
        temp = *start;
        *start = *end;
        *end = temp;
        
      
        start++;
        end--;
    }
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
    
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    
    reverseArray(arr, n);
    
    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
