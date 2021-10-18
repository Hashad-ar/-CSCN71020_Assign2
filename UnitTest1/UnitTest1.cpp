#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(GettingPerimeterTest)
		{
			/* Testing if the function will output the correct result using 50*2 + 50*2 = 200 */
			int Result;
			int length = 50;
			int width = 50;
			Result = getPerimeter(&length, &width);
			Assert::AreEqual(200, Result);
		}
		TEST_METHOD(GettingAreaTest)
		{
			/* Testing if the function will output the correct result using 50 * 50 = 2500 */
			int Result;
			int length = 50;
			int width = 50;
			Result = getArea(&length, &width);
			Assert::AreEqual(2500, Result);
		}

	};

	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(SettingLengthTest_With_0)
		{
			/* Testing the function where 0 should be an incorrect input (due to accepted range being from 1 to 99) so 1 should be the output */
			int length = 1;
			setLength(0, &length);
			Assert::AreEqual(1, length);
		}
		TEST_METHOD(SettingLengthTest_With_33)
		{
			/* Testing the function where 33 should be a correct input (due to accepted range being from 1 to 99) so 33 should be the output */
			int length = 1;
			setLength(33, &length);
			Assert::AreEqual(33, length);
		}
		TEST_METHOD(SettingLengthTest_With_100)
		{
			/* Testing the function where 100 should be an incorrect input (due to accepted range being from 1 to 99) so 1 should be the output */
			int length = 1;
			setLength(100, &length);
			Assert::AreEqual(1, length);
		}



		TEST_METHOD(SettingWidthTest_With_0)
		{
			/* Testing the function where 0 should be an incorrect input (due to accepted range being from 1 to 99) so 1 should be the output */
			int width = 1;
			setWidth(0, &width);
			Assert::AreEqual(1, width);
		}
		TEST_METHOD(SettingWidthTest_With_33)
		{
			/* Testing the function where 33 should be a correct input (due to accepted range being from 1 to 99) so 33 should be the output */
			int width = 1;
			setWidth(33, &width);
			Assert::AreEqual(33, width);
		}
		TEST_METHOD(SettingWidthTest_With_100)
		{
			/* Testing the function where 100 is an incorrect input (due to accepted range being from 1 to 99) so 1 should be the output */
			int width = 1;
			setWidth(100, &width);
			Assert::AreEqual(1, width);
		}
	};
}
