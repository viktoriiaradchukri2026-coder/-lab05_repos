#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba_05.0/Laba_05.0.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double expected = 0.0;
			double actual = g(0.0, 0.0); // викликаємо вашу функцію g(x, y)
			Assert::AreEqual(expected, actual, 0.00001);
		}
	};
}
