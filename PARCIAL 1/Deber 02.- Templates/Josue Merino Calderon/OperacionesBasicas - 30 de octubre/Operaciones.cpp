#include "Datos.h"
#include "Operaciones.h"
#include <iostream>

using namespace std;

template <typename T>
Operaciones<T>::Operaciones() {}

template <typename T>
T Operaciones<T>::suma(Datos<T>& calculation)
{
	return calculation.getNum1() + calculation.getNum2();
}
template <typename T>
T Operaciones<T>::resta(Datos<T>& calculation)
{
	return calculation.getNum1() - calculation.getNum2();
}

template <typename T>
T Operaciones<T>::multiplicacion(Datos<T>& calculation)
{
	return calculation.getNum1() * calculation.getNum2();
}


template <typename T>
T Operaciones<T>::division(Datos<T>& calculation)
{
	if (calculation.getNum2() == 0) {
		cout << "No se puede dividir " << endl;
	}
	else
		return calculation.getNum1() / calculation.getNum2();
}

template <typename T>
Operaciones<T>::~Operaciones()
{
	// TODO : implement
}