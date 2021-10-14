#include "Input.h"

float IngresarFlotante(char mensaje[])
{
	float numeroIngresado;
	printf("%s", mensaje);
	scanf("%f", &numeroIngresado);

	return numeroIngresado;
}
int IngresarEntero(char mensaje[])
{
	int numeroIngresado;
	printf("%s", mensaje);
	scanf("%d", &numeroIngresado);

	return numeroIngresado;
}
int InsertarPoscion(char mensaje[], int numeroIngresado)
{
	int i =0;
	printf("%s", mensaje);
	//scanf("%d", i+1);
	return i+1;
}

int getString(char cadena[], char mensaje[], int tam)
{
	char auxiliarString[1000];
	int retorno;
	retorno = 0;
	if (cadena != NULL && mensaje != NULL)
	{
		retorno = 1;
		printf("%s",mensaje);
		fflush(stdin);
		scanf("%[^\n]", auxiliarString);

		while (strlen(auxiliarString) > tam)
		{
			printf("Reingrese: ");
			fflush(stdin);
			scanf("%[^\n]", auxiliarString);
		}
		strcpy(cadena, auxiliarString);
	}
	return retorno;
}
