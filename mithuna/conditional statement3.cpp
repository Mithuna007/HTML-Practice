#include<stdio.h>
int main() {
	int a;
	printf("enter a number: ");
	scanf("%d",&a);
	if(a % 2 == 0)
	printf("%d the given number is even.", a);
	else {
	printf(" %d the given number is odd.", a);
}
	return 0;
}