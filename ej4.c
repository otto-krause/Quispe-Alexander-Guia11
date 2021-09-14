#include <stdio.h>
void aryfuer(float P){
	printf("La presion sobre la superficie es: %.2fPa",P);
}
int main()
{
	float F,A,P;
	printf ("Ingrese la fuerza y el area\n");
	printf("Fuerza:"); scanf("%f",&F);
	printf("Area:"); scanf("%f",&A);
	P=F/A;
	aryfuer(P);
	return 0;
}
