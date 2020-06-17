#include<stdio.h>
int main()
{
	//int arr[10] = { 0 };
	/*int a;
	int score[5] = { 0 };
	for (a = 0; a < 4; a++)
	{
		scanf_s("%d", &score[a]);
		score[4] = score[4] + score[a];
	}
	for (a = 0; a < 5; a++)
	{
		printf("¹è¿­ %d¹ø : %d\n",a+1, score[a]);
	}*/
	/*int a, b;
	int arr[5] = { 10,30,40,70,90 };
	int newarr[5] = {0};
	for (a = 0; a < 5; a++)
	{
		newarr[a] = arr[a];
	}
	for (a = 0; a < 5; a++)
	{
		printf("arr[%d] = %d\n", a, arr[a]);
	}
	for (a = 0; a < 5; a++)
	{
		printf("newarr[%d] = %d\n", a, newarr[a]);
	}*/
	int arr[5] = { 4,30,20,10,60 };
	int a, b;
	//b = arr[0];
	for (a = 0; a < 5; a++)
	{
		if (arr[0] < arr[a + 1])
		{
			arr[0] = arr[a + 1];
		}
	}
	printf("%d", arr[0]);
	return 0;
}