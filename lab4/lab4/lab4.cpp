#include <math.h>
#include <stdio.h>

//функция нахождения первого элеметна
int elementA(int n)
{
	int summa = 0;
	for(int i = 1; i <= n; i++){
		summa+= (2*i +1);
	}
	return summa;
}

//функция нахождения второго элеметна
int elementB(int n)
{
	int summa = 0;
	for(int i = 1; i <= n; i++){
		summa+= (2*i);
	}
	return summa;
}

int main()
{
	int n;
	float x;
	float summa = 0;

	//получаем значения
	printf("Insert n=");
	scanf("%d", &n);
	printf("Insert x=");
	scanf("%f", &x);
	if(x > 1 || x < -1) return 0;//проверяем условия ограничения

	//считаем
	for(int i = 1; i <= n; i++){
		summa+= ( pow(x,i) * ((float)elementA(i)/(float)elementB(i) ) * pow((float)-1,i) );
	}
	
	//выводим результат
	printf("%f", summa);
	return 0;
}