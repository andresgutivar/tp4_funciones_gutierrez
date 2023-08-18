#include <stdio.h>
#include <stdlib.h>
float num1 ()
{
	float a;
	printf("ingrese el valor del primer numero:");
	scanf("%f",& a);
	return a;
	
}

float num2 ()
{
	float b;
	printf("ingrese el valor del segundo numero:");
	scanf("%f",& b);
	return b;
	
}

int main() {

	
	printf("el primer valor ingresado es : %.2f \nel segundo valor ingresado es %.2f:\n",num1(), num2());



	return 0;
}

