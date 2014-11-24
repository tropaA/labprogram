#include <math.h>
#include <stdio.h>

int summator(int a)
{
	int ret=0;
	int result = a;
	for(int i=0; i < 4; i++)
	{
		ret+= result%10;
		result = floor((float)(result/10 ));
	}
	return ret;
}

int main()
{
	int n = 0;
	float b;
	printf("Insert n=");
	scanf("%d", &n);

	for(int i = 10; i <= n; i++)
	{
		if(i == summator(i)^3){
			printf("%d\n", i);
		}
	}
	return 0;
}