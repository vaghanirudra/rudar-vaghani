#include<stdio.h>

int main()
{
	int n,i;
	i = 1;
	printf("enter N:");
	scanf("%d",&n);
	while(i<=n){
		printf("%d\n",n);
		i = i - 1;
	}	
}
/*
	output:
	enter N:10
	10
	9
	8
	7
	6
	5
	4
	3
	2
	1



*/
