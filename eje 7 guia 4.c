#include <stdio.h>
#include <stdlib.h>

float mayor (float num1, float num2);
int main() {
	float num1,num2;
	
	printf("ingrese numero 1: ");
	scanf("%f",& num1);
	
	printf("ingrese numero 2: ");
	scanf("%f",& num2);
	
	if (num1==num2)
	{
		printf("tu numeros son iguales");
		return 0;
	}
	else
	{
	printf("tu numeros mayor es %.2f", mayor(num1,num2));
	return 0;
	}
	
	return 0;
}

float mayor (float num1, float num2)
{

		if (num1>num2)
		{
			return num1;
			
		}
		else
		{
			if (num1<num2)
			return num2;
		}
	
	return 0;	
	
}
