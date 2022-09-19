/*

Mark_Card.c
This program outputs checks whether a student got Distinction, First Class, Second Class, Third Class, Failed

Ferin Sharaf
19 - 08 - 2022
*/

#include<stdio.h>
#include<stdlib.h>

main()
{
	float M1, M2, M3, Sum, Avg;
	int reg_no;
	char Name[20];
	
	printf("\nEnter the Name: ");
	scanf("%s", Name);
	printf("\nEnter the Register Number: ");
	scanf("%d", &reg_no);
	printf("\nEnter the Marks of 3 Subjects: \n");
	scanf("%f%f%f", &M1, &M2, &M3);
	
	Sum = M1 + M2 + M3;
	Avg = Sum/3;
	
	if((M1 >= 35) && (M2 >= 35) && (M3 >= 35) && (Avg >= 40)){
		if((Avg >= 50) && (Avg <= 60)){
			printf("\n%s has Second Class", Name);
		}else if((Avg>=60) && (Avg<=70)){
			printf("\n%s has First Class", Name);
		}else if(Avg >= 70){
			printf("\n%s has Distinction", Name);
		}else{
			printf("\n%s has Third class", Name);
		}
	}else{
		printf("\n%s has failed", Name);
	}
}
