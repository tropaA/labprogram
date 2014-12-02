//Найти все целые числа из диапазона [10, n], куб суммы цифр которых равен самому числу. Например, 512=(5+1+2)3=83
#include <math.h>
#include <stdio.h>

//функция нахождения суммы цифр числа
int summator(int a)
{
	int result=0;
	int c = a;
	for(int i=0; c != 0; i++)
	{
		result+= c%10;
		c = floor((float)(c/10 ));
	}
	return result;
}

int main()
{
	int n;//входная переменная
	printf("Insert n=");
	scanf("%d", &n);
	if(n < 10) return 0;

	for(int i = 10; i <= n; i++)
	{
		if(i == summator(i)^3){
			printf("%d\n", i);
		}
	}
	return 0;
}