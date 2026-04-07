#include<stdio.h>

int main() {
	int last = 0,prev =1,next, n;
	printf("enter the value of n: \n");
	scanf("%d",&n);
	next=last + prev;
	for(int i=last; i < n; i++){
		printf("%d,",next);
		last = prev;
		prev=next;
		next=last + prev;
		
	}
	return 0;
}

/*
     enter the value of n:
	10
	1,2,3,5,8,13,21,34,55,89,

*/
