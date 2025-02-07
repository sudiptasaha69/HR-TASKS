#include<stdio.h>

int fibonacci(int n);

int main()
{
    int m;
    printf("Enter the range: ");
    scanf("%d",&m);
    if (m <= 0) 
    {
        printf("Please enter a positive integer.\n");
    } 
    else 
    {
        printf("Fibonacci series up to %d terms: \n", m);
        for (int i = 0; i < m; i++) 
        {
            printf("%d ", fibonacci(i));
        }
    }
    return 0;
}

int fibonacci(int n)
{
    if (n <= 1) 
    {
        return n;
    } 
    else 
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}