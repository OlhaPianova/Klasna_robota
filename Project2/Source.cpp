#include<iostream>
#include<string>
#include "phone book.h"
using namespace std;

int main() {
	int action = 0;
	do {
		cout << "\tMENU:" << endl;
		cout << "1. Add new contact: " << endl;
		cout << "2. Show all contacts" << endl;
		cout << "3. Exit" << endl;
		cout << "Select action: " << endl;
		cin >> action;
		switch (action) {
		case 1: {
			addNewContact();
		}break;
		case 2: {
			cout << "List all contacts: " << endl;
			showAllContact();
		}break;
		case 3: {
			cout << "Bye-Bye!" << endl;
		}break;
		default: {
			cout << "Please select action 1-3" << endl;
		}
		}

	} while (true);


	system("pause");
	return 0;

}