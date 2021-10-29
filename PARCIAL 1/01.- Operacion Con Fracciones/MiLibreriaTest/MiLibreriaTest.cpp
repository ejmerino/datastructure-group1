#include "pch.h"
#include "CppUnitTest.h"
#include "../Code/Operations.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace MiLibreriaTest
{
	TEST_CLASS(MiLibreriaTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double resultado = Operations.fraccion_result(4 / 5, 6 / 7);
			/*float num1 = 1;
			float den1 = 2;
			float num2 = 3;
			float den2 = 4;
			float resultadoEsperado = 5 / 4;

			float result = ((calculation.get_num1() * calculation.get_den2()) + (calculation.get_num2() * calculation.get_den1())) / (calculation.get_den1() + calculation.get_den2());
			*/
			Assert.AreEqual(58/35, resultado);
			

		}
		}
	}
}
