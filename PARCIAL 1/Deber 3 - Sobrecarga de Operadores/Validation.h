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

#pragma once
#include <iostream>
#include <conio.h>

/**
* @brief Function to validate float entries
*
*/

class Validation {
public:
	Validation() = default;
	char* only_floats(char*);
	~Validation();
};
