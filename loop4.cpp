#include<stdio.h>

int main()
{
	int n,i;
	i = 1;
	printf("enter N:");
	scanf("%d",&n);
	while(i<=n){
		printf("%d\n",i);
		i = i + 2;
	}	
}

/*

 	enter N:10
	1
	3
	5
	7
	9

*/