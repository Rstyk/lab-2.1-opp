#include "pch.h"
#include "CppUnitTest.h"
#include "../labb 2.1/Time.cpp"
#include "../labb 2.1/Time.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Time t(0, 0);
			Assert::AreEqual(t.GetFirst(), 0);
			Assert::AreEqual(t.GetSecond(), 0);
		}
	};
}
