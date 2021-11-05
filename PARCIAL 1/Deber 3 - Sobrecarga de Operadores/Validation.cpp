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
#include "Validation.h"

char* Validation::only_floats(char* msj) {
	char dato[20];
	char c;
	int i = 0;
	printf("%s", msj);
	while ((c = getch()) != 13) {
		if ((c >= '0' && c <= '9') || c == 46) {
			printf("%c", c);
			dato[i++] = c;
		}
	}
	dato[i] = '\0';
	return dato;

}

Validation::~Validation() {}