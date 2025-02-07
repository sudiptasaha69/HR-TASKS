#include<stdio.h>
int main()
{
    int n,rem,result=0,c;
    printf("enter the number:\n");
    scanf("%d",&n);
    c=n;
    while(n!=0){
        rem=n%10;
        result=(rem*rem*rem)+result;
        n=n/10;
    }
    if(c==result){
        printf("armstrong");
    }
    else{
        printf("not armstrong");
    }
}