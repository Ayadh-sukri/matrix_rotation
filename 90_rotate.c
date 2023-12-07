#include"main.h"


void rotate1(int arr1[3][3])
{
	for(int i=0; i<(3/2); i++)
	{
		for(int j=i; j<3-i-1; j++)
		{
			{
				int temp=arr1[i][j];
				arr1[i][j]=arr1[3-1-j][i];
				arr1[3-1-j][i]=arr1[3-1-i][3-1-j];
				arr1[3-1-i][3-1-j]=arr1[j][3-1-i];
				arr1[j][3-1-i]=temp;
			}
		}
	}
}
