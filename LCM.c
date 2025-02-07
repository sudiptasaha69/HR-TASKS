#include <stdio.h>
int gcd (int a, int b);
int main()
{
	int m,n,lcm;
	printf("enter the two numbers:\n");
	scanf("%d %d",&m,&n);
	lcm=(m*n)/gcd(m,n);

	printf("gcd of %d and %d is %d:\n",m,n,lcm);
	return 0;
	}
 int gcd(int a,int b)
{
if(a==0) return b;
if(b==0)return a;
	
if(a>b)
return gcd(b,a%b);
else
return  gcd(b%a,a);
	}