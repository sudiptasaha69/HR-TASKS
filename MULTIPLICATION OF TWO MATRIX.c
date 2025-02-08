
#include<stdio.h>
void matrixMultiply(int *mat1, int *mat2, int *result, int r1, int c1, int c2) ;
int main()
{
    int p,q,m,n;
    printf("enter the rows and columns of the first matrix:\n");
    scanf("%d %d",&p,&q);
    printf("enter the rows and columns of thw second matrix:\n");
    scanf("%d %d",&m,&n);
    if(q!=m){
        printf("multiplication is not possible:\n");
    }
    int arr[p][q],arr1[m][n],result[p][n];
    
    printf("enter the first matrix:\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&arr[i][j]);
        }
    }
        printf("enter the second matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    matrixMultiply(&arr[0][0],&arr1[0][0],&result[0][0],p,q,n);
    for(int i=0;i<p;i++){
        for(int j=0;j<n;j++){
printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    
}

    
void matrixMultiply(int *mat1, int *mat2, int *result, int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            *(result + i * c2 + j) = 0;
            for (int k = 0; k < c1; k++) {
                *(result + i * c2 + j) += *((mat1 + i * c1 + k)) * *((mat2 + k * c2 + j));
            }
 }
}
}