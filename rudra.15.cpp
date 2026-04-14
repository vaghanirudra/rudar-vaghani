#include<stdio.h>

int main()
{
	int i;
	float maths[5], sci[5], eng[5], total[5], per[5];
    char grade[5];
    
      for(i = 0; i < 5; i++) {
        printf("\nEnter marks of Student %d (Maths Sci Eng): ", i+1);
        scanf("%f %f %f", &maths[i], &sci[i], &eng[i]);

        total[i] = maths[i] + sci[i] + eng[i];
        per[i] = total[i] / 3;

        if(per[i] >= 75)
            grade[i] = 'A';
        else if(per[i] >= 60)
            grade[i] = 'B';
        else if(per[i] >= 50)
            grade[i] = 'C';
        else
            grade[i] = 'F';
    }
printf("\n\nMaths  Sci  Eng  Total  Per  Grade\n");

for(i = 0; i < 5; i++) {
    printf("%.0f   %.0f   %.0f   %.2f   %.2f   %c\n",
        maths[i], sci[i], eng[i],
        total[i], per[i], grade[i]);
}
}

/*
    output
    
    Enter marks of Student 1 (Maths Sci Eng): 68
78
48

Enter marks of Student 2 (Maths Sci Eng): 38
85
69

Enter marks of Student 3 (Maths Sci Eng): 57
48
38

Enter marks of Student 4 (Maths Sci Eng): 99
69
75

Enter marks of Student 5 (Maths Sci Eng): 79
86
79


Maths  Sci  Eng  Total  Per  Grade
68   78   48   194.00   64.67   B
38   85   69   192.00   64.00   B
57   48   38   143.00   47.67   F
99   69   75   243.00   81.00   A
79   86   79   244.00   81.33   A

--------------------------------
Process exited after 22.62 seconds with return value 0
Press any key to continue . . .













*/