#include <stdio.h>
#include <float.h>
int main(){
	double a[5];
	int i;
	double biggest=DBL_MIN,smallest=DBL_MAX;
	for(i=0;i<=4;i++)
	{
		scanf("%lf",&a[i]);
		if(a[i]>biggest)
			biggest=a[i];
		if(a[i]<smallest)
			smallest=a[i];
	}
	printf("The smalelst number: %f\n",smallest);
	printf("The biggest number: %f\n",biggest);
	return 0;
}
