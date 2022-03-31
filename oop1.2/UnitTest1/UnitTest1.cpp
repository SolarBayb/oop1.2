#include "pch.h"
#include "CppUnitTest.h"
#include "../oop1.2/date.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			date a;
			a.set_day(4);
			Assert::AreEqual(a.get_day() ,4);
		}
	};
}
