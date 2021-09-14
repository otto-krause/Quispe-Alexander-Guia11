#include <stdio.h>
void peryar(int P, int A)
{
	printf("El perimetro es: %dcm",P ); printf(" Y el Area es: %dcm",A );
}
int main()
{
	int num0,num1,P,A;
	printf("Ingrese un lado en cm: ");
	scanf("%d",&num0);
	printf("Ingrese un lado distinto en cm : ");
	scanf("%d",&num1);
	P=2*num0+2*num1;
	A=num0*num1;
	peryar(P, A);
	return 0;
}
