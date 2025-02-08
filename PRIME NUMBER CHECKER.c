#include<stdio.h>
void prime(int a);
int main()

{
    int a;
    printf("enter the number:\n");
    scanf("%d",&a);
    prime(a);
}
void prime(int x)
{
    int ctr=0;
    for(int i=1;i<=x;i++)
    {
        if(x%i==0){
            ctr++;
        }
    }
    if(ctr==2){
        printf("%d is a prime number:\n",x);
    }
    else{
        printf("%d is not a prime number:\n",x);
    }
}