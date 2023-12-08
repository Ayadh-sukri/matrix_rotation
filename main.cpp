#include"main.h"

int main()

{
	int i,j, arr1[3][3], arr2[3][3];
	cout<<"Enter the 1st matrix" <<endl;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cin>>arr1[i][j];
		}
	}
	cout<<"Enter the 2nd matrix"<<endl;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cin>>arr2[i][j];
		}
	}
	rotate1(arr1);
	rotate2(arr2);

	cout<<"1st matrix after 90deg rotation"<<endl;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"2nd matrix after 180deg rotation"<<endl;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<arr2[i][j]<<" ";
		}
		cout<<endl;
	}

	add(arr1, arr2);
	cout<<"Addition is"<<endl;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}
}
