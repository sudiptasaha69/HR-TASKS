#include <stdio.h>

void addMatrices(int *a, int *b, int *result, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(result + i * cols + j) = *(a + i * cols + j) + *(b + i * cols + j);
        }
    }
}


void displayMatrix(int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", *(matrix + i * cols + j));
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    
  
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];
    
    
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", (*(matrix1 + i) + j));
        }
    }
    
   
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", (*(matrix2 + i) + j));
        }
    }
    
    
    addMatrices(&matrix1[0][0],&matrix2[0][0],&sum[0][0], rows, cols);
    
   
    printf("Sum of matrices:\n");
    displayMatrix(&sum[0][0], rows, cols);
    
    return 0;
}
