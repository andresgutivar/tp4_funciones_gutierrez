#include <stdio.h>
#include <stdlib.h>
float pormuj (int total, int hombres, int mujeres);
float porhom (int total, int hombres, int mujeres);
int main() {
	int total,hombres,mujeres;
	printf("ingrese total de curriculums enviados: ");
	scanf("%d", & total);
	
	printf("ingrese total de hombres con curriculums enviados: ");
	scanf("%d", & hombres);
	
	mujeres=total-hombres;
	pormuj(total,hombres,mujeres);
	porhom(total,hombres,mujeres);
	printf("tu porcentaje de mujeres es: %.2f\n\ntu porcentaje de hombres es: %.2f\n",pormuj(total,hombres,mujeres),porhom(total,hombres,mujeres));
}

float porhom (int total, int hombres, int mujeres)
{
	float porh=0;	
	porh=(hombres*100)/total;
	return porh;
}

float pormuj (int total, int hombres, int mujeres)
{
float porm;
porm=(mujeres*100)/total;

return porm;
}


