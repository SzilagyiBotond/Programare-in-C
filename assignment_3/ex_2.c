#include <stdio.h>
#include <stdlib.h>
typedef struct{
	char name[20];
	int registration;
	int marks[5];
	float average;
}student;
int main()
{	float averages[3];
	student *student_list;
	student_list=(student*)malloc(3*sizeof(student));
	for(int i=0 ;i<3;i++)
	{
	printf("Name of the student:");
	scanf("%s",student_list[i].name);
	printf("Registration number: ");
	scanf("%d",&student_list[i].registration);
	printf("The grades: \n");
	for(int j=0 ;j<=4;j++)
	scanf("%d",&student_list[i].marks[j]);
	for(int i=0; i<3;i++)
        {
        float sum=0;
        for(int j=0 ;j<5;j++)
                sum +=student_list[i].marks[j];
        student_list[i].average= sum/5;
	averages[i]=sum/5;
        }
	}

	for(int i=0 ;i<2;i++)
		for(int j=i;j<3;j++)
		{
			if(averages[i]>averages[j])
			{
				float t=averages[i];
				averages[i]=averages[j];
				averages[j]=t;
			}
		}
	for(int a=0 ; a<3;a++)
	{
		for(int i=0;i<3;i++)
			if(averages[a]==student_list[i].average)
			{
	printf("Name of the student:");
        printf("%s ",student_list[i].name);
        printf("Registration number: ");
        printf("%d ",student_list[i].registration);
        printf("The grades: \n");
        for(int j=0 ;j<=4;j++)
        printf("%d ",student_list[i].marks[j]);
        printf("\n");
			}
	}

	return 0;
}
