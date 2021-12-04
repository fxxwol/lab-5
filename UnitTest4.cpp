#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-5.4/Lab-5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double  m = S0(0,0);

			Assert::AreEqual(0.4, m);

		}
	};
}
