#include <math.h>
#include <stdio.h>

int separator(int a, int precision)
{
	int result=0;
	int sep = a;
	for(int i=0; i < 4; i++)
	{
		if(i == precision-1)result = sep%10;
		sep = floor((float)(sep/10 ));
	}
	return result;
}

int main()
{
	int a = 0;
	float b;
	printf("Insert a=");
	scanf("%d", &a);
	b = (float)(separator(a, 4) * separator(a, 3)) / (float)(separator(a, 2) * separator(a, 1));
	printf("%f", b);
	return 0;
}