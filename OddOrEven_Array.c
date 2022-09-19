/*

OddOrEven_Array.c
This program checks whether the elements in an array is odd or even

Ferin Sharaf
18-08-2022
*/

#include<stdio.h>
#include<stdlib.h>

main()
{
	int R, N, i, A[30];
	
	printf("\nEnter the size of the array: ");
	scanf("%d", &N);
	printf("\nEnter the elements of the array: \n");
	
	for(i = 1; i<=N; i++){
		scanf("%d", &A[i]);
	}
	
	for(i = 1; i<=N; i++){
		R = A[i]%2;
		if(R == 0){
			printf("\n%d is even", A[i]);
		}else{
			printf("\n%d is odd", A[i]);
		}
	}
}
