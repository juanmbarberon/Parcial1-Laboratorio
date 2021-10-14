/*
 * Input.h
 *
 *  Created on: 14 oct 2021
 *      Author: Compumar
 */

#ifndef INPUT_H_
#define INPUT_H_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


float IngresarFlotante(char mensaje[]);
int IngresarEntero(char mensaje[]);
int getString(char cadena[], char mensaje[], int tam);
int InsertarPoscion(char mensaje[], int numeroIngresado);


#endif /* INPUT_H_ */
