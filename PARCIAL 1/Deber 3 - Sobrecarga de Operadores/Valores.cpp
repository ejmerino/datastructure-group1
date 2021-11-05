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

#include "Valores.h"
#include <iostream>

using namespace std;

template <typename T>
Valores<T>::Valores(T _val1, T _val2){
	this->val1 = _val1;
	this->val2 = _val2;
}

template <typename T>
Valores<T>::Valores(T _resultado) {
	this->resultado = _resultado;
}

template <typename T>
Valores<T>::~Valores() {}

template <typename T>
void Valores<T>::set_val1(T val1_) {
	this->val1 = val1_;
}

template <typename T>
T& Valores<T>::get_val1() {
	return val1;
}

template <typename T>
void Valores<T>::set_val2(T val2_) {
	this->val2 = val2_;
}

template <typename T>
T& Valores<T>::get_val2() {
	return val2;
}

template <typename T>
void Valores<T>::set_resultado(T resultado_) {
	this->resultado = resultado_;
}

template <typename T>
T& Valores<T>::get_resultado() {
	return resultado;
}
