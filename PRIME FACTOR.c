#include <stdio.h>

int main()
{
int i,n,t;
printf("enter the number:\n");
scanf("%d",&n);
t=n;
printf("prime factors are follows\n");
i=2;
	while(n>1){
    if (n%i==0){
        printf("%d ",i);
    n=n/i;
}
else{
	i++;
}
}
}