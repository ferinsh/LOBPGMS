/*program to find the area of a circle*/


#include<stdio.h>
#include<stdlib.h>


main()
{
      float AreaC, Radius, CircumC;
      printf("\n\n\tThis program finds the Area and Circumference of a circle\n");
      printf("Enter the radius: ");
      scanf("%f%", &Radius);
      
      AreaC = 3.14 * Radius * Radius;
      CircumC = 2 * 3.14 * Radius;
      printf("The area and Circumference of the circle wirh the radius %0.2f is %0.2f sq cm and %0.2f cm", Radius, CircumC, AreaC);
} 
