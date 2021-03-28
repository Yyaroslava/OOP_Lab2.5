#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP Lab2.5/Triad.h"
#include "../OOP Lab2.5/Triad.cpp"
#include "../OOP Lab2.5/Date.h"
#include "../OOP Lab2.5/Date.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest25
{
	TEST_CLASS(UnitTest25)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad t1(3, 2, 1), t2(1, 2, 3);
			Assert::AreEqual(t1 >= t2, true);
			Date d1(t1), d2(t2);
			Assert::AreEqual(d1 == d2, false);

		}
	};
}
