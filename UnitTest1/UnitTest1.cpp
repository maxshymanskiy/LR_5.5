#include "pch.h"
#include "CppUnitTest.h"
#include "../LR_05_5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

double nextTerm(double a_n_minus_1);

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double input = 1.0;
			double expectedOutput = (1.0 / 3.0) * (2 * input + (8.0 / (input * input)));

			double actualOutput = nextTerm(input);

			Assert::AreEqual(expectedOutput, actualOutput, 0.00001);

		}
	};
}
