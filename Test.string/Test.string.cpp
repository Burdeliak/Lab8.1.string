#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab8.1.string/lab8.1.string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Teststring
{
	TEST_CLASS(Teststring)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str = "abc abc def abc";
			int result = Count(str);
			Assert::AreEqual(3, result, L"Повинно бути 3 входження 'abc'.");
		}
	};
}
