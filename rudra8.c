
#include<stdio.h>

int main()
{ 
  int c,n,ne,p=0;
  printf("enter value");
  scanf("%d",&n);
  c=1;
  while(c<=n)
    { 
     ne=p+c;
        printf("%d ",c);
        p=c;
        c=ne;
        
	}
}

/*
 	 output
  	enter value21
 	1 1 2 3 5 8 13 21 
*/