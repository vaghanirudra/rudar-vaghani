#include<stdio.h>

int main() {
	int last = 0,prev =1,next;
	for(int i=last; i < 5; i++){
		printf("%d,",next);
		last = prev;
		prev=next;
		next=last + prev;
		
	}
	return 0;
}
