#include<stdio.h>
int main()
{
	//1
	/*char c[100];
	int a, b;
	printf("이름");
	gets(c);
	printf("나이");
	scanf_s("%d", &a);
	printf("이름 : %s, 나이 : %d", c, a);*/

	//2
	/*int x, y;
	scanf_s("%d %d", &x, &y);*/

	//3
	//float a, b=0;
	//scanf_s("%f %f", &a, &b);
	//printf("평균 : %.2f", (a + b) / 2);

	//4
	//int second;
	//int h, m, s;
	//scanf_s("%d", &second);
	//h = second / 3600;
	//m = (second % 3600) / 60;
	//s = second % 60;
	//printf("%d초 = %02d시간 %02d분 %02d초\n",second,h,m,s);

	//5
	/*int a, b, c=0;
	scanf_s("%d %d", &a, &b);
	c=a;
	a = b;
	b = c;
	printf("a : %d, b : %d", a, b);*/

	//6
	/*int a, b=0,c=0;
	for (a = 0; a < 3; a++)
	{
		scanf_s("%d", &b);
		c += b;
	}
	printf("총합 : %d", c);*/

	//7
	/*int a, b;
	scanf_s("%d", &a);
	(a < 4 || a >= 60) ? printf("1") : printf("0");*/

	//8
	/*int a, b;
	scanf_s("%d", &a);
	(a > 3 && a <20) ? printf("1") : printf("0");*/

	//9
	/*int a, b;
	scanf_s("%d", &a);
	(a >3 && a<20) ? printf("1") : printf("0");*/

	//10


	//11
	/*int a, b, c;
	scanf_s("%d %d", &a, &b);
	if ((a >= 20 && a <= 30) && b >= 150)
	{
		printf("합격");
	}*/

	//12
	/*int a, b;
	scanf_s("%d", &a);
	b = a >= 150 ? printf("합격") : printf("불합격");*/

	//13
	//int a, b, c,d;
	//scanf_s("%d %d %d", &a, &b, &c);
	//d = a;
	//if (d< b)
	//{
	//	d = b;
	//}
	//else if (d < c)
	//{
	//	d = c;
	//}
	//printf("%d", d);

	//14
	//int a, b, c,d;
	//scanf_s("%d",&a);
	//scanf_s("%d",&b);
	//scanf_s("%d",&c);
	//d = a;
	//if (d< b)
	//{
	//	d = b;
	//}
	//else if (d < c)
	//{
	//	d = c;
	//}
	//printf("%d", d);

	//15
	/*int a, b;
	scanf_s("%d %d", &a, &b);
	if (a < b)
	{
		a = b;
	}
	scanf_s("%d", &b);
	if(a < b){
		printf("%d", b);
	}
	else
	{
		printf("%d", a);
	}*/
	
	//16
	/*int age, fee;
	fee = 1000;
	scanf_s("%d", &age);
	if (age < 20)
	{
		printf("%d", fee-(fee*0.25));
	}
	else {
		printf("%d", fee);
	}*/

	//17
	//int a, b=1000, c;
	//scanf_s("%d", &a);
	//if (a <= 3)
	//{
	//	printf("0");
	//}
	//else if (a >= 4 && a<=13)
	//{
	//	printf("%d",(b/100)*50);
	//}
	//else if (a >= 14 && a <= 19)
	//{
	//	printf("%d", (b / 100) * 25);
	//}
	//else if (a >= 20)
	//{
	//	printf("%d", b);
	//}

//	//18
//char ch = 0;
//while ((ch = getchar()) != '\n')
//{
//	putchar(ch);
//}
	//19
	/*int a, b=0;
	scanf_s("%d", &a);
	if (a < 1)
	{
		a = 1;
	}
	if (a > 9)
	{
		a = 9;
	}
	while (a > b)
	{
		printf("*");
		
		b++;
	}*/

	//20
//	int a = 0, b = 0;
//	while(a < 5)
//	{
//		while (b < 5)
//		{
//			printf("*");
//			b++;
//		}
//		b = 0;
//		printf("\n");
//		a++;
//	}

	//21
	/*int a=1, b=0;
	while (a <= 10)
	{
		b=b+a;
		a++;
	}
	printf("%d", b);*/


	//22
	/*int a, b=1, c;
	scanf_s("%d", &a);
	if (a < 2 || a>9)
	{
		printf("error");
	}
	else {
		while (b <= 9)
		{
			printf("%d x %d = %d\n", a, b, a * b);
			b++;
		}
	}*/
int a, b = 1, c;
scanf("%d", &a);
if (a < 2 || a>9)
{
	printf("er");
}
else {
	while (b <= 9)
	{
		printf("%dx%d=", a, b, a * b);
		b++;
	}
}

	//23
	/*int a, b, c;
	for (a = 0; a < 5; a++)
	{
		for (b = 0; b < 5; b++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	//24
	/*int a, b, c;
	for (a = 1; a <= 5; a++)
	{
		for (b = 0; b < a; b++)
		{
			printf("*     ");
		}
		printf("\n");
	}*/

	//25
	/*int a, b, c, d;
	for (a = 1; a <= 5; a++)
	{
		for (b = 5; b >= a; b--)
		{
			printf(" ");
		}
		for (c = 0; c < a; c++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	//26
	//18번과 비슷한 문제, 모르겠음
	
	//27
	/*int a=0, b, c;
	do {
		printf("%d", a);
		a++;
		if (a == 5)
		{
			break;
		}
	} while (a <= 9);*/

	//28
//int a = 0, b, c;
//do {
//	
//	
//	if (a >4)
//	{
//		continue;
//	}
//	printf("%d", a);
//	a++;
//} while (a <= 9);
	return 0;
}
//못푼 문제 : 10, 18, 26