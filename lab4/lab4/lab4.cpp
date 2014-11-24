#include <math.h>
#include <stdio.h>

int elementA(int n)
{
	int summa = 0;
	for(int i = 1; i <= n; i++){
		summa+= (2*i +1);
	}
	return summa;
}

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

	printf("Insert n=");
	scanf("%d", &n);
	printf("Insert x=");
	scanf("%f", &x);
	if(x > 1) return 0;

	for(int i = 1; i <= n; i++){
		summa+= ( pow(x,i) * ((float)elementA(i)/(float)elementB(i) ) * pow((float)-1,i) );
	}
	
	printf("%f", summa);
	return 0;
}