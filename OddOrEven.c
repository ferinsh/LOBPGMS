/*

OddOrEven.c
This program is used to check whether a number is odd or even

Ferin Sharaf
18-08-2022
*/

#include<stdio.h>
#include<stdlib.h>

main()
{
	int Num, R;
	
	printf("\nEnter the number: ");
	scanf("%d", &Num);
	R = Num % 2;
	
	if(R == 0){
		printf("\nThe number %d is even", Num);
	}else{
		printf("\nThe number %d is odd", Num);
	}
}
