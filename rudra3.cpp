#include<stdio.h>

int main()

{  
   float radius , area;
   float pi = 3.14;
   printf("enter the radiud of circle ");
   scanf("&f", &radius);
   area = pi * radius * radius;
   printf("area of circle = %.2f\n", area);
   
   return 0; 
}

// 
enter the radiud of circle 10
area of circle = 0.00
//