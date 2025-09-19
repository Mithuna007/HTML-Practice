#include<stdio.h>
int main ()
{
	int a,b,d;
	printf("enter two numbers: ");
	scanf("%d%d",&a ,&b);
	d=a-b;
	printf("the difference between two numbers is:%d\n",d);
	if( d%2 == 0)
	printf("%d  is even",d);
	else  printf("%d  is odd",d);
	return 0;
}