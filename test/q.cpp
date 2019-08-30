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
		// This test must fail
		Assert::Fail();
	}

	TEST_METHOD(test3)
	{
	}
};

}