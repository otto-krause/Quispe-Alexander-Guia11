#include <stdio.h>
void comp(int num0,int num1)
{
	if (num0>num1){
		printf ("%d es mayor que %d",num0,num1);}
	else{
		if (num0<num1){
			printf ("%d es mayor que %d",num1,num0);}
		else{
			printf ("%d y %d son iguales",num0,num1);}
	}
}
int main()
{
	int num0,num1;
	printf ("Ingrese 2 numeros\n");
	printf ("numero 1:"); scanf ("%d",&num0);
	printf ("numero 2:"); scanf ("%d",&num1);
	comp(num0,num1);
	return 0;
}
