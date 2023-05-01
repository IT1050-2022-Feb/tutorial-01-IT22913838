/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1;
  int mark2;
  float avg;
  
  printf("Enter marks for subject 1: \n");
  scanf("%d", &mark1);

  printf("Enter marks for subject 2: \n");
  scanf("%d", &mark2);
  
  avg = (mark1 + mark2)/ 2.0;
  printf("Average is: %.2f \n", avg);
  
  return 0;
}

