/*
Pass_Fail.c
This program inputs the name, Register Number, and Mark of a student in 3 subject and checks whether they passed or failed

Ferin Sharaf
19-08-2022
*/

#include<stdio.h>
#include<stdlib.h>

main()
{
	float Mk1, Mk2, Mk3, Sum, Avg;
	int reg_no;
	char Name[20];
	
	printf("\nEnter the Name: ");
	scanf("%s", Name);
	printf("\nEnter the Register Number: ");
	scanf("%d", &reg_no);
	printf("\nEnter the Marks of 3 Subjects: \n");
	scanf("%f%f%f", &Mk1, &Mk2, &Mk3);
	
	Sum = Mk1 + Mk2 + Mk3;
	Avg = Sum/3;
	
	if((Mk1 >= 35) && (Mk2 >= 35) && (Mk3 >= 35) && (Avg >= 45) ){
		printf("\n %s has passed ", Name);
	}else{
		printf("\n %s has failed ", Name);
	}
}
