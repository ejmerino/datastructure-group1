/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Operacion con Fracciones
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 28/10/2021
   Fecha de modificación: 28/10/2021
*/

#pragma once
#include "Data.h"
/**
* this class defines objects that contain data
*
* @version: 28/10/2021
*/
template <typename T>
class Operations {
public:
	Operations();
	~Operations();
	/**
	* @brief Function to add two numbers
	*
	* @return the add
	*/
	T fraccion_sup(Data<T>&);	
	/**
	* @brief Function to add two numbers
	*
	* @return the add
	*/
	T fraccion_inf(Data<T>&);
};
