#include<stdio.h>
int main()
{
	/*int dec;
	int bin[20] = { 0 };
	int p = 0;
	int a;
	printf("숫자하나 입력해");
	scanf_s("%d", &dec);
	while (1)
	{
		bin[p] = dec % 2;
		dec = dec / 2;
		p++;
		if (dec == 0)
		{
			break;
		}
	}
	for (a = p-1; a >= 0; a--)
	{
		printf("%d", bin[a]);
	}*/
	int dec;
	int bin[20] = { 0 };
	int p = 0;
	int a;
	printf("숫자하나 입력해");
	scanf_s("%d", &dec);
	while (1)
	{
		bin[p] = dec % 8;
		dec = dec / 8;
		p++;
		if (dec == 0)
		{
			break;
		}
	}
	for (a = p-1; a >= 0; a--)
	{
		printf("%d", bin[a]);
	}
	return 0;
}