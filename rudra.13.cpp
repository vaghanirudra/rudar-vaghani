 #include<stdio.h>
 
 int main()
 {
 	int A[5] = {10,20,30,40,50};
 	int B[5] = {90,80,70,60,50};
 	int sum[5];
 	int i;
 	
 	for(i = 0; i < 5; i++) {
 		sum[i] = A[i] + B[i];
	 }
	 printf("A\t B\t sum\n");
	 
printf("----------------------------\n");
	 
     for(i = 0; i < 5; i++){
     	printf("\n%d\t %d\t %d\t",A[i],B[i],sum[i]);
	 }
	return 0; 
}

/*
      output
      
    A        B       sum
----------------------------

10       90      100
20       80      100
30       70      100
40       60      100
50       50      100


*/