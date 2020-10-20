#include <iostream>
#include <Windows.h> // Sleep();
#include "LinkedList.h"
#include <cstdlib> // system("cls");

using namespace std;

int main()
{
	LinkedList TestList;
	///////////////////////////////////////////////Demonstratioin
	for (int digit = -5; digit <= 5; digit++)
	{
		system("cls");
		TestList.push_back(digit);
		TestList.print_to_console();
		Sleep(500);
	}
	for (int pos = 1; pos <= 5; pos++)
	{
		system("cls");
		TestList.pop_front();
		TestList.print_to_console();
		Sleep(500);
	}
	system("cls");
	TestList.insert(333,5);
	TestList.print_to_console();
	Sleep(500);

	system("cls");
	TestList.remove(5);
	TestList.print_to_console();
	Sleep(500);

	system("cls");
	TestList.set(5,5);
	TestList.print_to_console();
	Sleep(500);

	system("cls");
	TestList.reverse();
	TestList.print_to_console();
	Sleep(500);

	system("cls");
	TestList.reverse();
	TestList.print_to_console();
	Sleep(500);

	system("cls");
	TestList.clear();
	TestList.print_to_console();
	Sleep(500);

	//TestList.menu(TestList);///////////////////////////////// MENU
	return 0;
}