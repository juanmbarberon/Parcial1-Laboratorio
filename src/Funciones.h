



#ifndef FUNCIONES_H_
#define FUNCIONES_H_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FULL 1
#define EMPTY 0
#define TAM 3

typedef struct
{
  int idCliente;
  char empresa[100];
  int cuit;
  char direccion[100];
  char localidad[100];
  int isEmpty;


} eCliente;

void InicializarListado (eCliente lista[], int tam);
eCliente IngresarDatosCliente (); // se utiliza dentro de la funcion CargarCliente
int CargarCliente (eCliente lista[], int tam);
void MostrarListadoClientes (eCliente listado[], int tam); // opcion 6
void MostrarClientes (eCliente listado); // se utiliza para la funcion MostrarListadoClientes
int BuscarPrimerEspacioLibre (eCliente lista[], int tam); // se utiliza en CargarCliente
int ModificarDireccionLocalidaCliente(eCliente lista[], int tam);
int DarBajaCliente (eCliente lista[], int tam);

#endif /* FUNCIONES_H_ */
