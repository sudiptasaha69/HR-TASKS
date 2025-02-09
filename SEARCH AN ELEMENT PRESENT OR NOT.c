#include <stdio.h>

int main() {
    int n, element, frequency = 0;

  
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

  
    int arr[n];

   
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

  
    printf("Enter the element to search for: ");
    scanf("%d", &element);

  
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            frequency++;
        }
    }

   
    if (frequency > 0) {
        printf("Element %d is present and its frequency is: %d\n", element, frequency);
    } else {
        printf("Element %d is not present in the array.\n", element);
    }

    return 0;
}
