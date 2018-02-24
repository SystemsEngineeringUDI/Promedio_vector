/*
@autor:
 *Cesar villalobos
 * Jhon velasco
 * @ frediv0406
 * Estudiante: Ing.Sistemas UDI
*/

#include <stdio.h>

int main(){
	int codigo;
	float nota1,nota2,nota3,prom,suma;
	printf("Ingrese el codigo");
	scanf("%d",&codigo);
	printf("Ingrese la nota 1");
	scanf("%f",&nota1);
	printf("Ingrese la nota 2");
	scanf("%f",&nota2);
	printf("Ingrese la nota 3");
	scanf("%f",&nota3);
	suma=nota1+nota2+nota3;
	prom=suma/3;
	printf("El codigo del estudiante es: %d",codigo);
	printf("La nota promedio es: %f ",prom);
}
