#include <stdio.h>
#include <stdlib.h>
 
void main ( ) 
{ int num1=15;
int num2=40;
num1 = num1+num2;
num2 = num1-num2;
num1 = num1-num2;
printf("1st number = %d\n2nd number = %d",num1,num2);
}
