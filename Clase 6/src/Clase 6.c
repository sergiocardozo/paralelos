#include <stdio.h>
#include <stdlib.h>
#define CANT_EL 4

int cargarsetdedatos(int* pLegajo, char* pSexo, int* pEdad, int* pNota1P, int* pNota2P,float* pPromedio, int limite);
int mostrarestudiante(int pLegajo, char pSexo, int pEdad, int pNota1P, int pNota2P,float pPromedio, int limite,);
int mostrarestudiantes(int* pLegajo, char* pSexo, int* pEdad, int* pNota1P, int* pNota2P,float* pPromedio, int limite,);
int ordenarlegajoestudiantes(int* pLegajo, char* pSexo, int* pEdad, int* pNota1P, int* pNota2P,float* pPromedio, int limite);
main(){
	int legajo [CANT_EL];
	char sexo [CANT_EL];
	int edad [CANT_EL];
	int nota1P[CANT_EL];
	int nota2P[CANT_EL];
	float promedio[CANT_EL];

	cargarsetdedatos(legajo, sexo, edad, nota1P, nota2P, promedio); //click derecho find inplementation
	//mostrar, ordenar y mostrar LEGAJO SOLO DIRECCION DE MEMORIA pLEGAJO DATOS EN MI VECTOR
	mostrarestudiante(legajo, sexo, edad, nota1P, nota2P, promedio);
	ordenarlegajoestudiantes(legajo, sexo, edad, nota1P, nota2P, promedio);
	mostrarestudiantes(legajo, sexo, edad, nota1P, nota2P, promedio);
return 0;
}

int cargarsetdedatos(int* pLegajo, char* pSexo, int* pEdad, int* pNota1P, int* pNota2P,float* pPromedio, int limite,){ // siempre pasar un limite cantidad de elementos
	int i;																												//plegajo direccion de memoria, parametro formales cuando estan en la declaracion, reales cuando pasa como valor en la funcion
	int buffer;
	for(i=0;i<limite;i++)
	{
		if(getInt(&buffer,"+Ingrese el legajo del alumno", "Error", 1, 100, 2) == 0)//buffer numero ingresado por el usuario valido entre rangos
		{
			pLegajo[i]=buffer; // validado todo ok
		}else
			{
			pLegajo[i]=0; //
			}
		printf("ingrese el sexo del alumno"); // getchar
		fflush(stdin);
		scanf("&c",&pSexo[i]);
		pPromedio[i] = (((float)pNota1P[i]+pNota2P[i])/2); // (float) casteo : 2 enteros devuelven un flotante
	}
	return 0;
}

int mostrarestudiante(int pLegajo, char pSexo, int pEdad, int pNota1P, int pNota2P,float pPromedio, int limite,){
	printf("\n %d		%c	%d	%d	%d	",pLegajo,pSexo		); //set de datos
return 0;
}
int mostrarestudiantes(int* pLegajo, char* pSexo, int* pEdad, int* pNota1P, int* pNota2P,float* pPromedio, int limite)
{
	int i;
	printf("\nlegajo   sexo		edad	nota1p	nota2p	promedio");
		for(i=0;i<limite;i++)//plegajo sub 0 muestra todos los valores del vector 0
		{
			mostrarestudiante(pLegajo[i], pSexo[i], pEdad[i], pNota1P[i], pNota2P[i], pPromedio[i]);
		}
		return 0;
}
int ordenarlegajoestudiantes(int* pLegajo, char* pSexo, int* pEdad, int* pNota1P, int* pNota2P,float* pPromedio, int limite){
	int i; //comparar i+1(vector incrementando) quien es mayor y quien es menor
	int aux;
	char auxS;
	float auxF;// un auxiliar para enteros, float, char
	int flag = -1;

	while(flag == -1){//obligado a hacer una iteracion de mas
		flag =0;
		for(i=0;i<limite;i++) // como 0 en el for para que ordene hasta que quede todo ordenado
		{
			if(pLegajo[i]>pLegajo[i+1])
			{
				aux = pLegajo[i];
				pLegajo[i] = pLegajo[i+1];
				pLegajo[i+1] = aux;

			//hacerlo para todos sexo edad con el auxiliar de int char o float correspondiente
				flag = -1;
			}
		}
	}
return 0;
}
