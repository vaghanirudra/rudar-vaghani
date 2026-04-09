#include<stdio.h>

int main()
{
	int a,d,c,max;
	printf("enter three number:\n");
	
	scanf("%d%d%d",&a,&d,&c);
	
	max = (a > d) ? ((a > c) ? a : c) :(
	(d > c) ? d : c);
	
	  printf("%d is the is greatest number.",max);
}

/*
  output
  enter three number:
	12
	23
	45
	45 is the is greatest number.
*/