#include <stdio.h>
#include <math.h>
int main(){
	int number1,number2;
	scanf("%d",&number1);
	scanf("%d",&number2);
	int sum, sumsq;
	float avg;
	sum = number1+number2;
	avg = (float) (number1+number2)/2;
	sumsq = pow(number1,2)+pow(number2,2);
	printf("Sum of the two numbers: %d\n",sum);
	printf("Average of two numbers: %f\n",avg);
	printf("Sum of the squares of two numbers: %d\n",sumsq);
	return 0;
}
