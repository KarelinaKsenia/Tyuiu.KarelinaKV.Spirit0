#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KarelinaKV.Sprint0.Task2.V0.Lib/Tyuiu.KarelinaKV.Sprint0.Task2.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest6
{
	TEST_CLASS(UnitTest6)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// Init
			ISprint0Task2V0* service = new Service();
			int a = 2;
			int b = 5;
			int c;

			
			//run
			c = service->Add(a, b);

			//Valid
			Assert::AreEqual(7, c);
		}
	};
}
