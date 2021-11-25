#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Misha\source\repos\lab 8.2\lab 8.2\lab 8.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char s[11] = "unit. test";
			InsertAfter(s, 0);
			char k[11] = "unit. Test";
			Assert::AreEqual(s, k);
		}
	};
}
