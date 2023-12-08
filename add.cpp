#include"main.h"

void add(int arr1[3][3], int arr2[3][3])
{
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			arr1[i][j] += arr2[i][j];
		}
	}
}
