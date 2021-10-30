#pragma once
#include <string>

template <typename T>
class Datos
{
public:
	Datos();
	~Datos();
	void setNum1(T);
	T getNum1();
	T getNum2();
	void setNum2(T);
	void to_string();

protected:
private:
	T num1;
	T num2;
};