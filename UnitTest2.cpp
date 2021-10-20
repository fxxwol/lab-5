#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-5.2/Lab-5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a = 1;
			A(0., 1., a);
			Assert::AreEqual(0., a);

		}
	};
}
