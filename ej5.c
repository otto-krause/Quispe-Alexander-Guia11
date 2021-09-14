#include <stdio.h>
void resis(int r0,int r1, int r2, int r3, int r4, int rt){
	rt=r0+r1+r2+r3+r4;
	printf("R1:%i R2:%i R3:%i R4:%i R5:%i RT:%i ",r0,r1,r2,r3,r4,rt);
}
	
int main()
{
	int r0,r1,r2,r3,r4,rt=0;
	printf ("Ingrese 5 resistencias\n");
	printf ("Resistencia 1:"); scanf ("%i",&r0);
	printf ("Resistencia 2:"); scanf ("%i",&r1);
	printf ("Resistencia 3:"); scanf ("%i",&r2);
	printf ("Resistencia 4:"); scanf ("%i",&r3);
	printf ("Resistencia 5:"); scanf ("%i",&r4);
	resis(r0,r1,r2,r3,r4,rt);
    return 0;
}
	
