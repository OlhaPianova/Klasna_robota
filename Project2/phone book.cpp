#include "phone book.h"
#include<iostream>
#include<list>
#include<fstream>
using namespace std;

#define CLEAR system("cls");
#define PAUSE system("pause");


list<Contact> contacts;
const string fileName = "Contacts.txt";
void init()
{
}

void addNewContact()
{
	Contact newContact;
	cout << "Enter Full name for new contact ->_";
	getline(cin, newContact.FullName);
	cin.ignore();

	cout<< "Enter phone number for new contact ->_";
	cin >> newContact.phoneNumber;
	cin.ignore();

	contacts.push_back(newContact);

	ofstream fout;
	fout.open(fileName, fstream::app);

	bool isOpen = fout.is_open();
	if (isOpen==false) {
		cout << "Error: Application can't connecting to database file" << endl;

	}
	else {
		fout << newContact.FullName;
		fout << newContact.phoneNumber;
	}
	fout.close();
	cout << "New contact successful added..." << endl;
		PAUSE
		CLEAR

}

void showAllContact()
{
	for (Contact item:contacts) {
		cout << item.FullName << " - " << item.phoneNumber << endl;
	}
}
