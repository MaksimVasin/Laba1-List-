#include "LinkedList.h"
#include <iostream>
#include <Windows.h>

#define AddBack 1
#define AddFront 2
#define DelBack 3
#define	DelFrond 4
#define InsertByIndex 5
#define GettinByIndex 6
#define DelByIndex 7
#define Clean 8
#define Set 9
#define Reverse 10
#define Exit 11

using namespace std;
bool ExitP = true;

void LinkedList::menu(LinkedList List)
{
	int chouse, digit;
	size_t position;

	while (ExitP)
	{
		system("cls");
		List.print_to_console();

		cout << endl << "1. Add back";
		cout << endl << "2. Add front";
		cout << endl << "3. Del back";
		cout << endl << "4. Del front";
		cout << endl << "5. Insert Element by Index";
		cout << endl << "6. Gettin by Index";
		cout << endl << "7. Del by Index";
		cout << endl << "8. Clear";
		cout << endl << "9. Set";
		cout << endl << "10. Reverse";
		cout << endl << "11. Exit";
		cout << endl;

		cin >> chouse;

		if ((chouse == AddBack) || (chouse == AddFront) || (chouse == InsertByIndex) || (chouse == Set))
		{
			cout << endl << "Digit: ";
			cin >> digit;
		}

		switch (chouse)
		{
		case AddBack:
			List.push_back(digit);
			break;

		case AddFront:
			List.push_front(digit);
			break;

		case DelBack:
			List.pop_back();
			break;

		case DelFrond:
			List.pop_front();
			break;

		case InsertByIndex:
			cout << endl << "Position: ";
			cin >> position;
			List.insert(digit, position);
			break;

		case GettinByIndex:
			cout << endl << "Position: ";
			cin >> position;
			cout << endl << "Element by Index " << position << " : " << List.at(position);
			Sleep(3000);
			break;

		case DelByIndex:
			cout << endl << "Position: ";
			cin >> position;
			List.remove(position);
			break;

		case Clean:
			List.clear();
			break;

		case Set:
			cout << endl << "Position: ";
			cin >> position;
			List.set(digit, position);
			break;

		case Reverse:
			List.reverse();
			break;

		case Exit:
			ExitP = false;
			break;
		}
	}
}