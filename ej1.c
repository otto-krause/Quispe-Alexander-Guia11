#include <stdio.h>
void numeros(int num0, int num1){
    printf("%d\n%d", num0, num1);
}
int main()
{
  int num0,num1;
  printf ("Ingrese 2 numeros:\n");
  printf ("numero 1:");scanf("%d",&num0);
  printf ("numero 2:");scanf("%d",&num1);
   numeros(num0,num1);
   return 0;
}
