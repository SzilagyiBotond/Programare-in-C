#include <stdio.h>
#include <math.h>
int main(){
	float radius;
	scanf("%f",&radius);
	double pi=3.14159;
	float area;
	area=area+pow(radius,(float)2)*pi;
	printf("Area in float: %f\n",area);
	double area2;
	area2=area2+pow(radius,(float)2)*pi;
	printf("Area in double %f\n",area2);
	return 0;
}
