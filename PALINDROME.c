#include<stdio.h>

void palindrome(int n);

int main()
{
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    palindrome(n);
    return 0;
}

void palindrome(int n)
{
    int i,j,sum=0;
    i=n;
    while(i>0)
    {
        j=i%10;
        sum=sum*10+j;
        i/=10;
    }
    if(sum==n)
    {
        printf("%d is a palindrome number.",n);
    }
    else
    {
        printf("%d is not a palindrome number.",n);
    }
}