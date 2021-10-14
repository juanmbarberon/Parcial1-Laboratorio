/*
 ============================================================================

 ============================================================================
 */
#include "Funciones.h"
#include "Input.h"
#define FULL 1
#define EMPTY 0
#define TAM 3

int main(void) {
		setbuf (stdout, NULL);
		    eCliente listaClientes[TAM];
		    int retornoFuncion;
		    int opcion;

		    InicializarListado (listaClientes, TAM);

		    do{

		    printf("1. Alta cliente\n");
		    printf("2. Modificar Cliente\n");
		    printf("3. Baja cliente\n");
		    printf("4. Crear Pedido recoleccion\n");
		    printf("5. Procesar residuos\n");
		    printf("6. Imprimir clientes\n");
		    printf("7. Imprimir pedido pendientes \n");
		    printf("8. Imprimir pedido procesados \n");
		    printf("9. Pedidos por localidad pendientes \n");
		    printf("10. Q kilos PP reciclado promedio por cliente \n");

		    opcion = IngresarEntero("Elija una opcion \n");

		  switch(opcion){
		        case 1:
		        CargarCliente(listaClientes, TAM);
		        break;
		        case 2:
		        retornoFuncion=ModificarDireccionLocalidaCliente(listaClientes, TAM);
		        if(retornoFuncion==1){
		            printf("El cliente se modifico\n");
		        }
		        else{
		            printf("No se encontro cliente");
		        }
		        break;
		        case 3:
		         retornoFuncion=DarBajaCliente(listaClientes, TAM);
		        if(retornoFuncion==1)
		        {
		            printf("El cliente se dio de baja.\n");
		        }
		        else
		        {
		            printf("no se pudo dar de baja el cliente.\n");
		        }
		            break;
		      /*
		        case 4:
		        retornoFuncion = ModificarProductoGuardado(listaProductos,TAM);
				if(retornoFuncion==1)
		        {
		            printf("El producto se modifico Correctamente.\n");
		        }
		        else
		        {
		            printf("No se pudo modificar el producto con exito.\n");
		        }

		        break;

		        case 5:
		               OrdenarProductoPorPrecio(listaProductos,TAM);
		               printf("Se ordeno Correctamente\n");

		        break;*/
		         case 6:
		              MostrarListadoClientes(listaClientes, TAM);
		              break;
		        /*
		        case 7:
		               retornoFuncion = ListadoProductosIphone(listaProductos, TAM);
		               if(retornoFuncion == TAMAL)
		               {
		                   printf("No se encontraron Iphone de EEUU\n");
		               }
		        break;*/

		    }

		}while(opcion!=10);

		return EXIT_SUCCESS;

	}
