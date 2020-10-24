#include <iostream>
#include <Windows.h> // Sleep();
#include "LinkedList.h"
#include <cstdlib> // system("cls");

using namespace std;

int main()
{
	LinkedList TestList;
	///////////////////////////////////////////////Demonstratioin
	for (int digit = 0; digit <= 5; digit++)
	{
		TestList.push_back(digit);

	}
	TestList.menu(TestList);///////////////////////////////// MENU
	return 0;
}