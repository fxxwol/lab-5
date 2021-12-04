#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-5.3/Lab-5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = p(0);
			Assert::AreEqual(0.5, t);
		}
	};
}
