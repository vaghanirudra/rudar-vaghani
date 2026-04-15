#include<stdio.h>

int main()
{
	 int n,i,a[10],sum = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Odd numbers: ");
    for(i = 0; i < n; i++) {
        if(a[i] % 2 != 0) {
            printf("%d ", a[i]);
            sum += a[i];
        }
    }

    printf("\nSum = %d", sum);
}

/*
     output
     Enter size: 10
	Enter elements:
	1
	2
	3
	4
	5
	6
	7	
	8
	9
	10
	Odd numbers: 1 3 5 7 9
	Sum = 25
*/