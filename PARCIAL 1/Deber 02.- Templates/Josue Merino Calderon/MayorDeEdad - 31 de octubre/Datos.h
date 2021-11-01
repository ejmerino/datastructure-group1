#pragma once
#include <string>

template <typename T>
class Datos {
private:
	T nombre;
	T edad;
public:
	Datos();
	~Datos();
	void set_nombre(T);
	T get_nombre();
	void set_edad(T);
	T get_edad();
	void to_string1();
	void to_string2();
};