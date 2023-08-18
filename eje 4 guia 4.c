#include <stdio.h>
#include <stdlib.h>
float presion(float f, float a);
int main() {
	float f,a;
	printf("ingrese fuerza: ");
	scanf("%f",&f);
	printf("ingrese area: ");
	scanf("%f",&a);
	
	presion(f,a);
	printf(" tu presion es de %.2f",presion(f,a));
	return 0;
}

float presion(float f, float a)
{
	float p;
	p=f/a;
	return p;

}
