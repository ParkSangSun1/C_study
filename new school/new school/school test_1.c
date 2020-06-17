#include<stdio.h>
int main()
{
	/*int arr[5][5] = { 0 };
	int i, j, cnt=1;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			arr[i][j] = cnt;
			cnt++;
		}
		i = i + 1;
		cnt = cnt + 5;
	}
	cnt = 6;
	for (i = 1; i <5; i++)
	{

		for (j = 4; j >= 0; j--)
		{
			arr[i][j] = cnt;
			cnt++;
		}
		i = i + 1;
		cnt = cnt + 6;
	}
	
	
	
	
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		
		}
		printf("\n");
	}*/



	/*int arr[5][5] = { 0 };
	int i, j, cnt=1;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <= i; j++)
		{
			arr[i][j] = cnt;
			cnt++;
		}
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}*/


	/*int arr[5][5] = { 0 };
	int i, j,z, cnt=1;
	for (i = 0; i < 5; i++)
	{
		for (z = 0; z < 4-i; z++)
		{
			
		}
		for (j = z; j <5; j++)
		{
			arr[i][j] = cnt;
			cnt++;
		}

	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}*/

	int arr[5][5] = { 0 };
	int i, j, z,a=4, cnt = 1;
	for (i = 0; i < 5; i++)
	{
		/*for (z = 4; z > i + i;z--)
		{
			arr[i][z] = 0;
		}
	*/
		//afafafaf
		for (j = i; j >=0; j--)
		{
			arr[i][j] = cnt;
			cnt++;
			
		}

	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}