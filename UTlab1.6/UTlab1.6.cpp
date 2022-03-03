#include "pch.h"
#include "CppUnitTest.h"
#include "../RightAngled.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTlab16
{
	TEST_CLASS(UTlab16)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			RightAngled test1;
			bool a;
			double x = 3.0;

			a = test1.Init(x, x);

			Assert::AreEqual(a, true);
			
		}
	};
}
