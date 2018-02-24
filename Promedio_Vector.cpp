/*
@autor:
 * Jhon velasco
 *Cesar villalobos
 * @ frediv0406
 * Estudiante: Ing.Sistemas UDI
*/
#include <iostream>
using namespace std;
int main(){
	int codigo,i;
	float notas[3],promedio;//Se declara el vector en el cual se almacenan las notas 
	cout<<"Digite el codigo del estudiante\n";
	cin>>codigo;
	for(i=0;i<=2;i++){//Se piden las notas del estudiante y se almacenan en el vector
	cout<<"\nDigite la nota "<<i+1<<" del estudiante\n";
	cin>>notas[i];
	}
	for(i=0;i<=2;i++){//Se leen las notas almacenadas en el vector y se suman a la variable promdio 
	promedio+=notas[i];
	}
	promedio/=3;//se calcula el promedio: Suma de las tres notas dividido en la cantidad de materias 
	cout<<"\nEstudiante "<<codigo;
	cout<<"\nLa nota de la materia es: "<<promedio;	
	
}
