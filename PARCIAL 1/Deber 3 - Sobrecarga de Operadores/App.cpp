/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Sobrecarga de Operadores
   Autor:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear

   Fecha de creación: 04/11/2021
   Fecha de modificación: 04/11/2021
*/

#pragma warning(disable : 4996)
#include "Operaciones.cpp"
#include "Valores.cpp"
#include "Validation.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv) {
	float val1, val2;
	Validation validation;
	char option{ };
	char message[] = "Ingrese el primer numero: ";
	char message2[] = "Ingrese el segundo numero: ";
	char aux_val1[20];
	char aux_val2[20];
	strcpy(aux_val1, validation.only_floats(message));
	val1 = atof(aux_val1);
	cout << endl;
	strcpy(aux_val2, validation.only_floats(message2));
	val2 = atof(aux_val2);
	cout << endl;
	Valores<float> pareja(val1, val2);
	Operaciones<float> _operaciones;
	cout << endl;
	cout << "Suma: " << _operaciones.operator+(pareja).get_resultado() <<endl;
	cout << "Resta: " << _operaciones.operator-(pareja).get_resultado() << endl;
	cout << "Multiplicacion: " << _operaciones.operator*(pareja).get_resultado() << endl;
	cout << "Division: " << _operaciones.operator/(pareja).get_resultado() << endl;
	return 0;
}