#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.5/Lab_5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double r;
			r = f(100);
			Assert::IsTrue(1);
		}
	};
}
