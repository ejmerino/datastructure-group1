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

#include "Operaciones.h"
#include "Valores.h"
#include <stdlib.h>

template <typename T>
Operaciones<T>::Operaciones() {}

template <typename T>
Operaciones<T>::~Operaciones() {}

template <typename T>
Valores<T>& Operaciones<T>::operator +(Valores<T>& dat) {
	return *(new Valores<T>(dat.get_val1() + dat.get_val2()));
}

template <typename T>
Valores<T>& Operaciones<T>::operator -(Valores<T>& dat) {
	return *(new Valores<T>(dat.get_val1() - dat.get_val2()));
}

template <typename T>
Valores<T>& Operaciones<T>::operator *(Valores<T>& dat) {
	return *(new Valores<T>(dat.get_val1() * dat.get_val2()));
}

template <typename T>
Valores<T>& Operaciones<T>::operator /(Valores<T>& dat) {
	return *(new Valores<T>(dat.get_val1() / dat.get_val2()));
}

