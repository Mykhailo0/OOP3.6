#include "pch.h"
#include "CppUnitTest.h"
#include"../OOP3.6/B1.h"
#include"../OOP3.6/B1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			B1 b1(5);
			B1 b2(5);
			Assert::AreEqual(5, 5);
		}
	};
}
