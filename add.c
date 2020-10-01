#include <stdio.h> 
#include <math,h>
  

int sum_of_digit(int n) 
{ 
    if (n == 0) 
       return 0; 
    return (n % 10 + sum_of_digit(n / 10)); 
} 
  

int main() 
{ 
    int num;
	printf("enter the number\n");
	scanf("%d",&num);
    int result = sum_of_digit(num); 
    printf("Sum Of Digits In %d Is %d\n", num, result); 
    return 0; 
} 
