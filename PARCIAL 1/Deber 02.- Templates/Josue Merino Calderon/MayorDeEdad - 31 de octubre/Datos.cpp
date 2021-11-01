#include "Datos.h"
#include <iostream>

using namespace std;

template <typename T>
Datos<T>::Datos() {

}

template <typename T>
Datos<T>::~Datos() {

}

template <typename T>
void Datos<T>::set_nombre(T nom) {
	this->nombre = nom;
}

template <typename T>
T Datos<T>::get_nombre() {
	return nombre;
}

template <typename T>
void Datos<T>::set_edad(T _edad) {
	this->edad = _edad;
}

template <typename T>
T Datos<T>::get_edad() {
	return edad;
}

template <typename T>
void Datos<T>::to_string1() {	
	cout << endl << Datos<T>::get_nombre() << "  usted es mayor de edad " << endl;
}

template <typename T>
void Datos<T>::to_string2() {
	cout << endl << Datos<T>::get_nombre() << "  usted es mayor de edad " << endl;
}