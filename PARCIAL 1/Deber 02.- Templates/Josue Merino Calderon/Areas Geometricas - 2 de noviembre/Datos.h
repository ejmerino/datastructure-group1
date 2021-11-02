#pragma once
#include <string>
#include <iostream>

template <typename J>
class Datos {
private:
	J lado1;
	J lado2;
	J radio;
public:
	Datos();
	~Datos();
	void set_lado1(J);
	J get_lado1();
	void set_lado2(J);
	J get_lado2();
	void set_radio(J);
	J get_radio();
};
