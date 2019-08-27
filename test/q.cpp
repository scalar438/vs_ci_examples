#include "CppUnitTest.h"
#include "q.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace Testing
{

TEST_CLASS(Test)
{

	TEST_METHOD(test1)
	{
		Assert::AreEqual(sum(1, 2), 3);
	}

	TEST_METHOD(test2)
	{
		Assert::AreEqual(mul(2, 3), 6);
	}

	TEST_METHOD(test3)
	{
		Assert::AreEqual(mul(sum(2, 2), 2), 8);
	}
};

}