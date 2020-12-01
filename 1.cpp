// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "1.h"
#include<ctype.h>
using namespace std;
struct NOTE {
	char fio[20];
	int number;
	int birth[3];
	void print()
	{
		cout << "FIO: " << fio << endl << "Phone number: " << number << endl << "Birthday: " << birth[0] << "." << birth[1] << "." << birth[2] << endl;
	}
};


void AlphabetList()
{
	NOTE human[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter fio: ";
		cin >> human[i].fio; '\n';
		while (true) {
			if (isdigit(*human[i].fio)) {
				cin.clear();
				cout << "WRONG NAME" << endl << "Enter a name ";
				cin >> human[i].fio;
			}
			else {
				break;
			}
		}

		cout << "Enter phone number: ";
		cin >> human[i].number; '\n';
		while (true)
		{
			if (human[i].number > 0) { break; }
			else
			{
				cout << "WRONG NUMBER" << endl << "Enter phone number " << endl;
				cin >> human[i].number;
			}
		}
		cout << "Enter day: ";
		cin >> human[i].birth[0]; '\n';
		while (true)
		{
			if ((human[i].birth[0] > 0 && human[i].birth[0] < 32)) { break; }
			else
			{
				cout << "WRONG NUMBER" << endl << "Enter day " << endl;
				cin >> human[i].birth[0];
			}
		}
		cout << "Enter month: ";
		cin >> human[i].birth[1]; '\n';
		while (true)
		{
			if ((human[i].birth[1] > 0 && human[i].birth[1] < 13)) { break; }
			else
			{
				cout << "WRONG NUMBER" << endl << "Enter month " << endl;
				cin >> human[i].birth[1];
			}
		}
		cout << "Enter year: ";
		cin >> human[i].birth[2]; '\n';
		while (true)
		{
			if ((human[i].birth[2] > 1900 && human[i].birth[2] < 2020)) { break; }
			else
			{
				cout << "WRONG NUMBER" << endl << "Enter year " << endl;
				cin >> human[i].birth[2];
			}
		}
		cout << "///////////////////////////////////////" << endl;
	}

	int n = sizeof(human) / sizeof(NOTE);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (strcmp(human[j].fio, human[j + 1].fio) > 0)
			{
				NOTE  k = human[j];
				human[j] = human[j + 1];
				human[j + 1] = k;

			}

		}
	}
	for (NOTE note : human)
	{
		note.print();
	}
	cout << "///////////////////////////////////////" << endl;
	int d, count = 0;
	cout << "ENTER MONTH 1-12: ";
	cin >> d;
	for (int i = 0; i < 3; i++)
	{
		if (d == human[i].birth[1])
		{

			cout << "FIO: " << human[i].fio << endl << "Phone number: " << human[i].number << endl << "Birthday: " << human[i].birth[0] << "." << human[i].birth[1] << "." << human[i].birth[2] << endl;
			cout << "///////////////////////////////////////" << endl;
		}
	}
}
void Delete()
{
	char f[20]; NOTE human[3];
	cout << "Enter the name to delete: ";
	cin >> f; '\n';
	for (int i = 0; i < 3; i++)
	{
		if (strcmp(human[i].fio, f) == 0)
		{
			cout << "FIO: " << human[i].fio << endl << "Phone number: " << human[i].number << endl;
			for (int j = 0; j < 3; j++)
			{
				cout << "Birthday: " << human[i].birth[j] << "." << endl;
			}

			cout << "///////////////////////////////////////" << endl;
		}
	}
}
void Update()
{
	char fio[20]; NOTE human[3];
	int c, choice;
	cout << "Enter the name to update: ";
	cin >> fio; '\n';
	for (int i = 0; i < 3; i++)
	{
		human[i].birth;
		human[i].fio;
		human[i].number;
		cout << "What do you want to change?" << endl;
		cout << "1.FIO." << endl;
		cout << "2.Phone number." << endl;
		cout << "3.Birthday." << endl;
		cout << "Enter a choice";
		cin >> choice;
		switch (choice) {
		case 1:
		{
			cout << "Enter new name: ";
			cin >> human[i].fio; break;

			cout << "///////////////////////////////////////" << endl;
		}
		case 2:
		{
			cout << "Enter new phone number: ";
			cin >> human[i].number; break;

			cout << "///////////////////////////////////////" << endl;
		}
		case 3:
		{
			cout << "Enter new birthday: ";
			cout << "Enter day: ";
			cin >> human[i].birth[0]; '\t';
			cout << "Enter month: ";
			cin >> human[i].birth[1]; '\t';
			cout << "Enter year: ";
			cin >> human[i].birth[2]; '\t'; break;

			cout << "///////////////////////////////////////" << endl;
		}
		}
	}

}
void Search()
{
	NOTE human[3];
	char p[10];
	cout << "Enter name";
	cin >> p;
	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		if (strcmp(human[i].fio, p) == 0)
		{
			for (int i = 0; i < 3; i++)
			{
				cout << "FIO: " << human[i].fio << endl << "Phone number: " << human[i].number << endl << "Birthday: " << human[i].birth[0] << "." << human[i].birth[1] << "." << human[i].birth[2] << endl;
			}
		}
		count++;

		if (count == 0)
		{
			cout << "There id no such person!";
		}
		cout << "///////////////////////////////////////" << endl;
	}
}
void Menu()
{
	cout << "1 - Add a person" << std::endl;
	cout << "2 - Search a person" << std::endl;
	cout << "3 - Update the information" << std::endl;
	cout << "4 - Delete a person" << std::endl;
}
void Add()
{
	int n;
	cout << "Number of people to add: ";
	cin >> n;
	NOTE human[3];
	for (int i = 0; i < n; i++)
	{
		cout << "Name: ";
		cin >> human[i].fio; '\n';
		while (true) {
			if (isdigit(*human[i].fio)) {
				cin.clear();
				cout << "WRONG NAME" << endl << "Enter a fio " << endl;
				cin >> human[i].fio;
			}
			else {
				break;
			}
		}
		cout << "Phone number: ";
		cin >> human[i].number; '\n';

		for (int j = 0; j < 3; j++)
		{
			cout << "Birthday: ";
			cin >> human[i].birth[j]; '\n';

		}
		cout << "///////////////////////////////////////" << endl;
	}
}
int main()
{
	AlphabetList();
	Menu();
	int choice;
	cout << "Enter choice";
	cin >> choice;
	switch (choice)
	{
	case 1: Add(); break;
	case 2:  Search(); break;
	case 3:  Update(); break;
	case 4:  Delete(); break;
		cout << "///////////////////////////////////////" << endl;
	}
}



