/*
    array.c
    program to input 20 numbers into an array and display the content
    
    Ferin Sharaf
    16-08-2022

*/


#include<stdio.h>
#include<stdlib.h>

main()
{
      int I, X[30],N;
      
      printf("\n Enter the size of the array: \n");
      scanf("%d", &N);
      
      printf("Enter %d numbers: \n", N);
      for(I = 0; I<N; I++){
            scanf("%d", &X[I]);
      }
      for(I = 0; I<N; I++){
            printf("%d \n", X[I]);
      }
}
