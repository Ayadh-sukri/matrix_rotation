#include"main.h"

void rotate2(int arr2[3][3])
{
	for(int i=0; i<2; i++)
	{
		for(int j=i; j<3; j++)
		{
			int temp=arr2[i][j];
			arr2[i][j]=arr2[3-i-1][3-j-1];
			arr2[3-i-1][3-j-1]=temp;
		}
	}
}
