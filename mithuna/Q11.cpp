#include<stdio.h>
int main() 
{
	int n,m;
	printf("enter a 3 digit number");
	scanf("%d", &n);
	if(n>100 && n<999)
	{
		printf("middle digit= %d\n",m);
	}
	return 0;
}