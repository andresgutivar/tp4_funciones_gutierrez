#include <stdio.h>
#include <stdlib.h>

float calcular(float num);
int main() {
	float num;
	
	printf("ingrese numero: ");
	scanf("%f",& num);
	
	printf("la octava parte de tu numero es: %.2f",calcular(num));
	return 0;
}

float calcular(float num)
{
	float r;
	r=num/8;
	return r;

}
