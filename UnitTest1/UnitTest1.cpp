#include "pch.h"
#include "CppUnitTest.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(getPerimeter_Functionality)
		{
			//This is testing the getPerimeter function using length = 5, width = 10. 
			//Perimeter = 2*(length + width)
			int result = 0;
			int length = 5, width = 10;
			result = getPerimeter(&length,&width);
			Assert::AreEqual(30, result);

		}

		TEST_METHOD(getArea_Functionality)
		{
			//This is testing the getArea function using length = 3, width = 10
			//Area = length * width
			int length = 3, width = 10;
			int result = 0;
			result = getArea(&length,&width);
			Assert::AreEqual(30, result);

		}

		TEST_METHOD(setLength_Functionality_1)
		{
			//This is testing the setLength function to allow only integers from 1 - 99, inclusive, for length

			//using input = 15
			int input1 = 15;
			int length1 = 0;
			setLength(input1, &length1);
			Assert::AreEqual(input1, length1);
		}
		
		TEST_METHOD(setLength_Functionality_2)
		{
			//This is testing the setLength function to allow only integers from 1 - 99, inclusive, for length
			//using input = 56

			int input2 = 56;
			int length2 = 0;
			setLength(input2, &length2);
			Assert::AreEqual(input2, length2);
		}

		TEST_METHOD(setLength_Functionality_3)
		{
			//This is testing the setLength function to allow only integers from 1 - 99, inclusive, for length
			//using input = 25

			int input3 = 25;
			int length3 = 0;
			setLength(input3, &length3);
			Assert::AreEqual(input3, length3);
		}

		TEST_METHOD(setWitdh_Functionality_1)
		{
			//This is testing the setWidth function to allow only integers from 1 to 99, inclusive, for width

			int input1 = 75;
			int width1 = 0;
			setWidth(input1, &width1);
			Assert::AreEqual(input1, width1);

		}

		TEST_METHOD(setWitdh_Functionality_2)
		{
			//This is testing the setWidth function to allow only integers from 1 to 99, inclusive, for width

			int input2 = 35;
			int width2 = 0;
			setWidth(input2, &width2);
			Assert::AreEqual(input2, width2);

		}
		TEST_METHOD(setWitdh_Functionality_3)
		{
			//This is testing the setWidth function to allow only integers from 1 to 99, inclusive, for width

			int input3 = 23;
			int width3 = 0;
			setWidth(input3, &width3);
			Assert::AreEqual(input3, width3);

		}
		
	};
}
