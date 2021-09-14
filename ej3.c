#include <stdio.h>
void porc(float PH, float PM)
{
	printf("El porcentaje de hombres es %.2f ",PH); printf(" y el de mujeres %.2f",PM);
}
int main()
{
	float M,H,PH,T,PM;
	printf("ingrese cantidad de curriculum de hombres: ");
	scanf("%f",&H);
	printf("ingrese cantidad de curriculum de mujeres: ");
	scanf("%f",&M);
	T=H+M;
	PH=H*100/T;
	PM=100-PH;
	porc(PH,PM);
	return 0;
}
