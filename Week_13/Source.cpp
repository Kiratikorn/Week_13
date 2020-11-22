#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void mirror(char* x, int n)
{
	int total = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		if (x[i] >= '0' && x[i] <= '9')
		{
			total += x[i] - '0';
		}
		else
		{
			printf("%c", x[i]);
		}
	}
	printf(" => %d", total);
}
int main()
{
	int n;
	char a[100];
	scanf("%[^\n]", a);
	n = strlen(a);
	mirror(a, n);

	return 0;
}