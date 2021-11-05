/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Sobrecarga de Operadores
   Autor:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear

   Fecha de creación: 04/11/2021
   Fecha de modificación: 05/11/2021
*/

#pragma once

class Operaciones {
public:
	Operaciones();
	~Operaciones();
	int operator++(int);
	int operator--(int);
	int operator<<(int);
	double operator<<(double);
};