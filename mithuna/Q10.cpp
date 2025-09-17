#include<stdio.h>
int main()
{
	int n,f,l,sum;
	printf("enter 3 digit number:");
	scanf("%d", &n);
	l= n % 10;
	while(n>=10)
	{
		n=n/10;
	}
	f = n;
	sum = f+l;
	printf("sum of first and last digits are: %d\n",sum);
	return 0;
}