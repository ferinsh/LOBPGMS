/*

Array_Avg.c
This program finds the average of elements in an array

Ferin Sharaf
18=08-2022
*/

#include<stdio.h>
#include<stdlib.h>

main()
{
	int i, N, A[50], Sum;
	float Avg;
	
	printf("\nEnter the size of the array: ");
	scanf("%d", &N);
	printf("\nEnter the numbers: \n");
	
	for(i = 1; i<=N; i++){
		scanf("%d", &A[i]);
	}
	
	Sum = 0;
	
	for(i = 1; i<=N; i++){
		Sum = Sum + A[i];
	}
	
	Avg = Sum / N;
	printf("\nThe average is %0.2f", Avg);
	
}
