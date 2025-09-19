#include<stdio.h>
int main ()
{
	int n;
	printf("enter a number: ");
	scanf("%d", &n);
	if(n>99 && n<999)
	printf("%d is a 3 digit number ",n);
	else  printf("%d is not a 3 digit number",n);
	return 0;
}