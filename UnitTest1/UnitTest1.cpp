#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-5.1/Lab-5.1.cpp"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			const double x = 1;
			const double y = 0;
			t = h(x, y);
			Assert::AreEqual(t, -1.);
		}
	};
}
