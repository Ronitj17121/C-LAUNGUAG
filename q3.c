#include<stdio.h>

void main()

{
	int i=1;
	int n;
	int x;
	printf("Enter n  :");
	scanf("%d",&n);
	
	while(i<=10)
	
	{
		x=n*i;
		printf("%d X %d = %d\n", n,i,x);
		i++;
	}
}
