#include <stdio.h>
void octava(float n, float oct){
	oct=n/8;
	printf("La octava parte es: %.2f",oct);
}
int main(){
	float n,oct;
	printf("Ingrese un numero:");
	scanf("%f",&n);
	octava(n,oct);
	return 0;
}
