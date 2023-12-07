#include"main.h"

int main()

{
	int i,j, arr1[3][3], arr2[3][3];
	printf("Enter the 1st matrix\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Enter the 2nd matrix\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	rotate1(arr1);
	rotate2(arr2);

	printf("1st matrix after 90deg rotation\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
	printf("2nd matrix after 180deg rotation\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}

	add(arr1, arr2);
	printf("Addition is\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
}
