/*

ArraySum.c
this program finds the sum of all the elements in an array

Ferin Sharaf
17-08-2022

*/

#include<stdio.h>
#include<stdlib.h>

main()
{
	int A[30], A_size, i, Sum = 0;
	
	printf("\n\tThis program is used to find the sum of all elements in an array\n");
	printf("\nEnter the size of the array: ");
	scanf("%d", &A_size);
	printf("\nEnter the elements of the array: ");
	
	for(i = 0; i<A_size; i++){		//loop to input array elements
		scanf("%d", &A[i]);
	}
	
	for(i = 0; i<A_size; i++){		//loop to add the array elements
		Sum = Sum + A[i];
	}
	
	printf("\nThe sum of all elements in the array is: %d", Sum);		//to print the sum of array elements

}
