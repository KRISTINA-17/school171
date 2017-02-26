#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void paint(int n){
	int i;
	for (i = 0; i < n; i++)
	{
		printf("   _~_    ");
	}
	printf("\n");

	for (i = 0; i < n; i++)
	{
		printf("  (o o)   ", i);
	}
	printf("\n");

	for (i = 0; i < n; i++)
	{
		printf(" /  V  \\  ");
	}
	printf("\n");

	for (i = 0; i < n; i++)
	{
		printf("/(  _  )\\ ");
	}
	printf("\n");

	for (i = 0; i < n; i++)
	{
		printf("  ^^ ^^   ");
	}
	printf("\n\n");
}
int main(){
	int n, i;
	scanf("%d", &n);
	for (int i = 0; i < n / 7; i++)
	{
		paint(7);
	}
	paint(n % 7);
	
	system("pause");
	return 0;
}