#include <stdio.h>

int main() {
    int matrix[3][3], i, j;
    int primarySum = 0, secondarySum = 0;

    
    printf("Enter the elements of the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for (i = 0; i < 3; i++) {
        primarySum += matrix[i][i];         
        secondarySum += matrix[i][2 - i];  
    }

    
    printf("Sum of Primary Diagonal: %d\n", primarySum);
    printf("Sum of Secondary Diagonal: %d\n", secondarySum);

    return 0;
}
