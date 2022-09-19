/*

Sum_Avg_Even.c
This program finds the sum and average of even numbers from an array

Ferin Sharaf
18-08-2022
*/

#include<stdio.h>
#include<stdlib.h>

main()
{
	int a[50], i, N, R, Sum,  Even_Count;
	float Avg;
	
	printf("\nProgram to find the Sum and Average of even numbers from an array\n");
	printf("\nEnter the size of the array: \n");
	scanf("%d", &N);
	printf("\nEnter the elements: \n");
	
	for(i = 1; i<=N; i++){
		scanf("%d", &a[i]);
	}
	
	Sum = 0;
	Even_Count = 0;
	
	for(i = 1; i<=N; i++){
		R = a[i]%2;
		if(R == 0){
			Sum = Sum + a[i];
			Even_Count++;
		}
	}
	
	Avg = Sum / Even_Count;
	
	printf("\nThe sum is %d", Sum);
	printf("\nThe Average is %f", Avg);
	
}
