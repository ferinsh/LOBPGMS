/*
looping.c

This program will run the entered name multiple times

Ferin Sharaf
16-08-2022
*/

#include<stdio.h>
#include<stdlib.h>

main()
{
      
      int I,N;
      char Name[30];
      
      printf("\n Enter your name: \n");
      scanf("%s", Name);
      printf("\n Enter the number of times to print your name: \n");
      scanf("%d", &N);
      for(I = 1; I<=N; I++)
      {
            printf("%d : %s \n", I, Name);      
            
      }           
}
