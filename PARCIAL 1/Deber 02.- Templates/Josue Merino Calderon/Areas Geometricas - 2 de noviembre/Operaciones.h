#pragma once
#include <iostream>
#include <string>
#include "Datos.h"

template <typename J>
class Operaciones {
private:
public:
	~Operaciones();
	Operaciones();
	J area_cuadrado(Datos<J>&);
	J area_rectangulo(Datos<J>&);
	J area_triangulo(Datos<J>&);
	J area_circulo(Datos<J>&);
};

