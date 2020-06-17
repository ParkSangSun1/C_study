#include<stdio.h>
int main()
{
	/*int a=0,b,c;
while (a <= 100)
{
	a++;
	if (a % 9 == 0)
	{
		printf("%d\n", a);
	}
	}*/
	/*int da1, a=0,h=0;
	float k;
	while (a < 5)
	{
		scanf_s("%d", &da1);
		h = h + da1;
		a++;
	}
	k = h / 5;
	printf("%d %f", h, k);*/

	//int a=0, b, c;
	//float k;
	//do {
	//	a++;
	//		k = a * 3.7854;
	//	printf("%f %d번째\n", k, a);
	//} while (a<100);

	/*int a=2, b, c, sum=0;
	do {
		
		sum = sum + a * a;
		if (sum > 5000)
		{
			break;
		}
			a = a + 2;
		
			
	} while (1);
	printf("%d %d", a,sum);*/

	/*int x = 252, y = 105,h;
	while(1)
	{
		if (x > y)
		{
			x = x - y;
			if (x == y)
			{
				break;
			}
		}
		else if(y > x)
		{
			y = y - x;
			if (x == y)
			{
				break;
			}
		}

	}
	printf("x = %d y = %d", x, y);*/

	/*int x = 252, y = 105, z,l;
	while (1)
	{
		z = x % y;
	
		x = y;
		y = z;
		if (z == 0)
		{
			break;
		}

		

	}
	
	printf("%d", x);*/

	/*double arr[5] = { 1.0,2.1,3.2,4.3,5.4 };
	int a, b;
	for (a = 4; a >= 0; a--)
	{
		printf("%.1lf ", arr[a]);
	}*/

	/*int  arrA[3] = { 1,2,3 };
	int  arrB[10],b=0;
	for (int a = 0; a < 10; a++)
	{
		
		arrB[a] = arrA[b];
		b++;
		if (b == 3)
		{
			b = 0;
		}
	}
	for (b = 0; b < 10; b++)
	{
		printf("%d ", arrB[b]);
	}*/

	/*int arr[10] = { 1,2 };
	int i,b;
	for (i = 2; i < 10; i++)
	{
		arr[i] = arr[i - 2] + arr[i - 1];
	}
	for (b = 0; b < 10; b++)
	{
		printf("%d ", arr[b]);
	}*/

//int num[3][4] = { {1},{5,6},{9,10,11} };
//for (int i = 0; i < 3; i++)
//{
//	for (int j = 0; j < 4; j++)
//	{
//		printf("%d ", num[i][j]);
//	}
//	printf("\n");
//}


//int i, j;
//int num[4][5] = { 0 };
//int cnt = 0;
//for (i = 0; i < 4; i++)
//{
//	for (j = 0; j < 5; j++)
//	{
//		cnt++;
//		num[i][j] = cnt;
//	}
//}
//for (i = 0; i < 4; i++)
//{
//	for (j = 0; j < 5; j++)
//	{
//		printf("%d ", num[i][j]);
//	}
//	printf("\n");
//}

//int i, j,n=1;
//int num[3][3] = { 0 };
//for (i = 0; i < 3; i++)
//{
//	for (j = 0; j < 2; j++)
//	{
//		num[i][j] = n;
//		n++;
//	}
//}
//for (i = 0; i < 3; i++)
//{
//	for (j = 0; j < 2; j++)
//	{
//		printf("%d ", num[i][j]);
//	}
//	printf("\n");
//}
//printf("\n\n\n\n");
//for (i = 0; i < 3; i++)
//{
//	for (j = 0; j < 2; j++)
//	{
//		num[i][j] = n;
//		n++;
//	}
//}
	//int a=7, b,c;
	//b = a++;
	//c = a--;
	//printf("%d\n", a);
	//printf("%d\n", b);
	//printf("%d\n", c);

//int num,a,a1,a2,a3,a4,a5;
//scanf("%d", &num);
//while(1){
//	num = num % 10;
//	if (num == 0)
//	{
//		break;
//	}
//}

//int arr[5] = { -7,9,10,50,55 };
//int a=0, b=0, c=0;
//a = arr[0];
//for (b = 0; b < 4; b++)
//{
//	if (a < arr[b + 1])
//	{
//		a =arr [b + 1];
//	}
//}
//printf("최대값 : %d", a);
//
//c = arr[0];
//for (b = 0; b < 4; b++)
//{
//	if (c > arr[b + 1])
//	{
//		c = arr[b + 1];
//	}
//}
//printf("최소값 : %d", c);

int arr[5] = { 90,80,100,50,70 };
int tmp,a;
for ( a = 0; a < 5; a++)
{
	for (int b = 0; b < 4-a; b++)
	{
		if (arr[b] > arr[b+1])
		{
			tmp = arr[b];
			arr[b] = arr[b+1];
			arr[b+1] = tmp;
		}
	}
}
for (a = 0; a < 5; a++)
{
	printf("%d ",arr[a]);
}
	return 0;
}