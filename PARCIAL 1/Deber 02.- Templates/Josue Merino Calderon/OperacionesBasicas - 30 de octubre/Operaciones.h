#pragma once
#include "Datos.h"
template <typename T>
class Operaciones
{
public:
	T suma(Datos<T>&);
	T resta(Datos<T>&);
	T multiplicacion(Datos<T>&);
	T division(Datos<T>&);
	Operaciones();
	~Operaciones();
};
