#include <stdio.h>

int main() {
    int n, i, arr[10], sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

    printf("Sum of even numbers = %d\n", sum);

}

/*  
    output
    Enter number of elements: 10
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
Sum of even numbers = 30

*/