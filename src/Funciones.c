#include "Funciones.h"

void InicializarListado (eCliente lista[], int tam)
{
  for (int i = 0; i < tam; i++)
    {
      lista[i].isEmpty = EMPTY;
    }
}

eCliente IngresarDatosCliente () // ok agregada
{
  eCliente cliente;
  cliente.idCliente = IngresarEntero("Ingresa el id del cliente: ");
  getString (cliente.empresa, "Ingresar nombre de la empresa del cliente: ", 100);
  cliente.cuit =IngresarEntero("Ingresar el CUIT: ");
  getString (cliente.direccion, "Ingresar la direccion del cliente: ", 100);
  getString (cliente.localidad, "Ingresar localidad del cliente: ", 100);
  cliente.isEmpty = FULL;

printf("El ID generado para el cliente es %d\n" , cliente.idCliente);

  return cliente;
}

//CARGA LOS DATOS EN UN ARRAY
int CargarCliente (eCliente lista[], int tam)
{
  int index = BuscarPrimerEspacioLibre (lista, tam);
  if (index != -1)
    {
      lista[index] = IngresarDatosCliente ();
    }
  return index;
}

void MostrarListadoClientes (eCliente listado[], int tam) // agregado
{
  int flagListaVacia = 0;
	printf("Id\tEmpresa\tcuit\tDireccion\tLocalidad\n");
	for (int i = 0; i < tam; i++)
	{
		if(listado[i].isEmpty == FULL){
			MostrarClientes(listado[i]);
		}else{
			if(flagListaVacia == 0){
				puts("No hay màs clientes.\n");
				flagListaVacia = 1;
			}

	}
	}
}
void MostrarClientes (eCliente listado)// agregada
{

  printf ("%2d %10s %10d %10s %10s\n", listado.idCliente,listado.empresa, listado.cuit, listado.direccion,listado.localidad);
}

int BuscarPrimerEspacioLibre (eCliente lista[], int tam)
{
  int i;
  int index;

  index = -1;
  for (i = 0; i < tam; i++)
    {
      if (lista[i].isEmpty == EMPTY)
	{
	  index = i;
	  break;
	}
    }
  return index;
}

/////////////// modificar clientes
int ModificarDireccionLocalidaCliente(eCliente lista[], int tam)
{
    int i;
    int clienteSeleccionado;
    char localidadCambiar[100];
    char direccionCambiar[100];
    int retorno;
    retorno = 0;

    clienteSeleccionado = IngresarEntero("Ingrese el ID del cliente a modificar: ");

    for(i=0;i<tam;i++)
    {
        if(lista[i].isEmpty==FULL&&lista[i].idCliente==clienteSeleccionado)
        {
            getString (direccionCambiar, "Ingresar la direccion nueva: ", 100);
            getString (localidadCambiar, "Ingresar localidad  nueva: ", 100);
            strcpy(lista[i].direccion, direccionCambiar);
            strcpy(lista[i].localidad, localidadCambiar);
            retorno = 1;
            break;
        }
    }

    return retorno;


}

//3_Baja de cliente: Se ingresa el ID del cliente. Luego se preguntará si se quiere confirmar la eliminación.

int DarBajaCliente (eCliente lista[], int tam)
{
  int i;
  int auxGuardaCliente = 0;
  int seleccionarCliente;
  MostrarListadoClientes (lista, tam);

  seleccionarCliente = IngresarEntero ("Ingrese el ID del cliente para dar de baja: ");

  for (i = 0; i < tam; i++)
    {
      if (lista[i].isEmpty == FULL && lista[i].idCliente == seleccionarCliente)
	{
	  lista[i].isEmpty = EMPTY;
	  auxGuardaCliente = 1;
	  break;
	}
    }
  return auxGuardaCliente;
}
