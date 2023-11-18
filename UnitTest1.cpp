#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6/FileName.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int size = 8;
			int arr[size] = {1, 6, -6, 3, 5, 11, 4, 0};
			
			int tested = findSumMinMax(arr, size);

			Assert::AreEqual(tested, -6 + 11);
		}
	};
}
