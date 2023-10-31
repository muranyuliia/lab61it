#include "pch.h"
#include "CppUnitTest.h"
#include "../lab61it/lab61it.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(TestCountAndSum)
        {
            // Ось приклад тесту для функції calculateCountAndSum
            const int size = 5;
            int arr[size] = { 3, 6, 14, 9, 21 };
            int count, sum;
            calculateCountAndSum(arr, size, count, sum);
            Assert::AreEqual(3, count);
            Assert::AreEqual(33, sum);
        }
        
    };
}