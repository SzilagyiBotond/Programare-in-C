#include <stdio.h>
#include <stdlib.h>
void read_array(int array[], int n)
{
	for(int i=0;i<n;i++)
	{
		int j=0;
		scanf("%d",&j);
		*(array+i)=j;
	}
}
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
int sort(int array[],int n)
{
	for(int i=0 ; i<n-1;i++)
		for(int j=i+1 ;j<n;j++)
			if(*(array+i)>*(array+j))
				swap((array+i),(array+j));
}
void print(int array[],int n)
{	for(int i=0 ;i<n;i++)
		printf("%d ",*(array+i));
	printf("\n");}
void merge(int array1[],int array2[],int array3[],int n,int m)
{
	int t=0;
	for(int i=0;i<n;i++)
	{*(array3+t)=*(array1+i);
	t+=1;}
	for(int i=0;i<m;i++)
	{*(array3+t)=*(array2+i);
        t+=1;}
	sort(array3,n+m);
}
int main()
{
	int array1[100]={0},array2[100]={0},array3[200]={0};
	int n,m;
	printf("n=");
	scanf("%d",&n);
	printf("m=");
	scanf("%d",&m);
	printf("Array1's elements:\n");
	read_array(array1,n);
	sort(array1,n);
	print(array1,n);
	printf("Array2's elements:\n");
	read_array(array2,m);
        sort(array2,m);
        print(array2,m);
	merge(array1,array2,array3,n,m);
	print(array3,n+m);
	return 0;
}
