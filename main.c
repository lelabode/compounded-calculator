/**
 * @file      main.c
 * @author    Your Name (lelabode.com)
 * @brief    compounded calculator
 * @version   0.1
 * @date      02-11-2025
 * @copyright 2025, your company / association / school
 */

#include <stdio.h>
#include <math.h>

int main(){

  double principal = 0.0;
  double rate = 0.0;
  int years = 0;
  int timesCompounded = 0;
  double total = 0.0;

  //printf("Compounded Interest Calculator :");

  printf("\nEnter the principal(P)\n :");
  scanf("%lf" , &principal);

  printf("Enter the interest rate %(r)\n :");
  scanf("%lf" , &rate);
  rate = rate/100;

  printf("Enter the number of years(t)\n :");
  scanf("%d" , &years);

  printf("Enter the number of compounded per year(n)\n :");
  scanf("%d" , &timesCompounded);

  total = principal * pow(1 + rate/timesCompounded , timesCompounded * years);


printf("After %d years the total will be $%.2lf ", years , total);
return 0;

}



// end of file main.c
