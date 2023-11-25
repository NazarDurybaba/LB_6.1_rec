#include "pch.h"
#include "CppUnitTest.h"
#include "../LB_6.1_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1 
{
    TEST_CLASS(UnitTest1) 
    {
    public:

        TEST_METHOD(TestCountNegativeOrOdd)
        {
            const int size = 5;
            int arr[size] = { -1, -2, 3, 4, 5 };
            Assert::AreEqual(4, countNegativeOrOdd(arr, size));
        }

        TEST_METHOD(TestSumNegativeOrOdd)
        {
            const int size = 5;
            int arr[size] = { -1, -2, 3, 4, 5 };
            Assert::AreEqual(5, sumNegativeOrOdd(arr, size));
        }

        TEST_METHOD(TestReplaceNegativeOrOddWithZero)
        {
            const int size = 5;
            int arr[size] = { -1, -2, 3, 4, 5 };
            replaceNegativeOrOddWithZero(arr, size);
            int expected[size] = { 0, 0, 0, 4, 0 };
            for (int i = 0; i < size; i++) {
                Assert::AreEqual(expected[i], arr[i]);
            }
        }
    };
}
