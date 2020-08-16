#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++)
	{
		for (int j = i; j < a; j++)
		{
			printf(" ");
		}
		for (int k = i; k < (i * 2); k++)
		{
			printf("* ");
		}
		printf("\n"); 
	}
	return 0;
}