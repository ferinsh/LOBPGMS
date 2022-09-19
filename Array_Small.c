/*

Array_Small.c
program in C to find the smallest element in an array

Ferin Sharaf
17-08-2022

*/

#include<stdio.h>
#include<stdlib.h>

main()
{
	int arr[20];
	int N, i;
	int small;
	
	printf("\n\tThis program finds the smallest element in an array\n");
	printf("\nEnter the size of the array: \n");
	scanf("%d", &N);
	printf("\nEnter the elements of the array: \n");
	
	for(i = 0; i<N; i++){
		printf("\nNumber %d :", i+1);
		scanf("%d", &arr[i]);
	}
	
	small = arr[0];
	
	for(i = 0; i<N; i++){
		if(arr[i] <= small){
			small = arr[i];
		}
	}
	
	printf("\nThe smallest element: %d", small);
	
	
	
}
