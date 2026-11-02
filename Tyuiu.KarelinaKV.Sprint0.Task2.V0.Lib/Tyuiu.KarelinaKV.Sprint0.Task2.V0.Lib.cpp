// Tyuiu.KarelinaKV.Sprint0.Task2.V0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service :public ISprint0Task2V0

{
	// Inherited via ISprint0Task2V0
	virtual int Add(int a, int b) override
	{
		return a + b; //решение
	}

	// Inherited via ISprint0Task2V1
};
