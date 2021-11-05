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

template <typename T>
class Valores {
private:
	T val1;
	T val2;
	T resultado;
public:
	Valores(T, T);
	Valores(T);
	Valores() = default;
	~Valores();
	T& get_val1();
	void set_val1(T);
	T& get_val2();
	void set_val2(T);
	T& get_resultado();
	void set_resultado(T);
};