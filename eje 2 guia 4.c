#include <stdio.h>
#include <stdlib.h>

float area (float a, float b);
float perimetro (float a, float b);

int main ()
{
	float a,b;
	printf("ingrese alto: ");
	scanf("%f",&a);
	
	printf("ingrese ancho: ");
	scanf("%f",&b);
	
	area(a,b);
	perimetro(a,b);
	
	printf("tu area es: %.2f \ntu perimetro es de:%.2f",area(a,b),perimetro(a,b));
}


float area (float a, float b)
{
	float are;
	are=a*b;
	return are;
}

float perimetro (float a, float b)
{
	float peri;
	peri=2*a+2*b;
	
	return peri;
}

