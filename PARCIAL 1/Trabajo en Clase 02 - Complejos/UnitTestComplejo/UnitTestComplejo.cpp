#include <iostream>
#include "pch.h"
#include "CppUnitTest.h"
#include "../Complejo/Complejo.h"
#include "../Complejo/Complejo.cpp"
#include "../Complejo/Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
//using Complejo;
using namespace std;
namespace UnitTestComplejo
{
	TEST_CLASS(UnitTestComplejo)
	{
	public:
		TEST_METHOD(TestMethodSuma)
		{
			Complejo<int> A(1, 3), B(2, 4);
			Complejo<int> C;
			int resultadoEsperado = 0;
			Assert::AreEqual(resultadoEsperado, C.getReal() + C.getImg());

		}

		TEST_METHOD(TestMethodResta)
		{
			Complejo<int> A(1, 3), B(2, 4);
			Complejo<int> C;
			int resultadoEsperado = 0;
			Assert::AreEqual(resultadoEsperado, C.getReal() + C.getImg());

		}
	};
}
