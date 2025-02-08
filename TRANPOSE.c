#include <stdio.h>

int main() {
    int matrix[3][3], transpose[3][3];

  
    printf("Enter the elements of the 3x3 matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    
    printf("\nOriginal Matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

  
    printf("\nTransposed Matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
